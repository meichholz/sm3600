/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

grayscale scan routine

(C) Marian Eichholz 2001

====================================================================== */

#include "scantool.h"

/* **********************************************************************

DoScanGray()

********************************************************************** */

#define LINE_THRESHOLD   0x800

static unsigned char uchRegs075[]={
   /*R_SPOS*/ 0xFC, /*R_SPOSH*/ 0x00, /*0x03*/ 0x20,
   /*R_SWID*/ 0xB0, /*R_SWIDH*/ 0x04, /*R_STPS*/ 0x06,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x3F,
   /*R_LEN*/ 0x28, /*R_LENH*/ 0x07, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x83, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };

static unsigned char uchRegs100[]={
   /*R_SPOS*/ 0xFC, /*R_SPOSH*/ 0x00, /*0x03*/ 0x20,
   /*R_SWID*/ 0xB0, /*R_SWIDH*/ 0x04, /*R_STPS*/ 0x06,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x3F,
   /*R_LEN*/ 0x34, /*R_LENH*/ 0x07, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x42,
   /*0x13*/ 0x15, /*0x14*/ 0x84, /*0x15*/ 0x2A,
   /*0x16*/ 0xC2, /*0x17*/ 0x40, /*0x18*/ 0xC2,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC2, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };

static unsigned char uchRegs200[]={
   /*R_SPOS*/ 0xFC, /*R_SPOSH*/ 0x00, /*0x03*/ 0x24,
   /*R_SWID*/ 0xB0, /*R_SWIDH*/ 0x04, /*R_STPS*/ 0x06,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x3F,
   /*R_LEN*/ 0x22, /*R_LENH*/ 0x07, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x42,
   /*0x13*/ 0x15, /*0x14*/ 0x42, /*0x15*/ 0x15,
   /*0x16*/ 0x42, /*0x17*/ 0x15, /*0x18*/ 0x42,
   /*0x19*/ 0x15, /*0x1A*/ 0x07, /*0x1B*/ 0x00,
   /*0x1C*/ 0x08, /*0x1D*/ 0x12, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x43, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0x42, /*0x48*/ 0x15,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };

static unsigned char uchRegs300[]={
   /*R_SPOS*/ 0xFC, /*R_SPOSH*/ 0x00, /*0x03*/ 0x2A,
   /*R_SWID*/ 0xB0, /*R_SWIDH*/ 0x04, /*R_STPS*/ 0x06,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x2A,
   /*R_LEN*/ 0x16, /*R_LENH*/ 0x07, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x40, /*0x15*/ 0x15,
   /*0x16*/ 0x40, /*0x17*/ 0x15, /*0x18*/ 0x40,
   /*0x19*/ 0x15, /*0x1A*/ 0x07, /*0x1B*/ 0x00,
   /*0x1C*/ 0x08, /*0x1D*/ 0x12, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x03, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0x40, /*0x48*/ 0x15,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };

static unsigned char uchRegs600[]={
   /*R_SPOS*/ 0xFC, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0xB0, /*R_SWIDH*/ 0x04, /*R_STPS*/ 0x06,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x3F,
   /*R_LEN*/ 0x16, /*R_LENH*/ 0x07, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x42,
   /*0x13*/ 0x15, /*0x14*/ 0x42, /*0x15*/ 0x15,
   /*0x16*/ 0x42, /*0x17*/ 0x15, /*0x18*/ 0x42,
   /*0x19*/ 0x15, /*0x1A*/ 0x07, /*0x1B*/ 0x00,
   /*0x1C*/ 0x08, /*0x1D*/ 0x12, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x03, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0x42, /*0x48*/ 0x15,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };

/* ======================================================================

ScanNextLine()

====================================================================== */

#define USB_CHUNK_SIZE 0x8000

