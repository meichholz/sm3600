/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

$Id: scanmtek.c,v 1.3 2001/03/25 15:11:43 eichholz Exp $

====================================================================== */

#include "scantool.h"

/* some magic constant for "bonsai" line processing */
#define CCH_BONSAI  100
#define MAX_PIXEL_PER_SCANLINE  5100
#define X_BONSAI_BLACK1 13
#define X_BONSAI_BLACK2 36
#define X_BONSAI_BLACK3 60
#define MIN_BONSAI_WHITE 70

/* **********************************************************************

DoInit()

Replay the first initialisation block (no slider movement).

********************************************************************** */

void DoInit(void)
{
  dprintf(DEBUG_SCAN,"general init...\n");
  RegWrite(R_LEN,2,LEN_MAGIC);
  {
    unsigned char uchRegs2466[]={
      0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
      0x10 /*0x04*/, 0xC0 /*0x05*/, 0x00 /*0x06*/,
      0x00 /*0x07*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
      0x20 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
      0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
      0x80 /*R_CCAL3*/, 0x29 /*R_LEN*/, 0x35 /*R_LENH*/,
      0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
      0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
      0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
      0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
      0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
      0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
      0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
      0x96 /*0x49*/, 0xD8 /*0x4A*/ };
    RegWriteArray(R_ALL, 74, uchRegs2466);
  }    /* #2466[061.8] */
  RegWrite(R_CCAL,3,0x848888);
}

/* **********************************************************************

WaitWhileBusy()

********************************************************************** */

int WaitWhileBusy(int cSecs)
{
  int cTimeOut=cSecs*10;
  int value;
  while (cTimeOut--)
    {
      if ((value=(int)RegRead(R_CTL,1)) & 0x80)
	usleep(50);
      else
	return value;
    }
  Panic(PANIC_COMM,"Timeout while waiting for CTL");
  return -1;
}

/* **********************************************************************

WaitWhileScanning()

********************************************************************** */

int WaitWhileScanning(int cSecs)
{
  int cTimeOut=cSecs*10;
  int value;
  while (cTimeOut--)
    {
      if ((value=(int)RegRead(R_CSTAT, 1)) & 0x80)
	return value;
      else
	usleep(50);
    }
  Panic(PANIC_COMM,"Timeout while waiting for CSTAT");
  return -1;
}

/* **********************************************************************

DoJog(nDistance)

The distance is given in 600 DPI.

********************************************************************** */

