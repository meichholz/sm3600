/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

slider movement

(C) Marian Eichholz 2001

====================================================================== */

#include "scantool.h"

/* tuning constants for DoOriginate */
#define CCH_BONSAI              60
#define MAX_PIXEL_PER_SCANLINE  5100
#define BLACK_HOLE_GRAY         30
#define CHASSIS_GRAY_LEVEL      100
#define BLACK_BED_LEVEL         10

/* **********************************************************************

DoOriginate()

*shall* one time move the slider safely back to its origin.
No idea, hoiw to achieve this, for now...

********************************************************************** */

typedef enum { ltHome, ltUnknown, ltBed, ltError } TLineType;

#define INST_ASSERT2() { if (this->nErrorState) return ltError; }

static TLineType GetLineType(TInstance *this)
{
  unsigned char  achLine[CCH_BONSAI+1];
  unsigned char *puchBuffer;
  int            cchBulk,i,iHole;
  int            axHoles[3];
  long           lSum;
  TBool          bHolesOk;
  int            lMedian;
  bHolesOk=false;
  {
    unsigned char uchRegs2495[]={
      0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
      0xEC /*!!0x04!!*/, 0x13 /*!!0x05!!*/, 0,0, 
      0x00 /*0x08*/, 0x3F /*!!0x09!!*/,
      1,0,
      0x6D /*0x0C*/,
      0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
      0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
      0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
      0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
      0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
      0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
      0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
      0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
      0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
      0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
      0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
      0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
      0x84 /*R_CCAL3*/, 0xEA /*R_LEN*/, 0x24 /*R_LENH*/,
      0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
      0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
      0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
      0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
      0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
      0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
      0x59 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
      0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
    RegWriteArray(this,R_ALL, 74, uchRegs2495);
  }    /* #2495[062.5] */
  INST_ASSERT2();
  /*     dprintf(DEBUG_SCAN,"originate-%d...",iStripe); */
  RegWrite(this,R_CTL, 1, 0x59);    /* #2496[062.5] */
  RegWrite(this,R_CTL, 1, 0xD9);    /* #2497[062.5] */
  i=WaitWhileScanning(this,5); if (i) return i;
    
  cchBulk=5100;
  /*
  cchBulk=RegRead(this,R_STAT, 2);
  if (cchBulk!=MAX_PIXEL_PER_SCANLINE)
    return SetError(this,SANE_STATUS_INVAL,
		    "illegal scan line width reported (%d)",cchBulk);
  */
  puchBuffer=(unsigned char*)calloc(1,cchBulk);
  CHECK_POINTER(puchBuffer);
  if (BulkReadBuffer(this,puchBuffer, cchBulk)!=cchBulk)
    {
      free(puchBuffer);
      return SetError(this,SANE_STATUS_IO_ERROR,"truncated bulk");
    }
  lSum=0;
  for (i=0; i<cchBulk; i++)
    lSum+=puchBuffer[i]; /* gives total white level */
  for (i=0; i<CCH_BONSAI; i++)
    {
      int iBulk=i*(cchBulk)/CCH_BONSAI;
      achLine[i]=puchBuffer[iBulk+40]; /* simple, basta */
    }
  /* the bonsai line is supported only for curiosity */
  for (i=0; i<CCH_BONSAI; i++)
    achLine[i]=achLine[i]/26+'0'; /* '0'...'9' */
  achLine[CCH_BONSAI]='\0';

  i=200;
  iHole=0;
  dprintf(DEBUG_ORIG,"");
  while (i<MAX_PIXEL_PER_SCANLINE && iHole<3)
    {
      int c;
      while (i<MAX_PIXEL_PER_SCANLINE && puchBuffer[i]>BLACK_HOLE_GRAY) i++; /* not very black */
      c=0;
      dprintf(DEBUG_ORIG,"~ i=%d",i);
      while (i<MAX_PIXEL_PER_SCANLINE && puchBuffer[i]<=BLACK_HOLE_GRAY) { i++; c++; }
      dprintf(DEBUG_ORIG,"~ c=%d",c);
      if (c>90) /* 90% of min hole diameter */
	{
	  axHoles[iHole]=i-c/2; /* store the middle of the hole */
	  dprintf(DEBUG_ORIG,"~ #%d=%d",iHole,axHoles[iHole]);
	  iHole++;
	  i+=10; /* some hysteresis */
	}
    }
  if (iHole==3)
    {
      bHolesOk=true;
      for (i=0; i<2; i++)
	{
	  int n=axHoles[i+1]-axHoles[i];
	  if (n<1050 || n>1400)
	    bHolesOk=false;
	}
      if (axHoles[0]<400 || axHoles[0]>900) /* 2 cm tolerance */
	bHolesOk=false;
    }
  else
    bHolesOk=false;
  lMedian=lSum/cchBulk;
  if (bHolesOk)
    {
      this->calibration.xMargin=axHoles[0]-480;           /* left bed corner */
      this->calibration.nHoleGray=puchBuffer[axHoles[0]]; /* black reference */
    }
  dprintf(DEBUG_ORIG,"~ %s - %d\n",
	  achLine,
	  lMedian);
  free(puchBuffer);
  i=WaitWhileBusy(this,2); if (i) return i;
  if (bHolesOk && lMedian>CHASSIS_GRAY_LEVEL)
    return ltHome;
  if (lMedian<=BLACK_BED_LEVEL)
    return ltBed;
  return ltUnknown;
}

TState DoOriginate(TInstance *this)
{
  TLineType lt;
  if (this->bVerbose)
    fprintf(stderr,"carriage return...\n");
  INST_ASSERT();
  lt=ltUnknown;
  while (lt!=ltHome && !this->state.bCanceled)
    {
      lt=GetLineType(this);
      INST_ASSERT();
      switch (lt)
	{
	case ltHome: continue;
	case ltBed:  DoJog(this,-500); break;
	default:     DoJog(this,-20); break;
	}
    }
  DoJog(this,1); INST_ASSERT(); /* Correction for 1 check line */
  return (this->state.bCanceled ? SANE_STATUS_CANCELLED : SANE_STATUS_GOOD);
}

/* **********************************************************************

DoJog(nDistance)

The distance is given in 600 DPI.

********************************************************************** */

TState DoJog(TInstance *this, int nDistance)
{
  int cSteps;
  int nSpeed,nRest;
  dprintf(DEBUG_SCAN,"jogging %d units...\n",nDistance);
  if (!nDistance) return 0;
  RegWrite(this,0x34, 1, 0x63);
  RegWrite(this,0x49, 1, 0x96);
  WaitWhileBusy(this,2);
  RegWrite(this,0x34, 1, 0x63);
  RegWrite(this,0x49, 1, 0x9E); /* that is a difference! */
  INST_ASSERT();
  cSteps=(nDistance>0) ? nDistance : -nDistance;
  {
    unsigned char uchRegs2587[]={
      0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
      0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/,
      0,0, /* steps */
      0x00 /*0x08*/, 0x00 /*!!0x09!!*/,
      0,0, /* y count */
      0x6D /*0x0C*/,
      0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
      0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
      0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
      0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
      0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
      0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
      0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
      0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
      0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
      0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
      0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
      0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
      0x84 /*R_CCAL3*/, 0xEA /*R_LEN*/, 0x24 /*R_LENH*/,
      0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
      0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
      0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
      0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
      0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
      0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
      0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
      0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
    RegWriteArray(this,R_ALL, 74, uchRegs2587);
  }    /* #2587[065.4] */
  INST_ASSERT();
  RegWrite(this,R_STPS,2,cSteps);
  /* do some magic for slider acceleration */
  if (cSteps>600) /* only large movements are accelerated */
    {
      RegWrite(this,0x34, 1, 0xC3);
      RegWrite(this,0x47, 2, 0xA000);    /* initial speed */
    }
  /* start back or forth movement */
  if (nDistance>0)
    {
      RegWrite(this,R_CTL, 1, 0x39);    /* #2588[065.4] */
      RegWrite(this,R_CTL, 1, 0x79);    /* #2589[065.4] */
      RegWrite(this,R_CTL, 1, 0xF9);    /* #2590[065.4] */
    }
  else
    {
      RegWrite(this,R_CTL, 1, 0x59);
      RegWrite(this,R_CTL, 1, 0xD9);
    }
  INST_ASSERT();
  /* accelerate the slider each 100 us */
  if (cSteps>600)
    {
      nRest=cSteps;
      for (nSpeed=0x9800; nRest>600 && nSpeed>=0x4000; nSpeed-=0x800)
	{
	  nRest=RegRead(this,R_POS, 2);
	  usleep(100);
	  /* perhaps 40C0 is the fastest possible value */
	  RegWrite(this,0x47, 2, nSpeed>0x4000 ? nSpeed : 0x40C0);
	}
    }
  INST_ASSERT();
  usleep(100);
  return WaitWhileBusy(this,100);
}

