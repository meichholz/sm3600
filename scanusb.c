/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

$Id: scanusb.c,v 1.1 2001/03/23 21:58:32 eichholz Exp $

====================================================================== */

#include "scantool.h"

/* **********************************************************************

RegWrite(iRegister, cb, ulValue)
RegWriteArray(iRegister, cb, unsigned char uchValues)

********************************************************************** */

int RegWrite(int iRegister, int cb, unsigned long ulValue)
{
  char *pchBuffer;
  int   i;
  TBool bOk=true;
  /* some rough assertions */
  if (cb<1 || cb>4)
    Panic(PANIC_INTERN,"unsupported control transfer size %d",cb);
  pchBuffer=malloc(cb);
  CHECK_POINTER(pchBuffer);
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

int RegWriteArray(int iRegister, int cb, unsigned char *pchBuffer)
{
  int   i;
  /* some rough assertions */
  i=usb_control_msg(hScanner,  /* handle */
        0x40,                  /* request type */
	0x08,                  /* request */
	iRegister,             /* value */
	0,                     /* index */
	pchBuffer, cb,         /* bytes, size */
	10000);                /* TO, jiffies... */
  if (i<0)
    Panic(PANIC_COMM,"error during register write");
  return 0;
}

/* **********************************************************************

RegCheck(iRegister, cb, ulValue)

********************************************************************** */

int RegCheck(int iRegister, int cch, unsigned long ulValue)
{
  char *pchBuffer,*pchTransfer;
  int   i;
  TBool bOk;
  if (cch<1 || cch>3)
    Panic(PANIC_INTERN,"unsupported control transfer size %d",cch);
  pchBuffer=malloc(cch);
  pchTransfer=calloc(1,cch);
  CHECK_POINTER(pchBuffer);
  CHECK_POINTER(pchTransfer);
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

int BulkRead(FILE *fhOut, unsigned int cchBulk)
{
  int   cchRead;
  char *pchBuffer;
  pchBuffer=(char*)malloc(cchBulk);
  CHECK_POINTER(pchBuffer);
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

cchRead=BulkReadBuffer(puchBuffer, cchBulk)

********************************************************************** */

int BulkReadBuffer(unsigned char *puchBufferOut, unsigned int cchBulk)
{
  int   cchRead;
  char *pchBuffer;
  pchBuffer=(char*)malloc(cchBulk);
  CHECK_POINTER(pchBuffer);
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
  
  if (puchBufferOut)
    memcpy(puchBufferOut,pchBuffer,cchRead);
  return cchRead;
}

/* **********************************************************************

RegRead(iRegister, int cch)

Read register in big endian (INTEL-) format.

********************************************************************** */

unsigned int RegRead(int iRegister, int cch)
{
  char        *pchTransfer;
  int          i;
  unsigned int n;
  if (cch<1 || cch>4)
    Panic(PANIC_INTERN,"unsupported control read size %d",cch);
  pchTransfer=calloc(1,cch);
  CHECK_POINTER(pchTransfer);
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

