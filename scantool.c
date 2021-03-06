/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

$Id: scantool.c,v 1.35 2004/04/15 11:37:11 eichholz Exp $

(C) Marian Eichholz 2001

====================================================================== */

#include "sm3600-scantool.h"
#include "g4.h"

#define REVISION "$Revision: 1.35 $"

#define USAGE \
"usage: %s <outfile> <resolution> <x> <y> <w> <h>" \
"\n\n(C) Marian Eichholz and Glenn Ramsey 2001"\
"\n\noptions:"\
"\n\t-V : tell version"\
"\n\t-h : this help"\
"\n\t-i : interactive testing mode"\
"\n\t-v : verbose output"\
"\n\t-b : brightness set to <-255-255>"\
"\n\t-c : contrast set to <-255-255>"\
"\n\t-m : mode for 'color', 'gray', 'line' or 'halftone'"\
"\n\t-p : preset for 'copy', 'fax'"\
"\n\t-q : set overall quality to 'fast', 'high' or 'best'"\
"\n\t-O : skip initial slider returning and calibration"\
"\n\t-o : output encoding as 'g4tiff', 'pcl', 'bitmap', 'noenc'"\
"\n"\
"\n\t-d : set debug <flags> and r(aw) write mode"\
"\n"\
"\n<outfile> may be '-' for standard output"\
"\n\n"

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

CatchAbortRequest()

A signal handler for catching the all important SIGINT (Ctrl-C).

********************************************************************** */

static void CatchAbortRequest(int idSignal, siginfo_t * psi, void * pDummy2)
{
  sigset_t set;
  sigemptyset(&set);
  sigaddset(&set, idSignal);
  sigprocmask(SIG_BLOCK, &set, NULL);
  dprintf(DEBUG_SIGNALS,"got a %d signal!\n",idSignal);
  switch (idSignal)
    {
    case SIGINT:
      devInstance.state.bCanceled=true;
      if (devInstance.bVerbose)
	fprintf(stderr,"ABORT requested...\n");
      break;
    }
  sigprocmask(SIG_UNBLOCK, &set, NULL);
}

/* **********************************************************************

SetSignalHandler(bSet)

Install or deinstall the signal handler for INT.

********************************************************************** */

static void SetSignalHandler(TBool bSetit)
{
  static struct sigaction sigCatcher;

  memset(&sigCatcher,0,sizeof(sigCatcher));

  sigCatcher.sa_sigaction=CatchAbortRequest;
  sigemptyset(&sigCatcher.sa_mask);
  if (bSetit)
    {
      sigaction(SIGINT,  &sigCatcher, NULL);
    }
}

/* **********************************************************************

ExitCheck(pinst)

********************************************************************** */

