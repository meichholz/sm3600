/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

$Id: scanusb.c,v 1.4 2001/04/10 22:23:00 eichholz Exp $

(C) Marian Eichholz 2001

====================================================================== */

#include "scantool.h"

/* **********************************************************************

RegWrite(iRegister, cb, ulValue)
RegWriteArray(iRegister, cb, unsigned char uchValues)

********************************************************************** */

TState RegWrite(TInstance *this, int iRegister, int cb, unsigned long ulValue)
{
  char *pchBuffer;
  int   i;
  TBool bOk=true;
  INST_ASSERT();
  /* some rough assertions */
  if (cb<1 || cb>4)
  return SetError(this,SANE_STATUS_INVAL,"unsupported control transfer size %d",cb);
  pchBuffer=malloc(cb);
  CHECK_POINTER(pchBuffer);
  for (i=0; i<cb; i++)
  {
    pchBuffer[i]=(char)(ulValue&0xFF);
    ulValue=ulValue>>8;
  }
  if (!bOk)
  {
    free(pchBuffer);
    return SetError(this,SANE_STATUS_IO_ERROR,
		    "error in reg out: %d,%d,%08X",iRegister,cb,ulValue);
  }
  i=usb_control_msg(this->hScanner,  /* handle */
		    0x40,                  /* request type */
		    0x08,                  /* request */
		    iRegister,             /* value */
		    0,                     /* index */
		    pchBuffer, cb,         /* bytes, size */
		    USB_TIMEOUT_JIFFIES);                /* TO, jiffies... */
  free(pchBuffer);
  if (i<0)
    return SetError(this,SANE_STATUS_IO_ERROR,"error during register write");
  return SANE_STATUS_GOOD;
}

TState RegWriteArray(TInstance *this, int iRegister, int cb, unsigned char *pchBuffer)
{
  int   i;
  INST_ASSERT();
  /* some rough assertions */
  i=usb_control_msg(this->hScanner,        /* handle */
		    0x40,                  /* request type */
		    0x08,                  /* request */
		    iRegister,             /* value */
		    0,                     /* index */
		    pchBuffer, cb,         /* bytes, size */
		    USB_TIMEOUT_JIFFIES);                /* TO, jiffies... */
  if (i<0)
    return SetError(this,SANE_STATUS_IO_ERROR,"error during register write");
  return SANE_STATUS_GOOD;
}

/* **********************************************************************

RegCheck(iRegister, cb, ulValue)

********************************************************************** */

TState RegCheck(TInstance *this, int iRegister, int cch, unsigned long ulValue)
{
  char *pchBuffer,*pchTransfer;
  int   i,rcCode;
  TBool bOk;
  INST_ASSERT();
  if (cch<1 || cch>3)
    return SetError(this,SANE_STATUS_INVAL,"unsupported control transfer size %d",cch);
  pchBuffer=malloc(cch);
  pchTransfer=calloc(1,cch);
  rcCode=SANE_STATUS_GOOD;
  if (!pchBuffer || !pchTransfer)
    {
      if (pchBuffer) free(pchBuffer);
      if (pchTransfer) free(pchTransfer);
      rcCode=SetError(this, SANE_STATUS_NO_MEM, "no memory in RegCheck()");
    }
  bOk=true;
  for (i=0; !rcCode && i<cch; i++)
    {
      pchBuffer[i]=(char)(ulValue&0x00FF);
      ulValue=(ulValue>>8);
    }
  if (!rcCode)
    {
      if (!bOk)
	rcCode=SetError(this,SANE_STATUS_IO_ERROR,
			"error in reg out: %d,%d,%08X",iRegister,cch,ulValue);
      else
	{
	  i=usb_control_msg(this->hScanner,  /* handle */
		    0xC0,                  /* request type */
		    0x00,                  /* request */
		    iRegister,             /* value */
		    0,                     /* index */
		    pchTransfer, cch,      /* bytes, size */
		    USB_TIMEOUT_JIFFIES);                /* TO, jiffies... */
	  if (i<0)
	    rcCode=SetError(this,SANE_STATUS_IO_ERROR,
			    "error during register check");
	}
    }
  if (!rcCode && memcmp(pchTransfer,pchBuffer,cch))
    {
      DumpBuffer(stdout,pchTransfer,cch);
      rcCode=SetError(this,SANE_STATUS_IO_ERROR,
		      "check register failed for %d,%d,%08X",
		      iRegister,cch,ulValue);
    }
  free(pchTransfer); free(pchBuffer);
  return rcCode;
}

