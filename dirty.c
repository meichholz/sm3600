/* ======================================================================

Testing driver for the Microtek 3600 scanner

$Id: dirty.c,v 1.1 2001/03/23 21:58:27 eichholz Exp $

01.03.2001 : Numerical register access.
27.02.2001 : TestScan routine in progress
26.02.2001 : Reading code for me-robot-logs seems ok.
24.02.2001 : Port to libusb 0.1.3b
19.02.2001 : Status byte ok.
18.02.2001 : Some steps toward cleaner setup.x
17.02.2001 : Start.

====================================================================== */

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

#include <errno.h>

#include "meusb.h"

#define REVISION "$Revision: 1.1 $"

#define USAGE \
"usage: %s" \
"\n\n(C) Marian Eichholz 2001"\
"\n\noptions:"\
"\n\t-V : tell version"\
"\n\t-h : this help"\
"\n\t-v : verbose output"\
"\n\t-d : set debug <flags>"\
"\n\t-r : replay from squeezed <scanlog>"\
"\n\t-o : write bulk content to <scanfile>"\
"\n\n"

#define DEBUG_SCAN     0x0001
#define DEBUG_COMM     0x0002
#define DEBUG_BASE     0x0011
#define DEBUG_DEVSCAN  0x0012
#define DEBUG_REPLAY   0x0014


typedef enum { false, true } TBool;

#define ERR_FAILED -1
#define OK         0

#define PANIC_SETUP  1
#define PANIC_COMM   2
#define PANIC_REPLAY 3
#define PANIC_INTERN 99

#define SCANNER_VENDOR     0x05DA

unsigned short aidProduct[] = {
  0x40B3, 0x40CA, 0x40FF, /* ScanMaker 3600 */
  0x0 };

static unsigned long      ulDebugMask;
static TBool              bVerbose;

static usb_dev_handle     *hScanner;

static char               *szLogFile;
static char               *szReplayFile;
static char               *szScanFile;
FILE                      *fhLog;
FILE                      *fhReplay;
FILE                      *fhScan;


/* **********************************************************************

dprintf(DEBUG_XXXX, format, ...)

Put a debug message on STDERR (or whatever). The message is prefixed with
a "debug:" and given, if the current debugging flags contain the given
flag "ulType".

********************************************************************** */

static void dprintf(unsigned long ulType, const char *szFormat, ...)
{
  va_list ap;
  if ((ulDebugMask & ulType)!=ulType) return;
  fprintf(stderr,"debug:");
  va_start(ap,szFormat);
  vfprintf(stderr,szFormat,ap);
  va_end(ap);
}

/* **********************************************************************

Panic(error, format, ...)

The program is aborted, all handles and ressources are freed (this
being global) and the user gets a nice panic screen :-)

********************************************************************** */

static void Panic(int nError, const char *szFormat, ...)
{
  va_list ap;
  if (szFormat!=NULL)
    {
      fprintf(stderr,"fatal:");
      va_start(ap,szFormat);
      vfprintf(stderr,szFormat,ap);
      va_end(ap);
      fprintf(stderr," (aborting)\n");
    }
  if (hScanner) usb_close(hScanner);
  if (fhLog) fclose(fhLog);
  if (fhReplay) fclose(fhReplay);
  if (fhScan) fclose(fhScan);
  exit(nError);
}

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

DumpBuffer(fh,pch,cch)

********************************************************************** */

static void DumpBuffer(FILE *fh, const char *pch, int cch)
{
  int i=0;
  while (i<cch)
    {
      if (!(i & 15))
	{
	  if (i) fprintf(fh,"\n");
	  fprintf(fh,"%04X:",i);
	}
      fprintf(fh," %02X",(unsigned char)pch[i]);
      i++;
    }
  fprintf(fh,"\n");
}

/* **********************************************************************

ReadLine(fh)

Read a line from a file to a static buffer and return it's address.
The buffer is guaranteed to be NUL terminated.
A pointer to NUL normally indicates an EOF or ERROR.
Normally, the buffer contains (CR and) LF.

********************************************************************** */

