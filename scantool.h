#ifndef SCANTOOL_H
#define SCANTOOL_H

/* ======================================================================

 common declarations and definitions.

 (C) Marian Eichholz 2001

====================================================================== */

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

#include <errno.h>

#include <usb.h>

#include "sm3600.h"

/* ====================================================================== */

#ifdef INSTANTIATE_VARIABLES
#define GLOBAL
#else
#define GLOBAL extern
#endif

/* ====================================================================== */

GLOBAL unsigned long      ulDebugMask;
GLOBAL TBool              bVerbose;
GLOBAL TBool              bInteractive;
GLOBAL char              *szLogFile;
GLOBAL char              *szScanFile;

GLOBAL TInstance          devInstance;

/* ====================================================================== */


/* scanutil.c */
void ExitCheck(TInstance *this);
int SetError(TInstance *this, int nError, const char *szFormat, ...);
void dprintf(unsigned long ulType, const char *szFormat, ...);
void DumpBuffer(FILE *fh, const char *pch, int cch);
void FixExposure(unsigned char *pchBuf,
		 int cchBulk,
		 int nBrightness,
		 int nContrast);

/* scanmtek.c */
int DoInit(TInstance *this);
int WaitWhileBusy(TInstance *this,int cSecs);
int WaitWhileScanning(TInstance *this,int cSecs);
int DoJog(TInstance *this,int nDistance);
int DoLampSwitch(TInstance *this,int nPattern);
int DoCalibration(TInstance *this);

/* scanusb.c */
int RegWrite(TInstance *this,int iRegister, int cb, unsigned long ulValue);
int RegWriteArray(TInstance *this,int iRegister, int cb, unsigned char *pchBuffer);
int RegCheck(TInstance *this,int iRegister, int cch, unsigned long ulValue);
int BulkRead(TInstance *this,FILE *fhOut, unsigned int cchBulk);
int BulkReadBuffer(TInstance *this,unsigned char *puchBufferOut, unsigned int cchBulk); /* gives count */
unsigned int RegRead(TInstance *this,int iRegister, int cch);

/* gray.c */
int DoScanGray(TInstance *this);
/* color.c */
int DoScanColor(TInstance *this);

/* homerun.c */
int DoOriginate(TInstance *this);

#endif
