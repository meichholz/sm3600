#ifndef _H_SM3600
#define _H_SM3600

/* ======================================================================

sm3600.h

SANE backend master module.

Definitions ported from "scantool.h" 5.4.2001.

(C) Marian Matthias Eichholz 2001

Start: 2.4.2001

====================================================================== */

#define DEBUG_SCAN     0x0001
#define DEBUG_COMM     0x0002
#define DEBUG_ORIG     0x0004
#define DEBUG_BASE     0x0011
#define DEBUG_DEVSCAN  0x0012
#define DEBUG_REPLAY   0x0014

#define PANIC_SETUP   1
#define PANIC_COMM    2
#define PANIC_REPLAY  3
#define PANIC_RUNTIME 4
#define PANIC_INTERN  99

/* ====================================================================== */

typedef enum { false, true } TBool;

typedef struct {
  int           xMargin; /* in 1/600 inch */
  int           yMargin; /* in 1/600 inch */
  unsigned char nHoleGray;
  unsigned char nBarGray;
  long          rgbBias;
} TCalibration;

typedef struct {
  int x;
  int y;
  int cx;
  int cy;
  int res; /* like all parameters in 1/1200 inch */
  int nBrightness; /* -255 ... 255 */
  int nContrast;   /* -128 ... 127 */
} TScanParam;

typedef enum { fast, high, best } TQuality;
typedef enum { color, gray, line, halftone } TMode;

#define INST_ASSERT() { if (this->nErrorState) return this->nErrorState; }
#define CHECK_POINTER(p) \
if (!p) return SetError(this,PANIC_RUNTIME,"memory failed in %d",__LINE__)

typedef struct {
  int                nErrorState;
  char              *szErrorReason;
  TScanParam         param;
  TCalibration       calibration;
  TBool              bWriteRaw;
  TQuality           quality;
  TMode              mode;
  usb_dev_handle    *hScanner;
  FILE              *fhLog;
  FILE              *fhScan;
} TInstance ;

#ifndef SCANTOOL_H

typedef struct SM3600_Device {
  struct SM3600_Device * next;
  SANE_Device            sane;
  TInstance             *pInst;
} SM3600_Device;

typedef struct SM3600_Scanner
  {
    struct SM3600_Scanner *next;

    /*
    SANE_Option_Descriptor opt[NUM_OPTIONS];
    Option_Value val[NUM_OPTIONS];
    V4L_Resolution resolution;
    SANE_Parameters params;
    */
    SANE_String_Const devicename; /* Name of the Device */
  } SM3600_Scanner;

#endif

#define TRUE  1
#define FALSE 0

/* ====================================================================== */

#define ERR_FAILED -1
#define OK         0

#define NUM_SCANREGS      74

/* ====================================================================== */

#define R_ALL    0x01

/* have to become an enumeration */

typedef enum { none, hpos, hposH, hres } TRegIndex;

/* WORD */
#define R_SPOS   0x01
#define R_XRES   0x03
/* WORD */
#define R_SWID   0x04
/* WORD */
#define R_STPS   0x06
/* WORD */
#define R_YRES   0x08
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

#endif