void ExitCheck(TInstance *this)
{
  if (!this->nErrorState) return;
  SetSignalHandler(false);
  fprintf(stderr,"fatal:%s [%s] (aborting)\n",
	  this->szErrorReason ? this->szErrorReason  : "unknown reason",
	  achErrorMessages[this->nErrorState]);

  ResetCalibration(this);
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
	return SetError(this,SANE_STATUS_IO_ERROR,
			"set USB config: %s",usb_strerror());
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
  while (chChoice!='q' && !this->state.bCanceled)
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
	case 'o': DoOriginate(this,true); break;
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
  TState rc;
  if (idOutputFormat!=PFMT_DEFAULT)
    switch (this->mode)
      {
      case halftone:
      case line:
	break;
      default:
	return SetError(this,SANE_STATUS_INVAL,"no multibit formats with bit encoder");
	exit(1);
      }
  if (!this->fhScan)
    return SetError(this,SANE_STATUS_INVAL,"output file not given");

  /* fprintf(stderr,"Verbose 1 = %d\n",this->bVerbose); */
  rc=SANE_STATUS_GOOD;
  if (rc==SANE_STATUS_GOOD) rc=DoInit(this);
  if (rc==SANE_STATUS_GOOD)
    rc=  this->bOptSkipOriginate
      ? FakeCalibration(this)
      : DoOriginate(this,true);
#ifdef G4TOOL
  GetAreaSize(this); /* get cxPixel/cyPixel */
  if (idOutputFormat!=PFMT_DEFAULT)
    {
      BOOL bOk;
      lcchFullPageLine   =(this->state.cxPixel+7L)/8L;
      lcFullPageLines    =this->state.cyPixel;
      this->cchPageBuffer=lcchFullPageLine*lcFullPageLines;
      pchFullPage        =this->pchPageBuffer
	                 =calloc(1,this->cchPageBuffer);
      bRotate            =FALSE;
      bVerboseX          =this->bVerbose;
      CHECK_POINTER(pchFullPage);
      /* bit buffer must not overflow */
      bOk=SetTables();
      CHECK_ASSERTION(bOk);
      CHECK_ASSERTION(this->state.cxPixel<=CX_MAX);
    }
#endif
  if (rc==SANE_STATUS_GOOD) rc=DoJog(this,this->calibration.yMargin);
  if (rc==SANE_STATUS_GOOD) rc=DoScanFile(this);
  if (rc==SANE_STATUS_GOOD) rc=DoJog(this,-this->calibration.yMargin);

#ifdef G4TOOL
  if (idOutputFormat==PFMT_DEFAULT)
    return rc;
  nClipType=CLIP_FIX_BORDERS; /* only clip the left/top margins away */
  /* nClipType=CLIP_NONE; */
  switch (idOutputFormat)
    {
    case PFMT_TIFFG4: nFileFormat=OFMT_G4; break;
    case PFMT_PBM:    nFileFormat=OFMT_PBM; break;
    case PFMT_PCL:    nFileFormat=OFMT_PCL; break;
    }
  /* engineer the encoder modules */
  /* use the original values from the scanner driver */
  GetAreaSize(this); /* get cxPixel/cyPixel */
  nPCLResolution=this->param.res;
  cxPaper       =this->state.cxPixel;
  cyPaper       =this->state.cyPixel;

  /* to the transcoding job */
  if (!EncodePage(this->fhScan)) rc=SANE_STATUS_IO_ERROR;

  /* TODO: Puffer aufsetzen und Seite transkodieren */
  if (this->pchPageBuffer) free(this->pchPageBuffer);
#endif
  return rc;
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
	  TModel model;
	  dprintf(DEBUG_DEVSCAN, "found dev %04X/%04X\n",
		  pdev->descriptor.idVendor,
		  pdev->descriptor.idProduct);
	  model=GetScannerModel(pdev->descriptor.idVendor,
				pdev->descriptor.idProduct);
	  if (model!=unknown)
	    {
	      this->model=model;
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
  int                nOptChar;
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

  idOutputFormat=PFMT_DEFAULT; /* direct PBM */

  ResetCalibration(this);

  this->quality=fast;
  this->mode=color;
  while (EOF!=(nOptChar=getopt(cArg,ppchArg,"VOvhid:l:o:p:q:m:c:b:")))
    {
      char chOpt=(char)nOptChar;
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
	case 'O': this->bOptSkipOriginate=true; break;
#ifdef G4TOOL
	case 'o': /* outut encoding */
	  switch (tolower(*optarg))
	    {
	    case 'p': idOutputFormat=PFMT_PCL; break;
	    case 'g': idOutputFormat=PFMT_TIFFG4; break;
	    case 'b': idOutputFormat=PFMT_PBM; break;
	    case 'n': idOutputFormat=PFMT_DEFAULT; break;
	    }
	  break;
#endif
	case 'p': /* preset */
	  switch (tolower(*optarg))
	    {
	    case 'c': /* copy */
	      this->param.res=600;
	      this->param.x=this->param.y=0;
	      this->param.cx=2498*4;
	      this->param.cy=3508*4;
	      this->param.nBrightness=50;
	      idOutputFormat=PFMT_PCL;
	      this->mode=halftone;
	      break;
	    case 'f': /* fax */
	      this->param.res=200;
	      this->param.x=this->param.y=300;
	      this->param.cx=9200;   /* TODO */
	      this->param.cy=12990;
	      this->mode=line;
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

  SetSignalHandler(true);

  if (bInteractive)
    RunDialog(this);
  else
    ScanToFile(this);

  ExitCheck(this);

  ResetCalibration(this);
  if (this->fhScan) fclose(this->fhScan);
  if (this->fhLog)  fclose(this->fhLog);
  if (this->hScanner) usb_close(this->hScanner);
  SetSignalHandler(false);
 
  return 0;
}