static char *ReadLine(FILE *fh)
{
  static char achLine[128];  /* we use in fact only short lines */

  *achLine='\0';
  if (feof(fh) || ferror(fh)) return achLine;
  fgets(achLine, sizeof(achLine)-1, fh);
  if (ferror(fh))
    Panic(PANIC_REPLAY, "error reading replay file [%s]",strerror(errno));
  achLine[sizeof(achLine)-1]='\0';
  return achLine;
}

/* **********************************************************************

ChopLine(sz)

Cut away trailing CR and LF from a string from a file.

********************************************************************** */

static char *ChopLine(char *sz)
{
  int cch=strlen(sz);
  if (cch && sz[cch-1]=='\n') sz[--cch]='\0';
  if (cch && sz[cch-1]=='\r') sz[--cch]='\0';
  return sz;
}

/* **********************************************************************

GetHexNumber(ppch,cchNumber,pbOk,chDelim)

Extracts an unsigned sedecimal number of fixed length from a line.
It checks the delimiting character.
If there is any problem, a flag is set and the result is undefined.
If the problem flag is already set, the function does nothing.
When Delimiter is NUL, there is no delimiter check.

********************************************************************** */

static int GetHexNumber(char **ppch, int cchNumber, TBool *pbOk, char chDelimiter)
{
  int i,nDigit;
  int n=0;
  if (!*pbOk) return -1;
  for (i=0; i<cchNumber; i++)
    {
      if (!isxdigit(**ppch))
	{
	  *pbOk=false;
	  return -1;
	}
      nDigit=toupper(**ppch)-'0';
      if (nDigit>9) nDigit -= 'A'-'9'-1;
      n=(n<<4)|nDigit;
      (*ppch)++;
    }
  if (chDelimiter)
    {
      if ((**ppch)!=chDelimiter)
	*pbOk=false;
      else
	(*ppch)++;
    }
  return n;
}

/* **********************************************************************

ReadReferenceBuffer(fh, pch, pcchActual,cchMax,chDirection)

Note: If the reference buffer was truncated, that is normal with scans,
the last data line must have a uppercase D-flag.

********************************************************************** */

static void ReadReferenceBuffer(FILE *fh, char *pchBuffer,
				int *pcchActual,
				int cchMax, char chDirection)
{
  int        iWrite;
  int        iURB;
  iWrite=0;
  if (!pchBuffer) return;
  iURB=-1;
  while (iWrite<cchMax)
    {
      char       *pch,*szLine;
      int         nIndex;
      TBool       bOk;
      if (feof(fh))
	Panic(PANIC_REPLAY,"unexpected EOF at URB %d, index %d",
	      iURB,iWrite);
      szLine=ReadLine(fh);
      dprintf(DEBUG_REPLAY,"data: index=%X, line=%s",iWrite,szLine);
      if (!*szLine || szLine[0]=='#') continue;
      if (tolower(szLine[0])!='d')
	Panic(PANIC_REPLAY,"data line expected: %s",ChopLine(szLine));
      if (szLine[1]!=chDirection)
	Panic(PANIC_REPLAY,"data direction does not fit: %s",ChopLine(szLine));
      pch=szLine+2;
      bOk=true;
      iURB  =GetHexNumber(&pch,4,&bOk,';');
      nIndex=GetHexNumber(&pch,4,&bOk,':');
      if (!bOk || nIndex!=iWrite)
	Panic(PANIC_REPLAY,"cannot continue data at URB %d, index %04X\n",
	      iURB, nIndex);
      while (isxdigit(*pch) && bOk && iWrite<cchMax)
	pchBuffer[iWrite++]=(char)GetHexNumber(&pch,2,&bOk,'\0');
      if (!bOk || *pch!='\n')
	Panic(PANIC_REPLAY,"error in data block: %s",ChopLine(szLine));
      if (szLine[0]=='D') /* last line */
	break;
    }
  *pcchActual=iWrite;
}

/* **********************************************************************

RegWriteString(iRegister, szHex)
RegWrite(iRegister, cb, ulValue)

********************************************************************** */

