/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

$Id: scanmtek.c,v 1.14 2001/05/01 22:11:59 eichholz Exp $

====================================================================== */

#include "scantool.h"

unsigned short aidProduct[] = {
  0x40B3, 0x40CA, 0x40FF /* not official */, /* ScanMaker 3600 */
  0x40B8, 0x40CB, /* ScanMaker 3700 */
  /* SM3750 unknown */
  0x0 };

/* **********************************************************************

DoInit()

Replay the first initialisation block (no slider movement).

********************************************************************** */

TState DoInit(TInstance *this)
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
      0x80 /*R_CCAL3*/, 0x29 /* */, 0x35 /* */,
      0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
      0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
      0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
      0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
      0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
      0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
      0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
      0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  dprintf(DEBUG_SCAN,"general init...\n");
  return RegWriteArray(this, R_ALL, 74, uchRegs2466);
}

/* **********************************************************************

WaitWhileBusy()

NOTE: Semantics changed: 0 on success, -1 else

********************************************************************** */

TState WaitWhileBusy(TInstance *this, int cSecs)
{
  int cTimeOut=cSecs*10;
  int value;
  INST_ASSERT();
  while (cTimeOut--)
    {
      if ((value=(int)RegRead(this,R_CTL,1)) & 0x80)
	usleep(50);
      else
	return 0;
    }
  return SetError(this,SANE_STATUS_IO_ERROR,"Timeout while waiting for CTL");
}

/* **********************************************************************

WaitWhileScanning()

NOTE: Semantics changed: 0 on success, -1 else

********************************************************************** */

TState WaitWhileScanning(TInstance *this, int cSecs)
{
  int cTimeOut=cSecs*10;
  int value;
  INST_ASSERT();
  while (cTimeOut--)
    {
      if ((value=(int)RegRead(this,R_CSTAT, 1)) & 0x80)
	return 0;
      else
	usleep(50);
    }
  return SetError(this,SANE_STATUS_IO_ERROR,"Timeout while waiting for CSTAT");
}

/* **********************************************************************

DoLampSwitch(nRegister)

0x01 should switch the lamp ON
0x02 should swuitch it OFF

********************************************************************** */

TState DoLampSwitch(TInstance *this, int nPattern)
{
  return RegWrite(this, R_LMP, 1, nPattern);
}

/* **********************************************************************

DoCalibration

********************************************************************** */

TState DoCalibration(TInstance *this)
{
  return WaitWhileBusy(this,1);
}

/* **********************************************************************

UploadGammaTable()

********************************************************************** */

TState UploadGammaTable(TInstance *this, int iByteAddress, SANE_Int *pnGamma)
{
  unsigned char *puchGamma;
  TState         rc;
  int            i;
  rc=SANE_STATUS_GOOD;
  INST_ASSERT();
  puchGamma=malloc(0x2000);
  if (!puchGamma) return SetError(this,SANE_STATUS_NO_MEM,"gamma buffer");
  DBG(DEBUG_INFO,"uploading gamma to %d\n",iByteAddress);
  for (i=0; i<0x1000; i++)
    {
      int nVal=pnGamma[i];
      /* nVal=i; */
      puchGamma[2*i+1]=nVal>>8;
      puchGamma[2*i+0]=nVal&0xFF;
    }
  for (i=0; rc==SANE_STATUS_GOOD && i<0x2000; i+=0x1000)
    rc=MemWriteArray(this,(i+iByteAddress)>>1,0x1000,puchGamma+i);
  free(puchGamma);
  return rc;
}
