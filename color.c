/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

color scan routine

(C) Marian Eichholz 2001

====================================================================== */

#include "scantool.h"

/* **********************************************************************

DoScanColor()

********************************************************************** */

#define ORDER_RGB             "012"
#define ORDER_BRG             "120"

/* Parameter are in resolution units! */
int DoScanColor(TInstance *this)
{

  /* live could be easy: Simple calculate a window, start the scan,
     get the data and get off. It dimply does not work.  We have to
     deal with the fact, that the pixels are reported with color scan
     line by color scan line, and have to be rearranged to RGB
     triples. They even ar enot always in RGB order, but mostly in BRG
     order. And they have a skew of 2/300 inch , given by the slider
     construction.  Thus, we have to deal with several buffers, some
     interpolation, and related management stuff. */

  int    cxPixel,cyPixel; /* real units */
  int    cxWindow,cxMax; /* in real pixels */
  int    cyTotalPath;    /* from bed start to window end in 600 dpi */
  int    nFixAspect;     /* aspect ratio in percent, 75-100 */
  char **ppchLines;      /* backlog triple stripe line buffers */
  char  *szOrder;        /* ORDER_XXX "012" or "120" */
  char  *pchBuf;         /* bulk transfer buffer */
  int    cBackLog;       /* depth of ppchLines */
  int    ySensorSkew;    /* distance from sensor to sensor in scan lines */
  cxPixel=this->param.cx*this->param.res/1200;
  cyPixel=this->param.cy*this->param.res/1200;
  if (bVerbose)
    fprintf(stderr,"scanning %d by %d in color\n",cxPixel,cyPixel);
  nFixAspect=100;
  ySensorSkew=0;
  switch (this->param.res)
    {
    case 75:  nFixAspect=75; break;
    case 200: ySensorSkew=1; break;
    case 300: ySensorSkew=2; break;
    case 600: ySensorSkew=4; break;
    }
  /* since we need 2*ySensorSkew additional scan lines for de-skewing of
     the sensor lines, we enlarge the window and shorten the initial movement
     accordingly */
  cyTotalPath = this->param.y/2-(2*ySensorSkew)*600/this->param.res;
  DoJog(this,cyTotalPath); INST_ASSERT();
  cyTotalPath += (cyPixel+2*ySensorSkew)*600/this->param.res; /* for jogging back */

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
    RegWriteArray(this,R_ALL, NUM_SCANREGS, uchRegs);
    RegWrite(this,R_SPOS, 2, this->param.x/2 + this->calibration.xMargin);
    RegWrite(this,R_SLEN, 2, (cyPixel+2*ySensorSkew)*600/this->param.res);
    szOrder=ORDER_BRG; 
    RegWrite(this,R_CCAL, 3, this->calibration.rgbBias); INST_ASSERT(); /* 0xBBGGRR */
    cxMax=cxPixel;
    cxWindow=this->param.cx/2;
    switch (this->param.res)
      {
      case 75:
	RegWrite(this,R_XRES,1, 0x20); /* ups, can  do only 100 dpi horizontal */
	cxMax=cxPixel*100/75;
	RegWrite(this,R_SWID, 2, 0xC000 | cxMax*6);
	RegWrite(this,0x34, 1, 0x83); /* halfs the vertical resolution */
	RegWrite(this,0x47,1,0xC0); /* reduces the speed a bit */
	szOrder=ORDER_BRG;
	break;
      case 100:
	RegWrite(this,R_XRES,1, 0x20);
	RegWrite(this,R_SWID, 2, 0xC000 | cxWindow);
	RegWrite(this,0x34, 1, 0x63); /* halfs the vertical resolution */
	RegWrite(this,0x47,1,0xC0); /* reduces the speed a bit */
	/* I have no idea, what these differences are good for. The seem to produce
	   a slight blue presence.
	   RegWrite(this,0x16, 1, 0xC0);  RegWrite(this,0x18, 1, 0xC0);
	   RegWrite(this,0x12, 1, 0x40);  RegWrite(this,0x10, 2, 0x0728);
	   RegWrite(this,0x14, 1, 0x80); */
	break;
      case 200:
	RegWrite(this,R_XRES,1, 0x24);
	RegWrite(this,R_SWID, 2, 0xC000 | cxWindow);
	break;
      case 300:
	RegWrite(this,0x08,2, 0x6A6A);
	RegWrite(this,R_XRES,1, 0x2A);
	RegWrite(this,R_SWID, 2, 0x4000 | cxWindow);
	RegWrite(this,0x34, 1, 0x03); /* halfs the vertical resolution */
	RegWrite(this,0x47,1,0xC0); /* reduces the speed a bit */
	szOrder=ORDER_RGB;
	break;
      case 600:
	RegWrite(this,R_XRES,1, 0x3F);
	RegWrite(this,R_SWID, 2, 0xC000 | cxWindow);
	RegWrite(this,0x34, 1, 0x03); /* halfs the vertical resolution */
	RegWrite(this,0x47,1,0xC2); /* reduces the speed a bit */
	break;
      case 1200:
	/* not supported, since the driver supports only 600 dpi in color */
	break;
      }
  }

  cBackLog=1+2*ySensorSkew; /* enough for 1/100 inch sensor distance */
  ppchLines=calloc(cBackLog,sizeof(char*));
  pchBuf=malloc(0x8000);
  if (!ppchLines || !pchBuf)
  {
    free(pchBuf); free(ppchLines);
    return SetError(this,PANIC_RUNTIME,"no buffers available");
  }

  RegWrite(this,R_CTL, 1, 0x39);    /* #1532[005.0] */
  RegWrite(this,R_CTL, 1, 0x79);    /* #1533[005.0] */
  RegWrite(this,R_CTL, 1, 0xF9);    /* #1534[005.0] */

  if (this->fhScan && !this->bWriteRaw)
    fprintf(this->fhScan,"P6\n%d %d\n255\n",cxPixel,cyPixel);
  {
    int iFrom,iTo,iChunk,cchBulk,iLine;
    
    for (iLine=0; iLine<cBackLog; iLine++)
      {
	ppchLines[iLine]=calloc(1,3*cxMax); /* must be less than 0x8000 */
	if (!ppchLines[iLine])
	  {
	    free(pchBuf); free(ppchLines);
	    /* TODO: free all previous buffers */
	    return SetError(this,PANIC_RUNTIME,"no line buffer available");
	  }
      }
    iChunk=0;
    cchBulk=0;
    iTo=0;
    iFrom=cchBulk; /* no rest */
    iLine=0;
    do {
      /* "flush" rest of last buffer run */
      iChunk++;
      if (!this->bWriteRaw)
	{
	  iTo=0;
	  while (iFrom<cchBulk)
	    ppchLines[0][iTo++]=pchBuf[iFrom++];
	}
      /* read new buffer */
      cchBulk=BulkReadBuffer(this,pchBuf,0x8000);
      FixExposure(pchBuf,cchBulk,
		  this->param.nBrightness,
		  this->param.nContrast);

      dprintf(DEBUG_SCAN,"bulk#%d, got %d bytes...\n",iChunk,cchBulk);

      if (this->bWriteRaw)
	fwrite(pchBuf,1,cchBulk,this->fhScan);
      else
	{
	  /* a few calculations are cached here to save CPU cycles */
	  int iOffsetR,iOffsetG,iOffsetB;
	  iOffsetR=(szOrder[0]-'0')*cxMax;
	  iOffsetG=(szOrder[1]-'0')*cxMax;
	  iOffsetB=(szOrder[2]-'0')*cxMax;
	  iFrom=0;
	  while (iFrom+3*cxMax<=cchBulk) /* rest of line complete in buffer */
	    {
	      char *pchLineSwap;
	      int   cxToWrite=cxPixel;
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
		  int nInterpolator=100;
		  for (iTo=0; iTo<cxMax && cxToWrite>0; iTo++)
		    {
		      nInterpolator+=nFixAspect;
		      if (nInterpolator<100) continue; /* res. reduction */
		      nInterpolator-=100;
		      cxToWrite--;
		      fwrite(ppchLines[2*ySensorSkew]+iTo+iOffsetR,
			     1,1,this->fhScan);
		      fwrite(ppchLines[ySensorSkew]+iTo+iOffsetG,
			     1,1,this->fhScan);
		      fwrite(ppchLines[0]+iTo+iOffsetB,1,1,this->fhScan);
		    }
		}
	      /* cycle backlog buffers */
	      for (iTo=cBackLog-2; iTo>=0; iTo--)
		ppchLines[iTo+1]=ppchLines[iTo];
	      ppchLines[0]=pchLineSwap;
	      iTo=0; /* reset buffer offset */
	    } /* while pixels available */
	} /* ! this->bWriteRaw */
      /* Rest from iFrom is to be written into next line buffer */
    } while (cchBulk==0x8000);
  } /* color descrambling */
  /* free all dynamic space */
  for (cxMax=0; cxMax<cBackLog; free(ppchLines[cxMax++]));
  free(pchBuf); free(ppchLines);
  INST_ASSERT();
  /* move slider back to start */
  return DoJog(this,-cyTotalPath);
}