static int RegWriteString(int iRegister, char *szHex)
{
  char *pchBuffer,*pch;
  int   cch,i;
  TBool bOk;
  cch=strlen(szHex);
  /* some rough assertions */
  if (cch&1) Panic(PANIC_COMM,"odd number of byte(s) in buffer");
  cch/=2;
  if (cch<1 || (cch>3 && cch!=0x4A))
    Panic(PANIC_INTERN,"unsupported control transfer size %d",cch);
  pchBuffer=malloc(cch);
  bOk=true;
  pch=szHex;
  for (i=0; i<cch; i++)
    pchBuffer[i]=(char)GetHexNumber(&pch,2,&bOk,'\0');
  if (!bOk)
    Panic(PANIC_COMM,"error in reg out: %s",szHex);
  i=usb_control_msg(hScanner,  /* handle */
        0x40,                  /* request type */
	0x08,                  /* request */
	iRegister,             /* value */
	0,                     /* index */
	pchBuffer, cch,        /* bytes, size */
	10000);                /* TO, jiffies... */
  if (i<0)
    Panic(PANIC_COMM,"error during register write");
  free(pchBuffer);
  return 0;
}

static int RegWrite(int iRegister, int cb, unsigned long ulValue)
{
  char *pchBuffer;
  int   i;
  TBool bOk=true;
  /* some rough assertions */
  if (cb<1 || cb>4)
    Panic(PANIC_INTERN,"unsupported control transfer size %d",cb);
  pchBuffer=malloc(cb);
  if (!bOk)
    Panic(PANIC_COMM,"out of memory");
  for (i=0; i<cb; i++)
    {
      pchBuffer[i]=(char)(ulValue&0xFF);
      ulValue=ulValue>>8;
    }
  if (!bOk)
    Panic(PANIC_COMM,"error in reg out: %d,%d,%08X",iRegister,cb,ulValue);
  i=usb_control_msg(hScanner,  /* handle */
        0x40,                  /* request type */
	0x08,                  /* request */
	iRegister,             /* value */
	0,                     /* index */
	pchBuffer, cb,        /* bytes, size */
	10000);                /* TO, jiffies... */
  if (i<0)
    Panic(PANIC_COMM,"error during register write");
  free(pchBuffer);
  return 0;
}

/* **********************************************************************

RegCheckString(iRegister, szHex)
RegCheck(iRegister, cb, ulValue)

********************************************************************** */

static int RegCheckString(int iRegister, char *szHex)
{
  char *pchBuffer,*pchTransfer,*pch;
  int   cch,i;
  TBool bOk;
  cch=strlen(szHex);
  /* some rough assertions */
  if (cch&1) Panic(PANIC_COMM,"odd number of byte(s) in buffer");
  cch/=2;
  if (cch<1 || (cch>3 && cch!=0x4A))
    Panic(PANIC_INTERN,"unsupported control transfer size %d",cch);
  pchBuffer=malloc(cch);
  pchTransfer=calloc(1,cch);
  pch=szHex;
  bOk=true;
  for (i=0; i<cch; i++)
    pchBuffer[i]=(char)GetHexNumber(&pch,2,&bOk,'\0');
  if (!bOk)
    Panic(PANIC_COMM,"error in reg out: %s",szHex);
  i=usb_control_msg(hScanner,  /* handle */
        0xC0,                  /* request type */
	0x00,                  /* request */
	iRegister,             /* value */
	0,                     /* index */
	pchTransfer, cch,      /* bytes, size */
	10000);                /* TO, jiffies... */
  if (i<0)
    Panic(PANIC_COMM,"error during register read");
  if (memcmp(pchTransfer,pchBuffer,cch))
    {
      DumpBuffer(stdout,pchTransfer,cch);
      Panic(PANIC_COMM,"check register failed for %02X:%s",
	    iRegister,szHex);
    }
  free(pchTransfer); free(pchBuffer);
  return 0;
}

