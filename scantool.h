#ifndef SCANTOOL_H
#define SCANTOOL_H

/*

 $Id: scantool.h,v 1.1 2001/03/23 21:58:30 eichholz Exp $

 common declarations and definitions

*/

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

#include <errno.h>

#include <usb.h>

/* ====================================================================== */

#ifdef INSTANTIATE_VARIABLES
#define GLOBAL
#else
#define GLOBAL extern
#endif

/* ====================================================================== */

#define DEBUG_SCAN     0x0001
#define DEBUG_COMM     0x0002
#define DEBUG_ORIG     0x0004
#define DEBUG_BASE     0x0011
#define DEBUG_DEVSCAN  0x0012
#define DEBUG_REPLAY   0x0014


typedef enum { false, true } TBool;

#define ERR_FAILED -1
#define OK         0

#define PANIC_SETUP   1
#define PANIC_COMM    2
#define PANIC_REPLAY  3
#define PANIC_RUNTIME 4
#define PANIC_INTERN  99

/* ====================================================================== */

GLOBAL unsigned long      ulDebugMask;
GLOBAL TBool              bVerbose;
GLOBAL TBool              bInteractive;

GLOBAL usb_dev_handle     *hScanner;

GLOBAL char               *szLogFile;
GLOBAL char               *szScanFile;
GLOBAL FILE               *fhLog;
GLOBAL FILE               *fhScan;

/* ====================================================================== */

#define R_ALL    0x01
/* 2B */
#define R_STPS   0x06
/* 3B */
#define R_CCAL   0x2F
/* 2B */
#define R_LEN    0x32
#define R_CSTAT  0x42
#define R_CTL    0x46
/* 2B */
#define R_POS    0x52
/* 2B */
#define R_LMP    0x44
#define R_STAT   0x54

#define LEN_MAGIC   0x24EA

/* some magic constant for "bonsai" line processing */
#define CCH_BONSAI  60
#define MAX_PIXEL_PER_SCANLINE  5100
#define X_BONSAI_BLACK1 7
#define X_BONSAI_BLACK2 21
#define X_BONSAI_BLACK3 36
#define MIN_BONSAI_WHITE 35

/* ====================================================================== */

#define CHECK_POINTER(p) \
if (!p) Panic(PANIC_RUNTIME,"memory failed in %d",__LINE__);

/* scanutil.c */
void Panic(int nError, const char *szFormat, ...);
void dprintf(unsigned long ulType, const char *szFormat, ...);
void DumpBuffer(FILE *fh, const char *pch, int cch);

/* scanmtek.c */
void DoInit(void);
int WaitWhileBusy(int cSecs);
int WaitWhileScanning(int cSecs);
void DoJog(int nDistance);
void DoOriginate(void);
void DoScanGray(FILE *fh, int cRows);
void DoLampSwitch(int nPattern);
void DoCalibration(void);

/* scanusb.c */
int RegWrite(int iRegister, int cb, unsigned long ulValue);
int RegWriteArray(int iRegister, int cb, unsigned char *pchBuffer);
int RegCheck(int iRegister, int cch, unsigned long ulValue);
int BulkRead(FILE *fhOut, unsigned int cchBulk);
int BulkReadBuffer(unsigned char *puchBufferOut, unsigned int cchBulk);
unsigned int RegRead(int iRegister, int cch);

#endif
