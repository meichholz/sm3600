#ifndef SCANTOOL_H
#define SCANTOOL_H

/*

 $Id: scantool.h,v 1.8 2001/03/27 22:34:05 eichholz Exp $

 common declarations and definitions.

 (C) Marian Eichholz 2001

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

typedef struct {
  int xMargin; /* in 1/600 inch */
  int yMargin; /* in 1/600 inch */
  unsigned char nHoleGray;
  unsigned char nBarGray;
  long rgbWhite;
} TCalibration;

typedef struct {
  int x;
  int y;
  int cx;
  int cy;
  int res; /* like all parameters in 1/1200 inch */
} TScanParam;

typedef enum { fast, high, best } TQuality;
typedef enum { color, gray, line, halftone } TMode;

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
GLOBAL TBool              bWriteRaw;
GLOBAL TQuality           optQuality;
GLOBAL TMode              optMode;

GLOBAL usb_dev_handle     *hScanner;

GLOBAL char               *szLogFile;
GLOBAL char               *szScanFile;
GLOBAL FILE               *fhLog;
GLOBAL FILE               *fhScan;

GLOBAL TScanParam         param;
GLOBAL TCalibration       calibration;

/* ====================================================================== */

#define NUM_SCANREGS      74

#define R_ALL    0x01

/* WORD */
#define R_SPOS   0x01
#define R_XRES   0x03
/* WORD */
#define R_SWID   0x04
/* WORD */
#define R_STPS   0x06
/* WORD */
#define R_SLEN   0x0A
/* WORD*/
#define R_INIT   0x12
#define RVAL_INIT 0x1540
/* RGB */
#define R_CCAL   0x2F

/* WORD */
#define R_CSTAT  0x42
#define R_CTL    0x46
/* WORD */
#define R_POS    0x52
/* WORD */
#define R_LMP    0x44
#define R_QLTY   0x4A
#define R_STAT   0x54

#define LEN_MAGIC   0x24EA

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