static int RegCheck(int iRegister, int cch, unsigned long ulValue)
{
  char *pchBuffer,*pchTransfer;
  int   i;
  TBool bOk;
  if (cch<1 || cch>3)
    Panic(PANIC_INTERN,"unsupported control transfer size %d",cch);
  pchBuffer=malloc(cch);
  pchTransfer=calloc(1,cch);
  bOk=true;
  for (i=0; i<cch; i++)
    {
      pchBuffer[i]=(char)(ulValue&0x00FF);
      ulValue=(ulValue>>8);
    }
  if (!bOk)
    Panic(PANIC_COMM,"error in reg out: %d,%d,%08X",iRegister,cch,ulValue);
  i=usb_control_msg(hScanner,  /* handle */
        0xC0,                  /* request type */
	0x00,                  /* request */
	iRegister,             /* value */
	0,                     /* index */
	pchTransfer, cch,      /* bytes, size */
	10000);                /* TO, jiffies... */
  if (i<0)
    Panic(PANIC_COMM,"error during register read");
  if (memcmp(pchTransfer,pchBuffer,cch))
    {
      DumpBuffer(stdout,pchTransfer,cch);
      Panic(PANIC_COMM,"check register failed for %d,%d,%08X",
	    iRegister,cch,ulValue);
    }
  free(pchTransfer); free(pchBuffer);
  return 0;
}

/* **********************************************************************

cchRead=BulkRead(fh,cchBulk)

********************************************************************** */

static int BulkRead(FILE *fhOut, unsigned int cchBulk)
{
  int   cchRead;
  char *pchBuffer;
  pchBuffer=(char*)malloc(cchBulk);
  cchRead=0;
  while (cchBulk)
    {
      int cchChunk;
      int cchReal;
      
      cchChunk=cchBulk;
      if (cchChunk>0x1000)
	cchChunk=0x1000;
      cchReal=usb_bulk_read(hScanner,
			    0x82,
			    pchBuffer+cchRead,
			    cchChunk,
			    10000);
      dprintf(DEBUG_COMM,"bulk read: %d -> %d\n",cchChunk,cchReal);
      if (cchReal>=0)
	{
	  cchBulk-=cchReal;
	  cchRead+=cchReal;
	  if (cchReal<cchChunk) /* last Chunk of a series */
	    break;
	}
      else
	Panic(PANIC_COMM,"bulk read of %d bytes failed: %s",
	      cchChunk,usb_strerror());
    }
  dprintf(DEBUG_COMM,"writing %d bytes\n",cchRead);
  if (fhOut)
    {
      fwrite(pchBuffer,1,cchRead,fhOut);
      free(pchBuffer);
      if (ferror(fhOut))
	Panic(DEBUG_COMM,"scan file write failed: %s",strerror(errno));
    }
  return cchRead;
}

/* **********************************************************************

RegRead(iRegister, int cch)

Read register in big endian (INTEL-) format.

********************************************************************** */

static unsigned int RegRead(int iRegister, int cch)
{
  char        *pchTransfer;
  int          i;
  unsigned int n;
  if (cch<1 || cch>4)
    Panic(PANIC_INTERN,"unsupported control read size %d",cch);
  pchTransfer=calloc(1,cch);
  i=usb_control_msg(hScanner,  /* handle */
        0xC0,                  /* request type */
	0x00,                  /* request */
	iRegister,             /* value */
	0,                     /* index */
	pchTransfer, cch,      /* bytes, size */
	10000);                /* TO, jiffies... */
  if (i<0)
    Panic(PANIC_COMM,"error during register read");
  n=0;
  for (i=cch-1; i>=0; i--)
    n=(n<<8)|(unsigned char)pchTransfer[i];
  free(pchTransfer);
  return n;
}

/* **********************************************************************

PerformVendorControl(fh, szLine)

All parameters are extracted. Data values are directly got from the file.

********************************************************************** */

