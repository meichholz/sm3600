/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

grayscale scan routine

(C) Marian Eichholz 2001

====================================================================== */

#include "scantool.h"

/* **********************************************************************

DoScanGray()

********************************************************************** */

/* Parameters are in resolution units */
void DoScanGray(FILE *fh, int nResolution,
		int xBorder, int yBorder,
		int cxPixel, int cyPixel)
{
  int    cxWindow,cxMax; /* in real pixels */
  int    cyTotalPath;    /* from bed start to window end in 600 dpi */
  int    nFixAspect;     /* aspect ratio in percent, 75-100 */
  char  *pchBuf;         /* bulk transfer buffer */
  int    i;
  if (bVerbose)
  fprintf(stderr,"scanning %d by %d in gray\n",cxPixel,cyPixel);
  switch (nResolution)
  {
  case 75:  nFixAspect=75; break;
  default:  nFixAspect=100; break;
  }
  cyTotalPath = yBorder*600/nResolution;
  DoJog(cyTotalPath);
  cyTotalPath += cyPixel*600/nResolution; /* for jogging back */
  
  /*
    regular scan is asynchronously, that is,
    the scanning is issued, and the driver does bulk reads,
    until there are no data left.
  */
  {
    unsigned char uchRegs[]={
      /*R_SPOS*/ 0xFB, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
      /*R_SWID*/ 0xB0, /*R_SWIDH*/ 0x04, /*R_STPS*/ 0x06,
      /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x3F,
      /*R_LEN*/ 0xBE, /*R_LENH*/ 0x04, /*0x0C*/ 0x6D,
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
      /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
      /*0x34*/ 0x03, /*0x35*/ 0x29, /*0x36*/ 0x00,
      /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
      /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
      /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
      /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
      /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
      /*R_CTL*/ 0x39, /*0x47*/ 0x42, /*0x48*/ 0x15,
      /*0x49*/ 0x96, /*0x4A*/ 0x8C };
    RegWriteArray(R_ALL, NUM_SCANREGS, uchRegs);
    RegWrite(R_SPOS, 2, xBorder*600/nResolution+calibration.xMargin);
    RegWrite(R_SLEN, 2, (cyPixel+1)*600/nResolution);
    if (optQuality==fast)
      {
	
      }
    cxMax=cxPixel;
    cxWindow=cxPixel*600/nResolution;
    switch (nResolution)
      {
      case 75:break;
      case 100:
	RegWrite(R_SWID, 2, cxWindow);
	RegWrite(R_XRES,1,0x20);
	RegWrite(R_YRES+1,1,0x3F);
	RegWrite(0x12,2,0x1542);
	RegWrite(0x14,2,0x2A84); /* twice */
	RegWrite(0x16,2,0x40C2);
	RegWrite(0x18,2,0x40C2);
	RegWrite(0x1A,2,0x01FF);
	RegWrite(0x1C,2,0x4088); /* y diffraction */
	RegWrite(0x34,1,0x63); /* speed up */
	RegWrite(0x47,2,0x40C2); /* absolutely relevant! gioves a (de-)skew */
	RegWrite(0x49,1,0x9E);   /* gives the final speed */
	break;
      case 200:
	break;
      case 300:
	RegWrite(R_SWID, 2, cxWindow);
	RegWrite(R_XRES,1,0x2A);
	RegWrite(R_YRES+1,1,0x2A);
	/* for (i=0x12; i<0x1A; i+=2) RegWrite(i,2,0x1540); */
	break;
      case 600:
	RegWrite(R_SWID, 2, cxWindow);
	RegWrite(R_XRES,1,0x3F);
	RegWrite(R_YRES+1,1,0x3F);
	/* for (i=0x12; i<0x1A; i+=2) RegWrite(i,2,0x1542); */
	RegWrite(0x1A,2,0x0007);
	break;
      case 1200:
	/* not supported, since the driver supports only 600 dpi in color */
	break;
      }
  }

  pchBuf=malloc(0x8000);
  if (!pchBuf) Panic(PANIC_RUNTIME,"no buffers available");

  RegWrite(R_CTL, 1, 0x39);
  RegWrite(R_CTL, 1, 0x79);
  RegWrite(R_CTL, 1, 0xF9);

  if (fh && !bWriteRaw)
  fprintf(fh,"P5\n%d %d\n255\n",cxPixel,cyPixel);
  {
    int cchBulk,iChunk;
    iChunk=0;
    cchBulk=0; /* dummy */
    do {
      iChunk++;
      cchBulk=BulkReadBuffer(pchBuf,0x8000);
      dprintf(DEBUG_SCAN,"bulk#%d, got %d bytes...\n",iChunk,cchBulk);

      fwrite(pchBuf,1,cchBulk,fh);
    } while (cchBulk==0x8000);
  } /* color descrambling */
  free(pchBuf);
  /* move slider back to start */
  DoJog(-cyTotalPath);
}

