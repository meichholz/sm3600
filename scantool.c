/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

$Id: scantool.c,v 1.18 2001/04/13 12:08:55 eichholz Exp $

(C) Marian Eichholz 2001

====================================================================== */

#include "scantool.h"

#define REVISION "$Revision: 1.18 $"

#define USAGE \
"usage: %s <outfile> <resolution> <x> <y> <w> <h>" \
"\n\n(C) Marian Eichholz and Glenn Ramsey 2001"\
"\n\noptions:"\
"\n\t-V : tell version"\
"\n\t-h : this help"\
"\n\t-v : verbose output"\
"\n\t-b : brightness set to <-255-255>"\
"\n\t-c : contrast set to <-255-255>"\
"\n\t-m : mode for 'color', 'gray', 'line' or 'halftone'"\
"\n\t-p : paper preset for 'a4', 'letter', 'fax'"\
"\n\t-q : set overall quality to 'fast', 'high' or 'best'"\
"\n"\
"\n\t-d : set debug <flags> and r(aw) write mode"\
"\n"\
"\n<outfile> may be '-' for standard output"\
"\n\n"

#define SCANNER_VENDOR     0x05DA

static unsigned short aidProduct[] = {
  0x40B3, 0x40CA, 0x40FF /* not official */, /* ScanMaker 3600 */
  0x40B8, 0x40CB, /* ScanMaker 3700 */
  /* SM3750 unknown */
  0x0 };

/* **********************************************************************

TellRevision()

Extract Revision number from the RCS string
SM3600_Device
********************************************************************** */

static void TellRevision(void)
{
  char *pch=REVISION;
  while (*pch && *pch!=':') pch++;
  if (*pch++)
    {
      while (*pch && *pch!='$')
	{
	  if (*pch!=' ') fputc(*pch,stdout);
	  pch++;
	} 
    }
  else
    printf("unknown");
  printf("\n");
}

/* **********************************************************************

ExitCheck(pinst)

********************************************************************** */

void ExitCheck(TInstance *this)
{
  if (!this->nErrorState) return;
  fprintf(stderr,"fatal:%s [%s] (aborting)\n",
	  this->szErrorReason ? this->szErrorReason  : "unknown reason",
	  achErrorMessages[this->nErrorState]);
  if (this->hScanner) usb_close(this->hScanner);
  if (this->fhLog) fclose(this->fhLog);
  if (this->fhScan) fclose(this->fhScan);
  exit(this->nErrorState);
}

/* **********************************************************************

OpenScanner(pDevice)

Just a funny Macro for setting up the interface and USB configuration.

********************************************************************** */

static int OpenScanner(TInstance *this,
		       struct usb_device *pScanner)
{
  int rc;
  if (this->bVerbose) fprintf(stderr,"opening scanner...\n");

  this->hScanner=usb_open(pScanner);
  if (!this->hScanner)
    return SetError(this,SANE_STATUS_IO_ERROR, "cannot open scanner device");
  dprintf(DEBUG_DEVSCAN,"scanner is open\n");
  rc=0;

  if (!rc)
    {
      rc=usb_claim_interface(this->hScanner, 0); /* 0 or 1 ? */
      if (rc<0) dprintf(DEBUG_COMM,"make getif!\n");
      rc=0;
    }
  if (!rc)
    {
      rc=usb_set_configuration(this->hScanner, 1); /* 0 or 1 ? */
      if (rc<0)
	return SetError(this,SANE_STATUS_IO_ERROR,"set USB config: %s",usb_strerror());
    }
  return 0;
}

/* **********************************************************************

RunDialog()

Let the user specify, what to do.

********************************************************************** */