static void PerformVendorControl(FILE *fh, char *szLine)
{
  char  chDirection;
  char *pchRef,*pchTransfer; /* two buffers for input and output */
  int   iURB,cchActual,nLength; /* simplified 32 bit */
  int   nRequest,nValue,nCode;
  char *pch;
  int   rc;
  TBool bOk;

  /* get the parameters */
  pchRef=pchTransfer=NULL;
  chDirection=szLine[1];
  bOk=true;
  if (chDirection!='i' && chDirection!='o')
    Panic(PANIC_REPLAY,"illegal direction code in \"%s\"",ChopLine(szLine));
  dprintf(DEBUG_REPLAY,"control: line=%s",szLine);
  pch=szLine+2;
  iURB    =GetHexNumber(&pch,4,&bOk,';');
  nRequest=GetHexNumber(&pch,2,&bOk,';'); /* 00 or 08 */
  nValue  =GetHexNumber(&pch,4,&bOk,';');
  nCode   =GetHexNumber(&pch,4,&bOk,';');
  nLength =GetHexNumber(&pch,4,&bOk,'\n');
  dprintf(DEBUG_REPLAY,"control: urb=%d, req=%X, val=%X, code=%X, len=%X\n",
	  iURB,nRequest,nValue,nCode,nLength);
  if (!bOk)
    Panic(PANIC_REPLAY,"parameter error in \"%s\"",ChopLine(szLine));
  /* allocate buffer */
  pchRef=calloc(1,nLength);
  pchTransfer=malloc(nLength);
  if (!pchRef || !pchTransfer)
    Panic(PANIC_REPLAY,"cannot reserve %d bytes buffers",nLength);
  
  /* get the reference or output buffer */
  ReadReferenceBuffer(fh, pchRef, &cchActual,nLength,chDirection);
  if (cchActual!=nLength)
    Panic(PANIC_REPLAY,"found %d instead of %d bytes", cchActual,nLength);

  if (cchActual!=nLength)
    Panic(PANIC_REPLAY,"control: URB %d truncated (%d from %d)\n",
	  iURB,cchActual,nLength);
  if (chDirection=='o')
    memcpy(pchTransfer,pchRef,nLength);
  else
    memset(pchTransfer,0,nLength);

  /* execute CONTROL */
  rc=usb_control_msg(hScanner, /* handle */
        nCode,                 /* request type */
	nRequest,              /* request */
	nValue,                /* value */
	0,                     /* index */
	pchTransfer, nLength,  /* bytes, size */
	10000);                /* TO, jiffies... */

  /* check the buffer(s) */
  if (rc<0)
    Panic(PANIC_REPLAY,"URB %d failed", iURB);
  if (chDirection=='i')
    {
      if (memcmp(pchTransfer,pchRef,nLength))
	{
	  fprintf(stderr, "warning: URB %d does not match\n",iURB);
	  fprintf(stderr, "ref:\n");
	  DumpBuffer(stderr,pchRef,nLength);
	  fprintf(stderr, "actual:\n");
	  DumpBuffer(stderr,pchTransfer,nLength);
	  rc=-1;
	Panic(DEBUG_REPLAY,"aborted.");
	}
    }
  if (bVerbose) printf(rc<0 ? "x" : "o");
  free(pchRef); free(pchTransfer);
}

/* **********************************************************************

PerformBulkTransfer(fh, szLine)

All parameters are extracted. Data values are directly got from the file.

********************************************************************** */

static void PerformBulkTransfer(FILE *fh, char *szLine)
{
  char  chDirection;
  char *pchRef,*pchTransfer; /* two buffers for input and output */
  int   iURB,cchActual,nLength; /* simplified 32 bit */
  int   nEndPoint;
  char *pch;
  TBool bOk;

  /* get the parameters */
  pchRef=pchTransfer=NULL;
  chDirection=szLine[1];
  bOk=true;
  if (chDirection!='i')
    Panic(PANIC_REPLAY,"unsupported direction code in \"%s\"",ChopLine(szLine));
  dprintf(DEBUG_REPLAY,"bulk: line=%s",szLine);
  pch=szLine+2;
  iURB     =GetHexNumber(&pch,4,&bOk,';');
  nEndPoint=GetHexNumber(&pch,2,&bOk,';');
  nLength  =GetHexNumber(&pch,4,&bOk,'\n');
  dprintf(DEBUG_REPLAY,"bulk: urb=%d, ep=%X, len=%X\n",
	  iURB,nEndPoint,nLength);
  if (!bOk)
    Panic(PANIC_REPLAY,"parameter error in \"%s\"",ChopLine(szLine));
  /* allocate buffer */
  pchRef=calloc(1,nLength);
  pchTransfer=malloc(nLength);
  if (!pchRef || !pchTransfer)
    Panic(PANIC_REPLAY,"cannot reserve %d bytes buffers",nLength);
  
  /* get the reference or output buffer */
  ReadReferenceBuffer(fh, pchRef, &cchActual, nLength, chDirection);
  /* execute BULK */

  /* Compare the Buffers */
  free(pchRef); free(pchTransfer);
}

