/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

$Id: scanutil.c,v 1.5 2001/04/10 22:23:00 eichholz Exp $

====================================================================== */

#include "scantool.h"

/* **********************************************************************

dprintf(DEBUG_XXXX, format, ...)

Put a debug message on STDERR (or whatever). The message is prefixed with
a "debug:" and given, if the current debugging flags contain the given
flag "ulType".

********************************************************************** */

void dprintf(unsigned long ulType, const char *szFormat, ...)
{
  va_list ap;
  if ((ulDebugMask & ulType)!=ulType) return;
  if (*szFormat=='~')
    szFormat++;
  else
    fprintf(stderr,"debug:");
  va_start(ap,szFormat);
  vfprintf(stderr,szFormat,ap);
  va_end(ap);
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

SetError(error, format, ...)

The program is aborted, all handles and ressources are freed (this
being global) and the user gets a nice panic screen :-)

********************************************************************** */

int SetError(TInstance *this, int nError, const char *szFormat, ...)
{
  va_list ap;
  if (this->nErrorState) return 0; /* do not overwrite error state */
  this->nErrorState=nError;
  this->szErrorReason=malloc(500);
  
  if (szFormat!=NULL && this->szErrorReason)
    {
      va_start(ap,szFormat);
      vsnprintf(this->szErrorReason,499,szFormat,ap);
      this->szErrorReason[499]='\0';
      va_end(ap);
    }
  return nError;
}

/* **********************************************************************

DumpBuffer(fh,pch,cch)

********************************************************************** */

void DumpBuffer(FILE *fh, const char *pch, int cch)
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

FixExposure()

Exposure is done by adding brightness to the original scan value and
augmenting the result around the middle value of 128.

********************************************************************** */

void FixExposure(unsigned char *pchBuf,
		 int cchBulk,
		 int nBrightness,
		 int nContrast)
{
  int i;
  int nOffB=nBrightness-128;
  int nFakC=(nContrast+128)*100; /* in percent, to get smoother interpolation */
  for (i=0; i<cchBulk; i++)
  {
    int nNew=pchBuf[i];
    nNew=(nNew+nOffB)*nFakC/12800+128;
    if (nNew<0) nNew=0;
    else if (nNew>255) nNew=255;
    pchBuf[i]=(unsigned char)nNew;
  }
}