/* **********************************************************************

cchRead=BulkRead(fh,cchBulk)

********************************************************************** */

int BulkRead(TInstance *this, FILE *fhOut, unsigned int cchBulk)
{
  int   cchRead,rc;
  char *pchBuffer;
  INST_ASSERT();
  pchBuffer=(char*)malloc(cchBulk);
  CHECK_POINTER(pchBuffer);
  cchRead=0;
  rc=0;
  while (!rc && cchBulk)
    {
      int cchChunk;
      int cchReal;
      
      cchChunk=cchBulk;
      if (cchChunk>0x1000)
	cchChunk=0x1000;
      cchReal=usb_bulk_read(this->hScanner,
			    0x82,
			    pchBuffer+cchRead,
			    cchChunk,
			    USB_TIMEOUT_JIFFIES);
      dprintf(DEBUG_COMM,"bulk read: %d -> %d\n",cchChunk,cchReal);
      if (cchReal>=0)
	{
	  cchBulk-=cchReal;
	  cchRead+=cchReal;
	  if (cchReal<cchChunk) /* last Chunk of a series */
	    break;
	}
      else
	{
	  rc=SetError(this,SANE_STATUS_IO_ERROR,
		      "bulk read of %d bytes failed: %s",
		      cchChunk,usb_strerror());
	  continue;
	}
    }
  dprintf(DEBUG_COMM,"writing %d bytes\n",cchRead);
  if (fhOut && !rc)
    {
      fwrite(pchBuffer,1,cchRead,fhOut);
      free(pchBuffer);
      if (ferror(fhOut))
	rc=SetError(this,SANE_STATUS_IO_ERROR,
		    "scan file write failed: %s",
		    strerror(errno));
    }
  return rc ? -1 : cchRead;
}

/* **********************************************************************

cchRead=BulkReadBuffer(puchBuffer, cchBulk)

********************************************************************** */

int BulkReadBuffer(TInstance *this,
		   unsigned char *puchBufferOut,
		   unsigned int cchBulk)
{
  int   cchRead,rc;
  char *pchBuffer;
  INST_ASSERT();
  pchBuffer=(char*)malloc(cchBulk);
  CHECK_POINTER(pchBuffer);
  cchRead=0;
  rc=0;
  while (!rc && cchBulk)
    {
      int cchChunk;
      int cchReal;
      
      cchChunk=cchBulk;
      if (cchChunk>0x1000)
	cchChunk=0x1000;
      cchReal=usb_bulk_read(this->hScanner,
			    0x82,
			    pchBuffer+cchRead,
			    cchChunk,
			    USB_TIMEOUT_JIFFIES);
      dprintf(DEBUG_COMM,"bulk read: %d -> %d\n",cchChunk,cchReal);
      if (cchReal>=0)
	{
	  cchBulk-=cchReal;
	  cchRead+=cchReal;
	  if (cchReal<cchChunk) /* last Chunk of a series */
	    break;
	}
      else
	rc=SetError(this,SANE_STATUS_IO_ERROR,
		    "bulk read of %d bytes failed: %s",
		    cchChunk,usb_strerror());
    }
  dprintf(DEBUG_COMM,"writing %d bytes\n",cchRead);
  
  if (!rc && puchBufferOut)
    memcpy(puchBufferOut,pchBuffer,cchRead);
  return rc ? -1 : cchRead;
}

/* **********************************************************************

RegRead(iRegister, int cch)

Read register in big endian (INTEL-) format.

********************************************************************** */

unsigned int RegRead(TInstance *this, int iRegister, int cch)
{
  char        *pchTransfer;
  int          i;
  unsigned int n;
  INST_ASSERT();
  if (cch<1 || cch>4)
    {
      SetError(this,SANE_STATUS_INVAL,
		    "unsupported control read size %d",cch);
      return 0;
    }
  pchTransfer=calloc(1,cch);
  CHECK_POINTER(pchTransfer);
  i=usb_control_msg(this->hScanner,  /* handle */
        0xC0,                  /* request type */
	0x00,                  /* request */
	iRegister,             /* value */
	0,                     /* index */
	pchTransfer, cch,      /* bytes, size */
	USB_TIMEOUT_JIFFIES);                /* TO, jiffies... */
  if (i>=0)
    {
      n=0;
      for (i=cch-1; i>=0; i--)
	n=(n<<8)|(unsigned char)pchTransfer[i];
      free(pchTransfer);
      return n;
    }
  SetError(this,SANE_STATUS_IO_ERROR,"error during register read");
  return 0;
}

