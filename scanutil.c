/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

$Id: scanutil.c,v 1.8 2001/04/18 22:39:56 eichholz Exp $

====================================================================== */

#include "scantool.h"

/* **********************************************************************

dprintf(DEBUG_XXXX, format, ...)

Put a debug message on STDERR (or whatever). The message is prefixed with
a "debug:" and given, if the current debugging flags contain the given
flag "ulType".

********************************************************************** */

void debug_printf(unsigned long ulType, const char *szFormat, ...)
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



/* **********************************************************************

FreeState()

Frees all dynamical memory for scan buffering.

********************************************************************** */

TState FreeState(TInstance *this, TState nReturn)
{
  int i;
  if (this->state.ppchLines)
    {
      for (i=this->state.cBacklog-1; i<=0; i--)
	{
	  if (this->state.ppchLines[i])
	    free(this->state.ppchLines[i]);
	}
      free(this->state.ppchLines);
    }
  if (this->state.pchLineOut) free(this->state.pchLineOut);
  if (this->state.pchBuf)     free(this->state.pchBuf);
  this->state.pchBuf    =NULL;
  this->state.pchLineOut=NULL;
  this->state.ppchLines =NULL;
  return nReturn;
}

/* ======================================================================

EndScan()

====================================================================== */

TState EndScan(TInstance *this)
{
  if (!this->state.bScanning) return SANE_STATUS_GOOD;
  /* move slider back to start */
  this->state.bScanning=false;
  FreeState(this,0);
  INST_ASSERT();
  return DoJog(this,-this->state.cyTotalPath);
}

/* ======================================================================

ReadChunk()

====================================================================== */

TState ReadChunk(TInstance *this, unsigned char *achOut,
		 int cchMax, int *pcchRead)
{
  /* have we to copy more than we have? */
  /* can the current line fill the buffer ? */
  *pcchRead=0;
  INST_ASSERT();
  while (this->state.iReadPos + cchMax > this->state.cchLineOut)
    {
      int rc;
      /* copy rest of the line into target */
      int cch = this->state.cchLineOut - this->state.iReadPos;
      memcpy(achOut,
	     this->state.pchLineOut+this->state.iReadPos,
	     cch);
      cchMax-=cch; /* advance parameters */
      achOut+=cch;
      (*pcchRead)+=cch;
      this->state.iReadPos=0;
      rc=(*(this->state.ReadProc))(this);
      if (rc!=SANE_STATUS_GOOD)
	return rc; /* may be EOF, then: good and away! */
    }
  if (!cchMax) return SANE_STATUS_GOOD; /* now everything fits! */
  (*pcchRead) += cchMax;
  memcpy(achOut,
	 this->state.pchLineOut+this->state.iReadPos,
	 cchMax);
  this->state.iReadPos += cchMax;
  return SANE_STATUS_GOOD;
}

#ifdef INSANE_VERSION

/* ======================================================================

DoScanFile()

Top level caller for scantool.

====================================================================== */

#define APP_CHUNK_SIZE   8192

TState DoScanFile(TInstance *this)
{
  int    cx,cy;
  long   lcchRead;
  TState rc;
static   char   achBuf[APP_CHUNK_SIZE*10];
  rc=SANE_STATUS_GOOD; /* make compiler happy */
  if (this->mode==color)
    rc=StartScanColor(this);
  else
    rc=StartScanGray(this);
  cx=this->state.cxPixel;
  cy=this->state.cyPixel;
  if (this->bVerbose)
    fprintf(stderr,"scanning %d by %d\n",cx,cy);
  if (this->fhScan && !this->bWriteRaw)
   {
      switch (this->mode)
	{
	case color: fprintf(this->fhScan,"P6\n%d %d\n255\n",cx,cy);
	            break;
	case gray:  fprintf(this->fhScan,"P5\n%d %d\n255\n",cx,cy);
                    break;
	default:    fprintf(this->fhScan,"P4\n%d %d\n",cx,cy);
                    break;
	}
    }
  lcchRead=0L;
  while (!rc)
    {
      int cch;
      cch=0;
      rc=ReadChunk(this,achBuf,APP_CHUNK_SIZE,&cch);
      if (cch>0 && this->fhScan && cch<=APP_CHUNK_SIZE)
	{
	  if (!this->bWriteRaw)
	    fwrite(achBuf,1,cch,this->fhScan);
	  lcchRead+=cch;
	}
     }
  if (this->bVerbose)
    fprintf(stderr,"read %ld image byte(s)\n",lcchRead);
  EndScan(this);
  INST_ASSERT();
  return SANE_STATUS_GOOD;
}

#endif