/* **********************************************************************

ReplayFile(fhFile)

********************************************************************** */

static void ReplayFile(FILE *fh, struct usb_device *pScanner)
{
  int rc;
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
  
  while (!feof(fh))
    {
      char *achLine=ReadLine(fh);
      if (!*achLine || achLine[0]=='\n' || achLine[0]=='#') continue;
      /*
	ok, dispatch type the safe way
      */
      usleep(200); /* give the scanner a recovery time */
      switch(achLine[0])
	{
	case 'q': Panic(0,"Replay aborted");
	case 'c': PerformVendorControl(fh, achLine); break;
	case 'b': PerformBulkTransfer(fh, achLine); break;
	default:  Panic(PANIC_REPLAY,"unexpected transfer type \"%s\"",
			ChopLine(achLine));
	}
    }
}

/* **********************************************************************

TestScan(pDevice)

Do some funny things with the given scanner and see if it crashes.

********************************************************************** */

#define R_ALL    0x01
#define R_CCAL   0x2F
#define R_CCAL2  0x30
#define R_CCAL3  0x31
#define R_LEN    0x32
#define R_LENH   0x33
#define R_CTL    0x46
#define R_LO     0x54
#define R_HI     0x55

static void DoCalibration(void)
{
  int cchChunk,iStripe,nStatus;
  RegWrite(R_LEN,2,0x3529); /* RegWriteString(R_LEN,"2935"); */

  dprintf(DEBUG_SCAN,"calibration 1...\n");
  RegWriteString(R_ALL,"00003F10C00000FFFF20006D7069D000"
		 "004015802AC040C040FF0188404C5000"
		 "0C21F040000AF000004EF000004E8080"
		 "8029356329000000000000FF0F000001"
		 "000003010039C04096D8");
  RegWrite(0x43,1,0x03);
  RegCheck(R_CCAL,3,0x808080);
  RegWriteString(R_CCAL,"908884");
  RegWrite(R_LEN,2,0x24EA);
  RegWrite(R_LEN,2,0x24EA);

  while (RegRead(R_CTL,1) & 0x80) usleep(100); /* busy */
  RegWrite(R_LEN,2,0x24EA);
  RegWrite(0x34,1,0x63);
  RegWrite(0x49,1,0x9e); /* some magic */

  /* move the slider forward */
  dprintf(DEBUG_SCAN,"calibration 2...\n");
  RegWriteString(R_ALL,"00003F40006400000000006D7069D000"
		 "004015802AC040C040FF0188404C5000"
		 "0C21F040000AF000004EF000004E9088"
		 "84EA246329000000000000FF0F000001"
		 "000003010039C0409ED8");
  RegWrite(R_CTL,1,0x39);
  RegWrite(R_CTL,1,0x79);
  RegWrite(R_CTL,1,0xF9);
  RegWrite(R_LEN,2,0x24EA); /* F*, why now again ? */

  while (RegRead(R_CTL,1) & 0x80) usleep(200); /* busy */

  /* calibration need two stripes??? */
  RegWrite(0x44,1,0x01);
  RegWrite(0x44,1,0x01); /* two times */
  RegWrite(0x34,1,0x63);
  RegWrite(0x49,1,0x96); /* some magic */
  RegWriteString(R_ALL,"00003FEC132600003F02006D7069D000"
		 "004015802AC040C040FF0188404C5000"
		 "0C21F040000AF000004EF000004E9088"
		 "84EA246329000000000000FF0F000001"
		 "000003010059C04096D8");
  for (iStripe=0; iStripe<2; iStripe++)
    {
      dprintf(DEBUG_SCAN,"calibration 3-%d...\n",iStripe);
      /* move the slider backward */
      RegWrite(R_CTL,1,0x59);   /* do whatever... */
      RegWrite(R_CTL,1,0xD9);
      do {
	nStatus=RegRead(0x42,1);  /* b7 -> ready */
	cchChunk=RegRead(R_LO,2); /* no. of samples per line? */
	usleep(100);
      } while (!(nStatus & 0x80)); /* wait for scanner coming ready */
      dprintf(DEBUG_SCAN,"chunksize: %d samples\n",cchChunk);
      BulkRead(NULL,2*cchChunk);
      while (RegRead(R_CTL,1) & 0x80) usleep(100);
    }
  /* same string like above, but 0x03 for [0x06] */
  RegWriteString(R_ALL,"00003FEC132600003F02006D7069D000"
		 "004015802AC040C040FF0188404C5000"
		 "0C21F040000AF000004EF000004E9088"
		 "84EA246329000000000000FF0F000001"
		 "000003010059C04096D8");
  RegWrite(0x34,1,0x63);
  RegWrite(0x49,1,0x96); /* some magic */
  for (iStripe=0; iStripe<5; iStripe++)
    {
      /* move the slider backward */
      dprintf(DEBUG_SCAN,"calibration 4-%d...\n",iStripe);
      RegWrite(R_CTL,1,0x59);   /* do whatever... */
      RegWrite(R_CTL,1,0xD9);

      do {
	nStatus=RegRead(0x42,1);  /* b7 -> ready */
	cchChunk=RegRead(R_LO,2); /* no. of samples per line? */
	usleep(100);
      } while (!(nStatus & 0x80)); /* wait for scanner coming ready */
      dprintf(DEBUG_SCAN,"chunksize: %d samples\n",cchChunk);
      BulkRead(NULL,2*cchChunk);
      while (RegRead(R_CTL,1) & 0x80) usleep(100);
    }
}

