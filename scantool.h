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

#ifdef INSANE_VERSION

typedef enum { SANE_STATUS_GOOD,
	       SANE_STATUS_CANCELLED,
	       SANE_STATUS_UNSUPPORTED,
	       SANE_STATUS_EOF,
	       SANE_STATUS_NO_MEM,
	       SANE_STATUS_IO_ERROR,
	       SANE_STATUS_ACCESS_DENIED,
	       SANE_STATUS_INVAL,
	       SANE_STATUS_DEVICE_BUSY,
} SANE_Status;

#endif

#include "sm3600.h"

extern char *achErrorMessages[];

#ifdef INSANE_VERSION

/* ====================================================================== */

#ifdef INSTANTIATE_VARIABLES
#define GLOBAL
char *achErrorMessages[]={ "everything fine",
			  "operation canceled",
			  "unsupported function",
			  "end of scan or file",
			  "memory overflow",
			  "input/output error",
			  "permission problem",
			  "invalid parameter",
			  "device busy",
};
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

#endif

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
TState DoInit(TInstance *this);
TState WaitWhileBusy(TInstance *this,int cSecs);
TState WaitWhileScanning(TInstance *this,int cSecs);
TState DoJog(TInstance *this,int nDistance);
TState DoLampSwitch(TInstance *this,int nPattern);
TState DoCalibration(TInstance *this);

/* scanusb.c */
TState RegWrite(TInstance *this,int iRegister, int cb, unsigned long ulValue);
TState RegWriteArray(TInstance *this,int iRegister, int cb, unsigned char *pchBuffer);
TState RegCheck(TInstance *this,int iRegister, int cch, unsigned long ulValue);
int BulkRead(TInstance *this,FILE *fhOut, unsigned int cchBulk);
int BulkReadBuffer(TInstance *this,unsigned char *puchBufferOut, unsigned int cchBulk); /* gives count */
unsigned int RegRead(TInstance *this,int iRegister, int cch);

/* gray.c */
TState DoScanGray(TInstance *this);
/* color.c */
TState DoScanColor(TInstance *this);

/* homerun.c */
TState DoOriginate(TInstance *this);

#endif