static int RunDialog(TInstance *this)
{
  char chChoice;
  int  nParam,nSign;
  chChoice='?';
  nParam=0;
  nSign=1;
  while (chChoice!='q')
    {
      if (chChoice!='\n')
	{
	  printf("\nParm: xy=[%d,%d], wh=[%d,%d], res=%d dpi",
		 this->param.x,this->param.y,
		 this->param.cx,this->param.cy,this->param.res);
	printf("\nMenu:\ti(nit, o(riginate, j(og, l(amp\n"
	       "\tg(ray scan, c(olor scan\n\tq(uit.\n(%d) ==>",nSign*nParam);
	}
      chChoice=tolower(fgetc(stdin));
      switch (chChoice)
	{
	case EOF:
	  fprintf(stderr,"EOF received!\n");
	  chChoice='q';
	  continue;
	case 'x': this->param.x=nParam; nParam=0; nSign=1; break;
	case 'y': this->param.y=nParam; nParam=0; nSign=1; break;
	case 'w': this->param.cx=nParam; nParam=0; nSign=1; break;
	case 'h': this->param.cy=nParam; nParam=0; nSign=1; break;
	case 'r': this->param.res=nParam; nParam=0; nSign=1; break;
	case 'i': DoInit(this); break;
	case 'g': this->mode=gray; DoScanFile(this); break;
	case 'c': this->mode=color; DoScanFile(this); break;
	case 'o': DoOriginate(this); break;
	case 'j': DoJog(this, nParam*nSign); break;
	case 'l': DoLampSwitch(this, nParam); break;
	case '-': nSign=-1; nParam=0; break;
	case '+': nSign= 1; nParam=0; break;
	case '\n':
	case 'q': continue;
	default: if (isdigit(chChoice))
	           nParam=nParam*10+(chChoice-'0');
	         else
		   printf("\a");
	         break;
	}
      INST_ASSERT();
    }
  return 0;
}

/* **********************************************************************

ScanToFile()

Do some funny things with the given scanner and see if it crashes.

********************************************************************** */

static int ScanToFile(TInstance *this)
{
  if (!this->fhScan)
    return SetError(this,SANE_STATUS_INVAL,"test scan file not given");

  DoInit(this);
  DoJog(this,100);
  DoOriginate(this);
  DoJog(this,this->calibration.yMargin);
  DoScanFile(this);
  INST_ASSERT();
  return DoJog(this,-this->calibration.yMargin);
}

/* **********************************************************************

FindScanner()

Initialise the library.
Enumerate USB devices and look for the Microtek-3600 signature.

********************************************************************** */

TState FindScanner(TInstance *this, struct usb_device ** ppdevOut)
{
  struct usb_bus    *pbus;
  struct usb_device *pdev;
  *ppdevOut=NULL;
  if (usb_find_busses())
    return SetError(this,SANE_STATUS_IO_ERROR, "no USB found");
  usb_find_devices();
  if (this->bVerbose) fprintf(stderr,"scanning for scanner...\n");
  if (!usb_busses)
    return SetError(this,SANE_STATUS_IO_ERROR,"no usb bus found");
  for (pbus = usb_busses; pbus; pbus = pbus->next)
    {
      /* 0.1.3b no longer has a "busnum" member */
      dprintf(DEBUG_DEVSCAN, "scanning bus %s\n", pbus->dirname);
      for (pdev=pbus->devices; pdev; pdev  = pdev->next)
	{
	  unsigned short *pidProduct;
	  dprintf(DEBUG_DEVSCAN, "found dev %04X/%04X\n",
		  pdev->descriptor.idVendor,
		  pdev->descriptor.idProduct);
	  /* the loop is not SO effective, but straight! */
	  for (pidProduct=aidProduct; *pidProduct; pidProduct++)
	      if (pdev->descriptor.idVendor  ==  SCANNER_VENDOR &&
		  pdev->descriptor.idProduct == *pidProduct)
		{
		  *ppdevOut=pdev;
		  return SANE_STATUS_GOOD;
		}
	}
    }
  return SetError(this,SANE_STATUS_UNSUPPORTED,"no ScanMaker connected");
}

/* ============================== MAIN ============================== */