void TestScan(FILE *fhOut, struct usb_device *pScanner)
{
  int           rc,nChunk;
  unsigned int  cchChunk;
  int           n,nStatus;
  
  if (!fhOut)
    Panic(PANIC_SETUP,"test scan file not given");

  hScanner=usb_open(pScanner);
  if (!hScanner)
    Panic(PANIC_SETUP, "cannot open scanner device");
  dprintf(DEBUG_DEVSCAN,"scanner is open\n");
  if (bVerbose) printf("starting job...\n");

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

  DoCalibration();

  RegWrite(0x32,2,0x24EA);
  RegWrite(0x34,1,0x63);
  RegWrite(0x49,1,0x9e); /* some magic */

  /* initialise second time : move to scan position */
  RegWriteString(R_ALL,"00003F4000C800000000006D7069D000"
		 "004015802AC040C040FF0188404C5000"
		 "0C21F040000AF000004EF000004E9088"
		 "84EA246329000000000000FF0F000001"
		 "008003010079C0409ED8");
  /* start the motor and wait completion */
  RegWrite(R_CTL,1,0x39);
  RegWrite(R_CTL,1,0x79);
  RegWrite(R_CTL,1,0xF9);
  RegWrite(0x32,2,0x24EA);
  while (RegRead(R_CTL,1)&0x80) usleep(100);

  /* driver asks C_CAL */

  /* initialize something other nov#155 */
  RegWrite(0x32,2,0x24EA);
  RegWriteString(R_ALL,
		 "00003F10C00000FFFF20006D7069D000"
		 "004015802AC040C040FF0188404C5000"
		 "0C21F040000AF000004EF000004E8080"
		 "8029356329000000000000FF0F000001"
		 "000003010039C04096D8");
  RegWrite(0x32,2,0x24EA);
  RegWrite(0x44,1,0x01);
  RegWrite(0x44,1,0x01);
  RegWrite(R_CTL,1,0x39);
  while (RegRead(R_CTL,1)&0x80) usleep(100);

  RegWrite(0x43,1,0x03);
  RegWrite(0x32,2,0x24EA);
  
  /* initialize scanning #163 */
  RegWriteString(R_ALL,
		 "72032000CF0000FFFF02006D7069D000"
		 "004015802AC040C040FF0188404C5000"
		 "0C21F040000AF000004EF000004E8080"
		 "80EA246329000000000000FF0F000001"
		 "000003010039C04096D8");
  RegWrite(0x34,1,0x03); /* new! 63->03 */
  RegWrite(0x49,1,0x96); /* new! 9e->96 */
  RegWrite(R_CTL,1,0x39);
  RegWrite(R_CTL,1,0x79);
  RegWrite(R_CTL,1,0xF9);

  do {
    nStatus=RegRead(0x42,1);  /* b7 -> ready */
    cchChunk=RegRead(R_LO,2); /* no. of samples per line? */
    dprintf(DEBUG_SCAN,"completion: %04X-%02X\n",cchChunk,nStatus);
    usleep(100);
  } while (!(nStatus & 0x80)); /* wait for scanner coming ready */
  dprintf(DEBUG_SCAN,"chunksize: %d samples\n",cchChunk);
  BulkRead(NULL,2*cchChunk); /* whats this data? */

#ifdef LOOPING
  nChunk=0;

  while(1)
    {
      nChunk++;
      dprintf(DEBUG_SCAN,"scanning chunk %d\n",nChunk);
      do {
	nStatus=RegRead(0x42,1);  /* b7 -> ready */
	cchChunk=RegRead(R_LO,2); /* no. of samples per line? */
	dprintf(DEBUG_SCAN,"completion: %04X-%02X\n",cchChunk,nStatus);
	usleep(100);
      } while (!(nStatus & 0x80)); /* wait for scanner coming ready */
      dprintf(DEBUG_SCAN,"chunksize: %d samples\n",cchChunk);
      BulkRead(fhOut,2*cchChunk);
    }
#endif
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
  if (usb_find_busses()!=USB_OK)  Panic(PANIC_SETUP, "no USB found");
  usb_find_devices();
  if (bVerbose) printf("scanning for scanner...\n");
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
  while (EOF!=(chOpt=getopt(cArg,ppchArg,"Vvhd:r:l:o:")))
    {
      switch (chOpt)
	{
	case 'h':
	  printf(USAGE,PROG_NAME);
	  exit(0);
	  break;
        case 'd': ulDebugMask=strtoul(optarg,NULL,10); break;
        case 'v': bVerbose=true; break;
	case 'V': TellRevision(); exit(0); break;
	case 'r': szReplayFile=strdup(optarg); break;
	case 'l': szLogFile=strdup(optarg); break;
	case 'o': szScanFile=strdup(optarg); break;
	}
    }
  usb_set_debug(1);
  usb_init();
  if (!(pdevScanner=FindScanner()))
    Panic(PANIC_SETUP, "no microtek 3600 connected");

  /* ======================================== open and create files */

  fhLog=stderr;
  if (szLogFile)
    {
      fhLog=fopen(szLogFile,"a+");
      if (!fhLog)
	Panic(PANIC_SETUP,"cannot open log file \%s\": %s",
	      szLogFile,strerror(errno));
    }
  if (szReplayFile)
    {
      fhReplay=fopen(szReplayFile,"r");
      if (!fhReplay) Panic(PANIC_SETUP,"cannot open replay file \"%s\": %s",
			   szReplayFile,strerror(errno));
    }
  if (szScanFile)
    {
      fhScan=fopen(szScanFile,"w");
      if (!fhScan)
	Panic(PANIC_SETUP,"cannot create scan file \"%s\": %s",
	      szScanFile,strerror(errno));
    }

  /* ======================================== to the work */

  if (fhReplay)
    ReplayFile(fhReplay,pdevScanner);
  else
    TestScan(fhScan,pdevScanner);
  Panic(0,NULL); /* close all files, free resources and exit */
  return 0; /* not reached */
}
