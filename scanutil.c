/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

$Id: scanutil.c,v 1.2 2001/03/27 22:34:05 eichholz Exp $

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
  if (fhScan) fclose(fhScan);
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