int main(int cArg, char * const ppchArg[])
{
  char               chOpt;
  struct usb_device  *pdevScanner;
  int                iOpt;
  TInstance         *this;
  this=&devInstance;
  memset(this,0,sizeof(*this));

  /* Default is full scan bed at 300 DPI */
  this->param.res=300;
  this->param.x=
    this->param.y=0;
  this->param.cx=10250;
  this->param.cy=14078;
  this->param.nBrightness=0;
  this->param.nContrast=0;

  this->calibration.xMargin=200;
  this->calibration.yMargin=0x019D;
  this->calibration.nHoleGray=10;
  this->calibration.rgbBias=0x888884;
  this->calibration.nBarGray=0xC0;

  this->quality=fast;
  this->mode=color;
  while (EOF!=(chOpt=getopt(cArg,ppchArg,"Vvhid:l:o:p:q:m:c:b:")))
    {
      switch (chOpt)
	{
	case 'h':
	  printf(USAGE,PROG_NAME);
	  exit(0);
	  break;
        case 'v': this->bVerbose=true; break;
        case 'i': bInteractive=true; break;
	case 'V': TellRevision(); exit(0); break;
	case 'l': szLogFile=strdup(optarg); break;
	case 'p': /* preset */
	  switch (tolower(*optarg))
	    {
	    case 'c': /* copy */
	      this->param.res=300;
	      this->param.x=this->param.y=300;
	      this->param.cx=9200;
	      this->param.cy=12990;
	      break;
	    case 'f': /* fax */
	      this->param.res=200;
	      this->param.x=this->param.y=300;
	      this->param.cx=9200;   /* TODO */
	      this->param.cy=12990;
	      break;
	    }
	  break;
	case 'q':
	  switch (tolower(*optarg))
	    {
	    case 'f': this->quality=fast; break;
	    case 'h': this->quality=high; break;
	    case 'b': this->quality=best; break;
	    default: printf(USAGE,PROG_NAME); exit(1);
	    }
	  break;
	case 'm':
	  switch (tolower(*optarg))
	    {
	    case 'c': this->mode=color; break;
	    case 'g': this->mode=gray; break;
	    case 'l': this->mode=line; break;
	    case 'h': this->mode=halftone; break;
	    default: printf(USAGE,PROG_NAME); exit(1);
	    }
	  break;
	case 'b': this->param.nBrightness=atoi(optarg); break;
	case 'c': this->param.nContrast  =atoi(optarg); break;
        case 'd':
	  switch (*optarg)
	    {
	    case 'r': this->bWriteRaw=true; break;
	    default:  ulDebugMask=strtoul(optarg,NULL,10); break;
	    }
	  break;
	}
    }
  for (iOpt=0; optind>=0 && optind+iOpt<cArg; iOpt++)
    {
      switch (iOpt)
	{
	case 0: szScanFile=strdup(ppchArg[optind+iOpt]); break;
	case 1: this->param.res=strtoul(ppchArg[optind+iOpt],NULL,10);
	  break;
	case 2: this->param.x=strtoul(ppchArg[optind+iOpt],NULL,10);
	  break;
	case 3: this->param.y=strtoul(ppchArg[optind+iOpt],NULL,10); 
	  break;
	case 4: this->param.cx=strtoul(ppchArg[optind+iOpt],NULL,10);
	  break;
	case 5: this->param.cy=strtoul(ppchArg[optind+iOpt],NULL,10); 
	  break;
	}
    }

  switch (this->param.res)
    {
    case 75:
    case 100:
    case 200:
    case 300:
    case 600:
      break; /* ok */
    default:
      SetError(this,SANE_STATUS_INVAL,"unsupported resolution requested");
    }

  
  /* ======================================== initalize */

  usb_set_debug(0);
  usb_init();
  FindScanner(this,&pdevScanner);

  /* ======================================== open and create files */

  ExitCheck(this);
  this->fhLog = stderr;
  if (szLogFile)
    {
      this->fhLog=fopen(szLogFile,"a+");
      if (!this->fhLog)
	SetError(this,SANE_STATUS_IO_ERROR,"cannot open log file \%s\": %s",
	      szLogFile,strerror(errno));
    }
  ExitCheck(this);
  if (szScanFile && strcmp(szScanFile,"-"))
    {
      this->fhScan=fopen(szScanFile, this->bWriteRaw ? "a" : "w");
      if (!this->fhScan)
	SetError(this,SANE_STATUS_IO_ERROR,"cannot create scan file \"%s\": %s",
	      szScanFile,strerror(errno));
    }
  else
    this->fhScan=stdout;

  ExitCheck(this);

  /* ======================================== to the work */

  OpenScanner(this,pdevScanner);
  ExitCheck(this);

  if (bInteractive)
    RunDialog(this);
  else
    ScanToFile(this);

  ExitCheck(this);

  usb_close(this->hScanner);
  if (this->fhScan) fclose(this->fhScan);
  if (this->fhLog)  fclose(this->fhLog);
  if (this->hScanner) usb_close(this->hScanner);
 
  return 0;
}
