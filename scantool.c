/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

$Id: scantool.c,v 1.10 2001/03/27 22:34:05 eichholz Exp $

(C) Marian Eichholz 2001

====================================================================== */

#include "scantool.h"

#define REVISION "$Revision: 1.10 $"

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

DoScanColor()

********************************************************************** */

#define ORDER_RGB             "012"
#define ORDER_BRG             "120"

/* Parameter are in resolution units! */
void DoScanColor(FILE *fh, int nResolution,
		 int xBorder, int yBorder,
		 int cxPixel, int cyPixel)
{

  /* live could be easy: Simple calculate a window, start the scan,
     get the data and get off. It dimply does not work.  We have to
     deal with the fact, that the pixels are reported with color scan
     line by color scan line, and have to be rearranged to RGB
     triples. They even ar enot always in RGB order, but mostly in BRG
     order. And they have a skew of 2/300 inch , given by the slider
     construction.  Thus, we have to deal with several buffers, some
     interpolation, and related management stuff. */

  int    cxWindow,cxMax; /* in real pixels */
  int    cyTotalPath;    /* from bed start to window end in 600 dpi */
  int    nFixAspect;     /* aspect ratio in percent, 75-100 */
  char **ppchLines;      /* backlog triple stripe line buffers */
  char  *szOrder;        /* ORDER_XXX "012" or "120" */
  char  *pchBuf;         /* bulk transfer buffer */
  int    cBackLog;       /* depth of ppchLines */
  int    ySensorSkew;    /* distance from sensor to sensor in scan lines */
  if (bVerbose)
    fprintf(stderr,"scanning %d by %d in color\n",cxPixel,cyPixel);
  nFixAspect=100;
  ySensorSkew=0;
  switch (nResolution)
    {
    case 75:  nFixAspect=75; break;
    case 200: ySensorSkew=1; break;
    case 300: ySensorSkew=2; break;
    case 600: ySensorSkew=4; break;
    }
  /* since we need 2*ySensorSkew additional scan lines for de-skewing of
     the sensor lines, we enlarge the window and shorten the initial movement
     accordingly */
  cyTotalPath = (yBorder-2*ySensorSkew)*600/nResolution;
  DoJog(cyTotalPath);
  cyTotalPath += (cyPixel+2*ySensorSkew)*600/nResolution; /* for jogging back */

  /*
    regular scan is asynchronously, that is,
    the scanning is issued, and the driver does bulk reads,
    until there are no data left.
    Each line has a full R, G and B subline, 8bit each sample.
  */
  {
    unsigned char uchRegs[]={
      0xFC /*!!R_SPOS!!*/, 0x00 /*R_SPOSH*/, 0x24 /*!!0x03!!*/,
      0xB0 /*!!R_SWID!!*/, 0xC4 /*!!R_SWIDH!!*/, 0x06 /*!!R_STPS!!*/,
      0x00 /*!!R_STPSH!!*/, 0xFF /*!!0x08!!*/, 0xFF /*!!0x09!!*/,
      0x22 /*!!R_LEN!!*/, 0x07 /*!!R_LENH!!*/, 0x6D /*0x0C*/,
      0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
      0x00 /*0x10*/, 0x00 /*0x11*/, 0x42 /*!!0x12!!*/,
      0x15 /*0x13*/, 0x84 /*!!0x14!!*/, 0x2A /*0x15*/,
      0xC5 /*!!0x16!!*/, 0x40 /*0x17*/, 0xC5 /*!!0x18!!*/,
      0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
      0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
      0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
      0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
      0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
      0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
      0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
      0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
      0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
      0x43 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
      0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
      0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
      0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
      0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
      0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
      0x39 /*R_CTL*/, 0xC5 /*!!0x47!!*/, 0x40 /*0x48*/,
      0x9E /*0x49*/, 0x8C /*0x4A*/ };
    RegWriteArray(R_ALL, NUM_SCANREGS, uchRegs);
    RegWrite(R_SPOS, 2, xBorder*600/nResolution+calibration.xMargin);
    RegWrite(R_SLEN, 2, (cyPixel+1+2*ySensorSkew)*600/nResolution);
    szOrder=ORDER_BRG; 
    RegWrite(R_CCAL, 3, 0xFFFFFF); /* 0xBBGGRR */
    if (optQuality==fast)
      {
	
      }
    cxMax=cxPixel;
    cxWindow=cxPixel*600/nResolution;
    switch (nResolution)
      {
      case 75:
	RegWrite(R_XRES,1, 0x20); /* ups, can  do only 100 dpi horizontal */
	cxMax=cxPixel*100/75;
	RegWrite(R_SWID, 2, 0xC000 | cxMax*6);
	RegWrite(0x34, 1, 0x83); /* halfs the vertical resolution */
	RegWrite(0x47,1,0xC0); /* reduces the speed a bit */
	szOrder=ORDER_BRG;
	break;
      case 100:
	RegWrite(R_XRES,1, 0x20);
	RegWrite(R_SWID, 2, 0xC000 | cxWindow);
	RegWrite(0x34, 1, 0x63); /* halfs the vertical resolution */
	RegWrite(0x47,1,0xC0); /* reduces the speed a bit */
	/* I have no idea, what these differences are good for. The seem to produce
	   a slight blue presence.
	   RegWrite(0x16, 1, 0xC0);  RegWrite(0x18, 1, 0xC0);
	   RegWrite(0x12, 1, 0x40);  RegWrite(0x10, 2, 0x0728);
	   RegWrite(0x14, 1, 0x80); */
	break;
      case 200:
	RegWrite(R_XRES,1, 0x24);
	RegWrite(R_SWID, 2, 0xC000 | cxWindow);
	break;
      case 300:
	RegWrite(0x08,2, 0x6A6A);
	RegWrite(R_XRES,1, 0x2A);
	RegWrite(R_SWID, 2, 0x4000 | cxWindow);
	RegWrite(0x34, 1, 0x03); /* halfs the vertical resolution */
	RegWrite(0x47,1,0xC0); /* reduces the speed a bit */
	szOrder=ORDER_RGB;
	break;
      case 600:
	RegWrite(R_XRES,1, 0x3F);
	RegWrite(R_SWID, 2, 0xC000 | cxWindow);
	RegWrite(0x34, 1, 0x03); /* halfs the vertical resolution */
	RegWrite(0x47,1,0xC2); /* reduces the speed a bit */
	break;
      case 1200:
	/* not supported, since the driver supports only 600 dpi in color */
	break;
      }
  }

  cBackLog=1+2*ySensorSkew; /* enough for 1/100 inch sensor distance */
  ppchLines=calloc(cBackLog,sizeof(char*));
  pchBuf=malloc(0x8000);
  if (!ppchLines || !pchBuf) Panic(PANIC_RUNTIME,"no buffers available");

  RegWrite(R_CTL, 1, 0x39);    /* #1532[005.0] */
  RegWrite(R_CTL, 1, 0x79);    /* #1533[005.0] */
  RegWrite(R_CTL, 1, 0xF9);    /* #1534[005.0] */

  if (fh && !bWriteRaw)
    fprintf(fh,"P6\n%d %d\n255\n",cxPixel,cyPixel);
  {
    int iFrom,iTo,iChunk,cchBulk,iLine;
    
    for (iLine=0; iLine<cBackLog; iLine++)
      {
	ppchLines[iLine]=calloc(1,3*cxMax); /* must be less than 0x8000 */
	if (!ppchLines[iLine]) Panic(PANIC_RUNTIME,"no line buffer available");
      }
    iChunk=0;
    cchBulk=0;
    iTo=0;
    iFrom=cchBulk; /* no rest */
    iLine=0;
    do {
      /* "flush" rest of last buffer run */
      iChunk++;
      if (!bWriteRaw)
	{
	  iTo=0;
	  while (iFrom<cchBulk)
	    ppchLines[0][iTo++]=pchBuf[iFrom++];
	}
      /* read new buffer */
      cchBulk=BulkReadBuffer(pchBuf,0x8000);

      dprintf(DEBUG_SCAN,"bulk#%d, got %d bytes...\n",iChunk,cchBulk);

      if (bWriteRaw)
	fwrite(pchBuf,1,cchBulk,fh);
      else
	{
	  /* a few calculations are cached here to save CPU cycles */
	  int iOffsetR,iOffsetG,iOffsetB;
	  iOffsetR=(szOrder[0]-'0')*cxMax;
	  iOffsetG=(szOrder[1]-'0')*cxMax;
	  iOffsetB=(szOrder[2]-'0')*cxMax;
	  iFrom=0;
	  while (iFrom+3*cxMax<cchBulk)
	    {
	      char *pchLineSwap;
	      /* iTo starts with buffer offset from copy above */
	      while (iTo<3*cxMax) /* whole line or rest */
		ppchLines[0][iTo++]=pchBuf[iFrom++];
	      /* re-assemble pchLine */
	      pchLineSwap=ppchLines[cBackLog-1];
	      iLine++;
	      /* the first scan lines only fill the line backlog buffer */
	      if (iLine>2*ySensorSkew)
		{
		  /* dprintf(DEBUG_SCAN,"assembling line %d\n",++iLine); */
		  int nInterpolator=0;
		  for (iTo=0; iTo<cxMax; iTo++)
		    {
		      nInterpolator+=nFixAspect;
		      if (nInterpolator<100) continue; /* res. reduction */
		      nInterpolator-=100;
		      fwrite(ppchLines[2*ySensorSkew]+iTo+iOffsetR,1,1,fh);
		      fwrite(ppchLines[ySensorSkew]+iTo+iOffsetG,1,1,fh);
		      fwrite(ppchLines[0]+iTo+iOffsetB,1,1,fh);
		    }
		}
	      /* cycle backlog buffers */
	      for (iTo=cBackLog-2; iTo>=0; iTo--)
		ppchLines[iTo+1]=ppchLines[iTo];
	      ppchLines[0]=pchLineSwap;
	      iTo=0; /* reset buffer offset */
	    } /* while pixels available */
	} /* ! bWriteRaw */
      /* Rest from iFrom is to be written into next line buffer */
    } while (cchBulk==0x8000);
  } /* color descrambling */
  /* free all dynamic space */
  for (cxMax=0; cxMax<cBackLog; free(ppchLines[cxMax++]));
  free(pchBuf); free(ppchLines); 
  /* move slider back to start */
  DoJog(-cyTotalPath);
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
	case 'g': DoScanGray(fhOut,200); break;
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
    case 50:
    case 75:
    case 100:
    case 200:
    case 300:
    case 600:
      /* case 1200: */
      break; /* ok */
    default:
      Panic(PANIC_SETUP,"unsupported resulution requested");
    }

  
  /* ======================================== initalize */

  usb_set_debug(1);
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
