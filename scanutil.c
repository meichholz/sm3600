/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

$Id: scanutil.c,v 1.3 2001/04/01 17:01:18 eichholz Exp $

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

Panic(error, format, ...)

The program is aborted, all handles and ressources are freed (this
being global) and the user gets a nice panic screen :-)

********************************************************************** */

void Panic(int nError, const char *szFormat, ...)
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
  if (fhScan && fhScan!=stdout) fclose(fhScan);
  exit(nError);
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