TState ReadNextGrayLine(TInstance *this)
{
  int           iWrite;
  int           iDot;
  unsigned char chBits;  
  int           iRead; /* read position in raw line */
  int           nInterpolator;

  iWrite=0;
  while (iWrite<this->state.cxMax) /* max 1 time in reality */
    {
      while (iWrite<this->state.cxMax &&
	     this->state.iBulkReadPos<this->state.cchBulk)
	this->state.ppchLines[0][iWrite++] += /* add! */
	  this->state.pchBuf[this->state.iBulkReadPos++]<<4;
      if (iWrite<this->state.cxMax) /* we need an additional chunk */
	{
	  if (this->state.bLastBulk)
	      return SANE_STATUS_EOF;
	  this->state.cchBulk=BulkReadBuffer(this,this->state.pchBuf,
					     USB_CHUNK_SIZE);
	  dprintf(DEBUG_SCAN,"bulk read: %d byte(s), line #%d\n",
		  this->state.cchBulk, this->state.iLine);
	  if (this->bWriteRaw)
	    fwrite(this->state.pchBuf,1,this->state.cchBulk,this->fhScan);
	  INST_ASSERT();
	  FixExposure(this->state.pchBuf,this->state.cchBulk,
		      this->param.nBrightness,
		      this->param.nContrast);
	  if (this->state.cchBulk!=USB_CHUNK_SIZE)
	    this->state.bLastBulk=true;
	  this->state.iBulkReadPos=0;
	}
    } /* while raw line buffer acquiring */
  this->state.iLine++;
  iDot=0; chBits=0; /* init pixelbuffer */
  for (nInterpolator=100, iWrite=0, iRead=0;
       iRead<this->state.cxMax && iWrite<this->state.cchLineOut;
       iRead++)
    {
      nInterpolator+=this->state.nFixAspect;
      if (nInterpolator<100) continue; /* res. reduction */
      nInterpolator-=100;
      /* dprintf(DEBUG_SCAN," i=%d",iTo); */
      if (this->mode==gray)
	  this->state.pchLineOut[iWrite++]=
	    this->state.ppchLines[0][iRead]>>4;
      else
	{
	  unsigned char chBit; /* 1=white */
	  if (this->mode==line)
	    chBit=(this->state.ppchLines[0][iRead]<LINE_THRESHOLD);
	  else
	    {
	      short nError=this->state.ppchLines[0][iRead];
	      /* printf("(%d)",nError); */
	      if (nError>=0xFF0)
		{
		  nError-=0xFF0;
		  chBit=0;
		}
	      else
		chBit=1;
	      /* since I sketched the Floydd-Steinberg
		 algorithm from heart, I have no idea, if
		 there is room for improvement in the
		 coefficients.  If You know, please drop
		 me a line (eichholz@computer.org, 1.4.2001) */
#define FASTDITHER
#ifdef FASTDITHER
	      this->state.ppchLines[0][iRead+1]+=(nError>>2); /* 8/16 */
	      this->state.ppchLines[1][iRead+1]+=(nError>>1);
	      this->state.ppchLines[1][iRead]  +=(nError>>2); /* 8/16 */
#else
	      this->state.ppchLines[0][iRead+1]+=(nError*5)>>4;
	      this->state.ppchLines[1][iRead+1]+=(nError*8)>>4;
	      this->state.ppchLines[1][iRead]  +=(nError*3)>>4;
#endif
	    }
	  chBits=(chBits<<1)|chBit;
	  iDot++;
	  if (iDot==8 && iWrite<this->state.cchLineOut)
	    {
	      this->state.pchLineOut[iWrite++]=chBits;
	      iDot=0; chBits=0;
	    }
	} /* gray pixel postprocessing */
    } /* line postprocessing */
  if (iDot && iWrite<this->state.cchLineOut)
    this->state.pchLineOut[iWrite++]=chBits;
  /* cycle the history lines and clear the preread buffer*/
  {
    short *p=this->state.ppchLines[0];
    this->state.ppchLines[0]=this->state.ppchLines[1];
    this->state.ppchLines[1]=p;
    memset(this->state.ppchLines[1],0,(this->state.cxMax+1)*sizeof(short));
  }
  return SANE_STATUS_GOOD;
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
      rc=ReadNextGrayLine(this); /* TODO: in color, too! */
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

/* ======================================================================

StartScanGray()

====================================================================== */

TState StartScanGray(TInstance *this)
{
  unsigned char  *puchRegs;
  int             i;
  int             cxWindow;
  if (this->state.bScanning)
    return SetError(this,SANE_STATUS_DEVICE_BUSY,"scan active");
  memset(&(this->state),0,sizeof(this->state));
  puchRegs=NULL;
  this->state.cxPixel=this->param.cx*this->param.res/1200;
  this->state.cyPixel=this->param.cy*this->param.res/1200;
  this->state.nFixAspect=100;
  switch (this->param.res)
  {
  case 75:  this->state.nFixAspect=75;
            puchRegs=uchRegs075; break;
  case 100: puchRegs=uchRegs100; break;
  case 200: puchRegs=uchRegs200; break;
  case 300: puchRegs=uchRegs300; break;
  case 600: puchRegs=uchRegs600; break;
  }
  this->state.cyTotalPath = this->param.y/2;
  DoJog(this,this->state.cyTotalPath);
  INST_ASSERT();
  this->state.cyTotalPath += this->param.cy/2; /* for jogging back */
  
  /*
    regular scan is asynchronously, that is,
    the scanning is issued, and the driver does bulk reads,
    until there are no data left.
  */
  RegWriteArray(this,R_ALL, NUM_SCANREGS, puchRegs); INST_ASSERT();
  RegWrite(this,R_SPOS, 2,
	   this->param.x/2+this->calibration.xMargin); INST_ASSERT();
  RegWrite(this,R_SLEN, 2,
	   (this->state.cyPixel+1)*600/this->param.res); INST_ASSERT();
  if (this->quality==fast) { }

  /* this->state.cxPixel is the number os pixels, we *want* (after interpolation)
     this->state.cxMax is the number of pixels, we *need* (before interpolation)
     cxWindow is the scan width in 600 dpi, we have to request */

  this->state.cxMax=this->state.cxPixel*100/this->state.nFixAspect;
  cxWindow=this->param.cx/2;
  RegWrite(this,R_SWID, 2, cxWindow); INST_ASSERT();

  /* for halftone dithering we need one history line */
  this->state.pchBuf=malloc(USB_CHUNK_SIZE);
  this->state.cBacklog=2;
  this->state.ppchLines=calloc(this->state.cBacklog,sizeof(short *));
  if (!this->state.pchBuf || !this->state.ppchLines)
    return FreeState(this,SetError(this,
				   SANE_STATUS_NO_MEM,"no buffers available"));
  for (i=0; i<this->state.cBacklog; i++)
    {
      this->state.ppchLines[i]=calloc(this->state.cxMax+1,
				      sizeof(short)); /* 1 dummy at right edge */
      if (!this->state.ppchLines[i])
	return FreeState(this,SetError(this,
				       SANE_STATUS_NO_MEM,"no buffers available"));
    }

  /* start the unit, when all buffers are available */

  RegWrite(this,R_CTL, 1, 0x39); INST_ASSERT();
  RegWrite(this,R_CTL, 1, 0x79); INST_ASSERT();
  RegWrite(this,R_CTL, 1, 0xF9); INST_ASSERT();

  /* calculate and prepare intermediate line transfer buffer */

  this->state.cchLineOut=(this->mode==gray)
    ? this->state.cxPixel
    : (this->state.cxPixel+7)/8;
  
  this->state.pchLineOut = malloc(this->state.cchLineOut);
  if (!this->state.pchLineOut)
    return FreeState(this,SetError(this,
				   SANE_STATUS_NO_MEM,
				   "no buffers available"));

  this->state.bScanning = true;
  return SANE_STATUS_GOOD;
}

#ifdef INSANE_VERSION

/* ======================================================================

DoScanGray()

Top level caller for scantool.

====================================================================== */

#define APP_CHUNK_SIZE   10

TState DoScanGray(TInstance *this)
{
  int    cx,cy;
  long   lcchRead;
  TState rc;
  char   achBuf[APP_CHUNK_SIZE];
  cx=this->param.cx*this->param.res/1200;
  cy=this->param.cy*this->param.res/1200;
  if (bVerbose)
    fprintf(stderr,"scanning %d by %d in gray\n",cx,cy);
  if (this->fhScan && !this->bWriteRaw)
    {
      if (this->mode==gray)
 	fprintf(this->fhScan,"P5\n%d %d\n255\n",cx,cy);
      else
	fprintf(this->fhScan,"P4\n%d %d\n",cx,cy);
    }
  rc=StartScanGray(this);
  lcchRead=0L;
  while (!rc)
    {
      int cch;
      cch=0;
      rc=ReadChunk(this,achBuf,APP_CHUNK_SIZE,&cch);
      if (cch>0 && this->fhScan && cch<=APP_CHUNK_SIZE)
	{
	  fwrite(achBuf,1,cch,this->fhScan);
	  lcchRead+=cch;
	}
     }
  if (bVerbose)
    fprintf(stderr,"read %ld image byte(s)\n",lcchRead);
  EndScan(this);
  INST_ASSERT();
  return SANE_STATUS_GOOD;
}

#endif