void DoJog(int nDistance)
{
  int cSteps;
  dprintf(DEBUG_SCAN,"jogging %d units...\n",nDistance);
  if (!nDistance) return;
  RegWrite(0x34, 1, 0x63);
  RegWrite(0x49, 1, 0x96);
  WaitWhileBusy(2);
  RegWrite(R_LEN,2,LEN_MAGIC);
  RegWrite(0x34, 1, 0x63);
  RegWrite(0x49, 1, 0x9E); /* that is a difference! */
  cSteps=(nDistance>0) ? nDistance : -nDistance;
  {
    unsigned char uchRegs2587[]={
      0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
      0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0xC8 /*!!0x06!!*/,
      0x00 /*0x07*/, 0x00 /*0x08*/, 0x00 /*!!0x09!!*/,
      0x00 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
    RegWriteArray(R_ALL, 74, uchRegs2587);
  }    /* #2587[065.4] */
  RegWrite(R_STPS,2,(cSteps-1));
  if (nDistance>0)
    {
      RegWrite(R_CTL, 1, 0x39);    /* #2588[065.4] */
      RegWrite(R_CTL, 1, 0x79);    /* #2589[065.4] */
      RegWrite(R_CTL, 1, 0xF9);    /* #2590[065.4] */
    }
  else
    {
      RegWrite(R_CTL, 1, 0x59);
      RegWrite(R_CTL, 1, 0xD9);
    }
  RegWrite(R_LEN, 2, LEN_MAGIC);    /* #2591[065.4] */
  WaitWhileBusy(100);
}

/* **********************************************************************

DoOriginate()

*shall* one time move the slider safely back to its origin.
No idea, hoiw to achieve this, for now...

********************************************************************** */

void DoOriginate()
{
  int cWhite,cBlack,iStripe;
  
  if (bVerbose)
    fprintf(stderr,"carriage return...\n");
  dprintf(DEBUG_ORIG,"originate 1...\n");
#ifdef ORIGINATE_INIT_JOG
  /* part job: switch on the lamp and move
     approx. 4 mm. forward (100 units, 4.23 mm). */
  DoJog(100);
  dprintf(DEBUG_ORIG,"originate 2...\n");
#endif

  /* This moves make some steps (a third of the initial one) backwards.
     Three times goes nearly back to the starting point (-1 mm) */
  RegWrite(0x34, 1, 0x63);    /* #2493[062.5] */
  RegWrite(0x49, 1, 0x96);    /* #2494[062.5] */
  {
    unsigned char uchRegs2495[]={
      0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
      0xEC /*!!0x04!!*/, 0x13 /*!!0x05!!*/, 0x26 /*!!0x06!!*/,
      0x00 /*0x07*/, 0x00 /*0x08*/, 0x3F /*!!0x09!!*/,
      0x02 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
    RegWriteArray(R_ALL, 74, uchRegs2495);
  }    /* #2495[062.5] */

  do {
    int            anLine[CCH_BONSAI]; /* summm */
    unsigned char  achLine[CCH_BONSAI+1];
    unsigned char *puchBuffer;
    int            cchBulk,i;
    long           lSum, lMedian;
    /*     dprintf(DEBUG_SCAN,"originate-%d...",iStripe); */
    RegWrite(R_CTL, 1, 0x59);    /* #2496[062.5] */
    RegWrite(R_CTL, 1, 0xD9);    /* #2497[062.5] */
    WaitWhileScanning(5);
    cchBulk=2*RegRead(R_STAT, 2);
    if (cchBulk!=2*MAX_PIXEL_PER_SCANLINE)
      Panic(PANIC_COMM,"illegal scan line with reported");
    puchBuffer=(unsigned char*)calloc(1,cchBulk);
    CHECK_POINTER(puchBuffer);
    if (BulkReadBuffer(puchBuffer, cchBulk)!=cchBulk)
      Panic(PANIC_COMM,"truncated 10200-bulk");
    lSum=0;
    memset(anLine,0,sizeof(anLine));
#ifdef ORIGINATE_BY_AVERAGE
    for (i=0; i<cchBulk; i++)
      {
	int iBonsai=(i*(2*CCH_BONSAI-1))/(cchBulk-1); /* 0..119 */
	if (iBonsai>=CCH_BONSAI)
	  iBonsai-=CCH_BONSAI; /* wraparound */
	lSum+=puchBuffer[i];
	anLine[iBonsai]+=puchBuffer[i]; /* simple, basta */
      }
#else
    for (i=0; i<CCH_BONSAI; i++)
      {
	int iBulk=i*(cchBulk/2)/CCH_BONSAI;
	lSum+=puchBuffer[iBulk];
	achLine[i]=puchBuffer[iBulk+40]; /* simple, basta */
      }
#endif
    cWhite=0;
    cBlack=0;
    /* renormalize */
    achLine[CCH_BONSAI]='\0';
    lMedian=cchBulk/CCH_BONSAI; /* the maximum accumulatable value/256 */
    for (i=0; i<CCH_BONSAI; i++)
      {
#ifdef ORIGINATE_BY_AVERAGE
	achLine[i]=anLine[i]/lMedian; /* 0..256 */
#endif
	achLine[i]=achLine[i]/26+'0'; /* '0'...'9' */
      }
    /* check for the three circles */
    for (i=0; i<CCH_BONSAI; i++)
      {
	if (achLine[i]>='4') cWhite++;
	switch (i)
	  {
	  case X_BONSAI_BLACK1:
	  case X_BONSAI_BLACK2:
	  case X_BONSAI_BLACK3:
	    cBlack+=achLine[i]-'0';
	    break;
	  }
      }
    achLine[CCH_BONSAI]='\0';
    dprintf(DEBUG_ORIG,"%s - %c%c%c - %d\n",
	    achLine,
	    achLine[X_BONSAI_BLACK1],
	    achLine[X_BONSAI_BLACK2],
	    achLine[X_BONSAI_BLACK3],
	    cWhite);
    lMedian=lSum/cchBulk;
    free(puchBuffer);
    /* dprintf(DEBUG_ORIG,"median=%ld, sum=%ld\n",lMedian,lSum); */
    WaitWhileBusy(2);
  } while (cWhite<MIN_BONSAI_WHITE || cBlack>3);
  
  dprintf(DEBUG_ORIG,"originate 3...\n");
  /* ... this blocks makes little to no movement (approx. -0.5 mm) */
  {
    unsigned char uchRegs2551[]={
      0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
      0xEC /*0x04*/, 0x13 /*0x05*/, 0x03 /*!!0x06!!*/,
      0x00 /*0x07*/, 0x00 /*0x08*/, 0x3F /*0x09*/,
      0x02 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
      0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*!!R_CSTAT!!*/,
      0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
      0x59 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
      0x96 /*0x49*/, 0xD8 /*0x4A*/ };
    RegWriteArray(R_ALL, 74, uchRegs2551);
  }    /* #2551[064.4] */
  RegWrite(0x34, 1, 0x63);
  RegWrite(0x49, 1, 0x96);
  for (iStripe=0; iStripe<3; iStripe++)
    {
      int cchBulk;
      RegWrite(R_CTL, 1, 0x59);
      RegWrite(R_CTL, 1, 0xD9);
      WaitWhileScanning(5);
      cchBulk=RegRead(R_STAT, 2);
      BulkRead(NULL, 2*cchBulk);
      WaitWhileBusy(2);
    }
}

/* **********************************************************************

DoScanGray()

********************************************************************** */

void DoScanGray(FILE *fh, int cRows)
{
  int iStripe,cSteps;
  cSteps=1;
  if (fh)
    {
      fprintf(fh,"P5\n%d %d\n255\n",5100,2*cRows);
      fflush(fh);
    }
  if (bVerbose)
    fprintf(stderr,"scanning %d by %d in gray\n",5100,2*cRows);
  /* ... real scan, but grayscale, and with 1/600 inch movement */
  {
    unsigned char uchRegs2551[]={
      0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
      0xEC /*0x04*/, 0x13 /*0x05*/, 0x00 /*!!0x06!!*/,
      0x00 /*0x07*/, 0x00 /*0x08*/, 0x3F /*0x09*/,
      0x02 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
      0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*!!R_CSTAT!!*/,
      0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
      0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
      0x96 /*0x49*/, 0xD8 /*0x4A*/ };
    RegWriteArray(R_ALL, 74, uchRegs2551);
  }    /* #2551[064.4] */
  RegWrite(0x34, 1, 0x63);
  RegWrite(0x49, 1, 0x96);
  for (iStripe=0; iStripe<cRows; iStripe++)
    {
      int cchBulk;
      RegWrite(R_STPS, 2, cSteps-1);
      RegWrite(R_CTL, 1, 0x79);
      RegWrite(R_CTL, 1, 0xF9);
      if (!(iStripe%100))
	fprintf(fhLog,"scanning row %d\n",iStripe);
      WaitWhileScanning(5);
      cchBulk=RegRead(R_STAT, 2);
      BulkRead(fh, 2*cchBulk);
      WaitWhileBusy(2);
    }
  DoJog(-cRows*cSteps);
}

/* **********************************************************************

DoLampSwitch(nRegister)

0x01 should switch the lamp ON
0x02 should swuitch it OFF

********************************************************************** */

void DoLampSwitch(int nPattern)
{
  RegWrite(R_LMP, 1, nPattern);
}

/* **********************************************************************

DoCalibration

********************************************************************** */

void DoCalibration(void)
{
  int cchBulk;
  dprintf(DEBUG_SCAN,"do calibration...\n");

  /* this sequence makes a jump start (0.5 cm) forward and stops.
     Maybe it is the "start scan" position. */

  dprintf(DEBUG_SCAN,"start scan position...\n");
  
  RegWrite(0x34, 1, 0x63);
  RegWrite(0x49, 1, 0x96);
  WaitWhileBusy(2);
  RegWrite(R_LEN,2,LEN_MAGIC);
  RegWrite(0x34, 1, 0x63);
  RegWrite(0x49, 1, 0x9E); /* that is a difference! */
  {
    unsigned char uchRegs2587[]={
      0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
      0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0xC8 /*!!0x06!!*/,
      0x00 /*0x07*/, 0x00 /*0x08*/, 0x00 /*!!0x09!!*/,
      0x00 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
    RegWriteArray(R_ALL, 74, uchRegs2587);
  }    /* #2587[065.4] */
  RegWrite(R_CTL, 1, 0x39);    /* #2588[065.4] */
  RegWrite(R_CTL, 1, 0x79);    /* #2589[065.4] */
  RegWrite(R_CTL, 1, 0xF9);    /* #2590[065.4] */
  RegWrite(R_LEN, 2, LEN_MAGIC);    /* #2591[065.4] */
  WaitWhileBusy(5);
  RegWrite(R_LEN,2,LEN_MAGIC);
 
  dprintf(DEBUG_SCAN,"magic1...\n");
  RegWrite(R_LEN,2,LEN_MAGIC);
  {
    unsigned char uchRegs2609[]={
      0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
      0x10 /*!!0x04!!*/, 0xC0 /*!!0x05!!*/, 0x00 /*!!0x06!!*/,
      0x00 /*0x07*/, 0xFF /*!!0x08!!*/, 0xFF /*!!0x09!!*/,
      0x20 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
      0x4E /*0x2E*/, 0x80 /*!!R_CCAL!!*/, 0x80 /*!!R_CCAL2!!*/,
      0x80 /*!!R_CCAL3!!*/, 0x29 /*!!R_LEN!!*/, 0x35 /*!!R_LENH!!*/,
      0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
      0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
      0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
      0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
      0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*!!R_CSTAT!!*/,
      0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
      0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
      0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
    RegWriteArray(R_ALL, 74, uchRegs2609);
  }    /* #2609[066.2] */
  RegWrite(R_LEN, 2, LEN_MAGIC);    /* #2611[066.2] */
  RegWrite(R_CTL, 1, 0x39);    /* #2614[066.2] */
  WaitWhileBusy(3);

  dprintf(DEBUG_SCAN,"magic2...\n");
  RegWrite(R_LEN, 2, LEN_MAGIC);    /* #2611[066.2] */
  {
    unsigned char uchRegs2617[]={
      0x73 /*!!0x01!!*/, 0x03 /*!!0x02!!*/, 0x20 /*!!0x03!!*/,
      0x00 /*!!0x04!!*/, 0xCF /*!!0x05!!*/, 0x00 /*0x06*/,
      0x00 /*0x07*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
      0x02 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
      0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
      0x80 /*R_CCAL3*/, 0xEA /*!!R_LEN!!*/, 0x24 /*!!R_LENH!!*/,
      0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
      0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
      0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
      0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
      0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
      0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
      0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
      0x96 /*0x49*/, 0xD8 /*0x4A*/ };
    RegWriteArray(R_ALL, 74, uchRegs2617);
  }    /* #2617[066.2] */
  RegWrite(0x34, 1, 0x03);    /* #2618[066.2] */
  RegWrite(0x49, 1, 0x96);    /* #2619[066.2] */
  RegWrite(R_CTL, 1, 0x79);    /* #2620[066.2] */
  RegWrite(R_CTL, 1, 0xF9);    /* #2621[066.2] */
  WaitWhileScanning(3);
  cchBulk=2*RegRead(R_STAT,2); /* the mysterious 3840 bytes */
  dprintf(DEBUG_SCAN,"reading %d bytes...\n",cchBulk);
  BulkRead(NULL,cchBulk);
  WaitWhileBusy(3);

  dprintf(DEBUG_SCAN,"magic2...\n");
  RegWrite(R_LEN, 2, 0x290B);    /* #2630[066.4] */
  {
    unsigned char uchRegs2631[]={
      0x73 /*0x01*/, 0x03 /*0x02*/, 0x20 /*0x03*/,
      0x00 /*0x04*/, 0xCF /*0x05*/, 0x00 /*0x06*/,
      0x00 /*0x07*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
      0x02 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
      0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
      0x80 /*R_CCAL3*/, 0x0B /*!!R_LEN!!*/, 0x29 /*!!R_LENH!!*/,
      0x03 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
      0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
      0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
      0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
      0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*!!R_CSTAT!!*/,
      0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
      0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
      0x96 /*0x49*/, 0xD8 /*0x4A*/ };
    RegWriteArray(R_ALL, 74, uchRegs2631);
  }    /* #2631[066.4] */
  RegWrite(0x34, 1, 0x03);    /* #2632[066.4] */
  RegWrite(0x49, 1, 0x96);    /* #2633[066.4] */
  RegWrite(R_CTL, 1, 0x79);    /* #2634[066.5] */
  RegWrite(R_CTL, 1, 0xF9);    /* #2635[066.5] */
  WaitWhileScanning(3);
  cchBulk=2*RegRead(R_STAT, 2);
  dprintf(DEBUG_SCAN,"reading %d bytes...\n",cchBulk);
  BulkRead(NULL,cchBulk); /* again, why 3840 ? */
  WaitWhileBusy(3);

  dprintf(DEBUG_SCAN,"magic3...\n");
  RegWrite(R_LEN, 2, 0x290B);    /* #2643[066.7] */
  WaitWhileBusy(3);
  WaitWhileBusy(3);
  RegWrite(R_CTL, 1, 0x39);    /* #2648[066.7] */
  RegWrite(R_CCAL, 3, 0x848888);    /* #2650[066.7] */
  {
    unsigned char uchRegs2651[]={
      0x19 /*!!0x01!!*/, 0x00 /*!!0x02!!*/, 0x3F /*!!0x03!!*/,
      0x18 /*!!0x04!!*/, 0xC0 /*!!0x05!!*/, 0x00 /*0x06*/,
      0x00 /*0x07*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
      0x02 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
      0x4E /*0x2E*/, 0x88 /*!!R_CCAL!!*/, 0x88 /*!!R_CCAL2!!*/,
      0x84 /*!!R_CCAL3!!*/, 0x0B /*R_LEN*/, 0x29 /*R_LENH*/,
      0x03 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
      0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
      0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
      0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
      0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
      0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
      0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
      0x96 /*0x49*/, 0xD8 /*0x4A*/ };
    RegWriteArray(R_ALL, 74, uchRegs2651);
  }    /* #2651[066.7] */
  RegWrite(0x34, 1, 0x03);    /* #2652[066.7] */
  RegWrite(0x49, 1, 0x96);    /* #2653[066.7] */
  RegWrite(R_CTL, 1, 0x79);    /* #2654[066.7] */
  RegWrite(R_CTL, 1, 0xF9);    /* #2655[066.7] */
  WaitWhileScanning(3);
  cchBulk=2*RegRead(R_STAT, 2);
  dprintf(DEBUG_SCAN,"reading %d bytes...\n",cchBulk);
  BulkRead(NULL,cchBulk); /* again, why 3840 ? */
  WaitWhileBusy(1);
}


