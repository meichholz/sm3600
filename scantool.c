/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

$Id: scantool.c,v 1.12 2001/03/30 22:50:31 eichholz Exp $

(C) Marian Eichholz 2001

====================================================================== */

#include "scantool.h"

#define REVISION "$Revision: 1.12 $"

#define USAGE \
"usage: %s <outfile> <resolution> <x> <y> <w> <h>" \
"\n\n(C) Marian Eichholz and Glenn Ramsey 2001"\
"\n\noptions:"\
"\n\t-V : tell version"\
"\n\t-h : this help"\
"\n\t-v : verbose output"\
"\n\t-d : set debug <flags> and r(aw) write mode"\
"\n"\
"\n\t-q : set overall quality to 'fast', 'high' or 'best'"\
"\n\t-m : mode for 'color', 'gray', 'line' or 'halftone'"\
"\n\t-p : paper preset for 'a4', 'letter', 'fax'"\
"\n\n"

#define SCANNER_VENDOR     0x05DA

static unsigned short aidProduct[] = {
  0x40B3, 0x40CA, 0x40FF, /* ScanMaker 3600 */
  0x0 };

/* **********************************************************************

TellRevision()

Extract Revision number from the RCS string

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

OpenScanner(pDevice)

Just a funny Macro for setting up the interface and USB configuration.

********************************************************************** */

static struct usb_dev_handle *OpenScanner(struct usb_device *pScanner)
{
  int rc;
  struct usb_dev_handle *hScanner;

  if (bVerbose) fprintf(stderr,"opening scanner...\n");

  hScanner=usb_open(pScanner);
  if (!hScanner)
    Panic(PANIC_SETUP, "cannot open scanner device");
  dprintf(DEBUG_DEVSCAN,"scanner is open\n");
  rc=0;

  if (!rc)
    {
      rc=usb_claim_interface(hScanner, 0); /* 0 or 1 ? */
      if (rc<0) dprintf(DEBUG_COMM,"make getif!\n");
      rc=0;
    }
  if (!rc)
    {
      rc=usb_set_configuration(hScanner, 1); /* 0 or 1 ? */
      if (rc<0)
	Panic(PANIC_SETUP,"set USB config: %s",usb_strerror());
    }
  return hScanner;
}

/* **********************************************************************

RunDialog(fh,pDevice)

Let the user specify, what to do.

********************************************************************** */

void RunDialog(FILE *fhOut, struct usb_device *pScanner)
{
  char chChoice;
  int  nParam,nSign;
  printf("opening scanner...\n");
  hScanner=OpenScanner(pScanner);
  chChoice='?';
  nParam=0;
  nSign=1;
  while (chChoice!='q')
    {
      if (chChoice!='\n')
	{
	  printf("\nParm: xy=[%d,%d], wh=[%d,%d], res=%d dpi",
		 param.x,param.y,param.cx,param.cy,param.res);
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
	case 'x': param.x=nParam; nParam=0; nSign=1; break;
	case 'y': param.y=nParam; nParam=0; nSign=1; break;
	case 'w': param.cx=nParam; nParam=0; nSign=1; break;
	case 'h': param.cy=nParam; nParam=0; nSign=1; break;
	case 'r': param.res=nParam; nParam=0; nSign=1; break;
	case 'i': DoInit(); break;
	case 'g': DoScanGray(fhOut,param.res,
			      param.x*param.res/1200,
			      param.y*param.res/1200,
			      param.cx*param.res/1200,
			      param.cy*param.res/1200); break;
	case 'c': DoScanColor(fhOut,param.res,
			      param.x*param.res/1200,
			      param.y*param.res/1200,
			      param.cx*param.res/1200,
			      param.cy*param.res/1200); break;
	case 'o': DoOriginate(); break;
	case 'j': DoJog(nParam*nSign); break;
	case 'l': DoLampSwitch(nParam); break;
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

    }
  usb_close(hScanner);
}

/* **********************************************************************

ScanToFile(fh,pDevice)

Do some funny things with the given scanner and see if it crashes.

********************************************************************** */

void ScanToFile(FILE *fhOut, struct usb_device *pScanner)
{
  if (!fhOut)
    Panic(PANIC_SETUP,"test scan file not given");

  hScanner=OpenScanner(pScanner);

#ifdef CHECK_INITIALISATION
  if (RegRead(R_INIT,2)!=RVAL_INIT)
    {
    }
#else
  DoInit();
  DoJog(100);
  DoOriginate();
#endif
  DoJog(calibration.yMargin);

  switch (optMode)
    {
    case color:
      DoScanColor(fhOut,param.res,
		  param.x*param.res/1200,
		  param.y*param.res/1200,
		  param.cx*param.res/1200,
		  param.cy*param.res/1200);
      break;
    case gray:
      DoScanGray(fhOut,param.res,
		  param.x*param.res/1200,
		  param.y*param.res/1200,
		  param.cx*param.res/1200,
		  param.cy*param.res/1200);
      break;
    case line:
      break;
    case halftone:
      break;
    }

  DoJog(-calibration.yMargin);

  usb_close(hScanner); hScanner=NULL;
}

/* **********************************************************************

FindScanner()

Initialise the library.
Enumerate USB devices and look for the Microtek-3600 signature.

********************************************************************** */

struct usb_device *FindScanner(void)
{
  struct usb_bus    *pbus;
  struct usb_device *pdev;
  if (usb_find_busses())  Panic(PANIC_SETUP, "no USB found");
  usb_find_devices();
  if (bVerbose) fprintf(stderr,"scanning for scanner...\n");
  if (!usb_busses) Panic(PANIC_SETUP,"no usb bus found");
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
	  for (pidProduct=aidProduct; pidProduct; pidProduct++)
	      if (pdev->descriptor.idVendor  ==  SCANNER_VENDOR &&
		  pdev->descriptor.idProduct == *pidProduct)
		return pdev;
	}
    }
  return NULL;
}

/* ============================== MAIN ============================== */

int main(int cArg, char * const ppchArg[])
{
  char               chOpt;
  struct usb_device  *pdevScanner;
  int                iOpt;
  /* Default is full scan bed at 300 DPI */
  param.x=param.y=0;
  param.res=300;
  param.cx=10250;
  param.cy=14078;
  calibration.xMargin=200;
  calibration.yMargin=0x019D;
  calibration.nHoleGray=10;
  calibration.rgbWhite=0xC0C0C0;
  calibration.nBarGray=0xC0;
  optQuality=fast;
  optMode=color;
  while (EOF!=(chOpt=getopt(cArg,ppchArg,"Vvhid:l:o:p:q:m:")))
    {
      switch (chOpt)
	{
	case 'h':
	  printf(USAGE,PROG_NAME);
	  exit(0);
	  break;
        case 'v': bVerbose=true; break;
	case 'V': TellRevision(); exit(0); break;
	case 'l': szLogFile=strdup(optarg); break;
        case 'i': bInteractive=true; break;
	case 'p': /* preset */ break;
	case 'q':
	  switch (tolower(*optarg))
	    {
	    case 'f': optQuality=fast; break;
	    case 'h': optQuality=high; break;
	    case 'b': optQuality=best; break;
	    default: printf(USAGE,PROG_NAME); exit(1);
	    }
	  break;
	case 'm':
	  switch (tolower(*optarg))
	    {
	    case 'c': optMode=color; break;
	    case 'g': optMode=gray; break;
	    case 'l': optMode=line; break;
	    case 'h': optMode=halftone; break;
	    default: printf(USAGE,PROG_NAME); exit(1);
	    }
	  break;
        case 'd':
	  switch (*optarg)
	    {
	    case 'r': bWriteRaw=true; break;
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
	case 1: param.res=strtoul(ppchArg[optind+iOpt],NULL,10); break;
	case 2: param.x=strtoul(ppchArg[optind+iOpt],NULL,10); break;
	case 3: param.y=strtoul(ppchArg[optind+iOpt],NULL,10); break;
	case 4: param.cx=strtoul(ppchArg[optind+iOpt],NULL,10); break;
	case 5: param.cy=strtoul(ppchArg[optind+iOpt],NULL,10); break;
	}
    }

  switch (param.res)
    {
    case 75:
    case 100:
    case 200:
    case 300:
    case 600:
      break; /* ok */
    default:
      Panic(PANIC_SETUP,"unsupported resolution requested");
    }

  
  /* ======================================== initalize */

  usb_set_debug(0);
  usb_init();
  if (!(pdevScanner=FindScanner()))
    Panic(PANIC_SETUP, "no microtek 3600 connected");

  /* ======================================== open and create files */

  fhLog = bInteractive ? stderr : stderr;
  if (szLogFile)
    {
      fhLog=fopen(szLogFile,"a+");
      if (!fhLog)
	Panic(PANIC_SETUP,"cannot open log file \%s\": %s",
	      szLogFile,strerror(errno));
    }
  if (szScanFile)
    {
      fhScan=fopen(szScanFile, bWriteRaw ? "a" : "w");
      if (!fhScan)
	Panic(PANIC_SETUP,"cannot create scan file \"%s\": %s",
	      szScanFile,strerror(errno));
    }
  else
    fhScan=stdout;

  /* ======================================== to the work */

  if (bInteractive)
    RunDialog(fhScan,pdevScanner);
  else
    ScanToFile(fhScan,pdevScanner);

  Panic(0,NULL); /* close all files, free resources and exit */
  return 0; /* not reached */
}
