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
#define DEBUG_BUFFER   0x0018

#define DEBUG_CRITICAL 1
#define DEBUG_VERBOSE  2
#define DEBUG_INFO     3
#define DEBUG_JUNK     5

#define USB_TIMEOUT_JIFFIES  2000

#define SCANNER_VENDOR     0x05DA

/* ====================================================================== */

typedef enum { false, true } TBool;

typedef SANE_Status TState;

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
if (!p) return SetError(this,SANE_STATUS_NO_MEM,"memory failed in %d",__LINE__)

#define dprintf debug_printf

typedef struct TInstance *PTInstance;
typedef TState (*TReadLineCB)(PTInstance);

typedef struct TScanState {
  TBool           bCanceled;
  TBool           bScanning;    /* block is active? */
  TBool           bLastBulk;    /* EOF announced */
  int             iReadPos;     /* read() interface */
  int             iBulkReadPos; /* bulk read pos */
  int             iLine;        /* log no. line */
  int             cchBulk;      /* available bytes in bulk buffer */
  int             cchLineOut;   /* buffer size */
  int             cxPixel,cyPixel; /* real pixel */
  int             cxMax;        /* uninterpolated in real pixels */
  int             cxWindow;     /* Window with in sensor pixel */
  int             cyTotalPath;  /* from bed start to window end in 600 dpi */
  int             nFixAspect;   /* aspect ratio in percent, 75-100 */
  int             cBacklog;     /* depth of ppchLines */
  int             ySensorSkew;  /* distance in pixel between sensors */
  char           *szOrder;      /* 123 or 231 or whatever */
  unsigned char  *pchBuf;       /* bulk transfer buffer */
  short         **ppchLines;    /* for error diffusion and color corr. */
  unsigned char  *pchLineOut;   /* read() interface */
  TReadLineCB     ReadProc;     /* line getter callback */
} TScanState;


#ifndef INSANE_VERSION

#define NUM_OPTIONS 14

typedef union
  {  
    SANE_Word w;
    SANE_Word *wa;              /* word array */
    SANE_String s;
  }
TOptionValue;

typedef struct TDevice {
  struct TDevice        *pNext;
  struct usb_device     *pdev;
  SANE_Device            sane;
} TDevice;

#endif

typedef struct TInstance {
#ifndef INSANE_VERSION
  struct TInstance         *pNext;
  SANE_Option_Descriptor    aoptDesc[NUM_OPTIONS];
  TOptionValue              aoptVal[NUM_OPTIONS];
#endif
  TScanState         state;
  TCalibration       calibration;
  TState             nErrorState;
  char              *szErrorReason;
  TBool              bSANE;
  TScanParam         param;
  TBool              bWriteRaw;
  TBool              bVerbose;
  TBool              bOptSkipOriginate;
  TQuality           quality;
  TMode              mode;
  usb_dev_handle    *hScanner;
  FILE              *fhLog;
  FILE              *fhScan;
} TInstance;

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
#define USB_CHUNK_SIZE 0x8000

/* scanutil.c */
int SetError(TInstance *this, int nError, const char *szFormat, ...);
void debug_printf(unsigned long ulType, const char *szFormat, ...);
void DumpBuffer(FILE *fh, const char *pch, int cch);
void FixExposure(unsigned char *pchBuf,
		 int cchBulk,
		 int nBrightness,
		 int nContrast);
TState FreeState(TInstance *this, TState nReturn);
TState EndScan(TInstance *this);
TState ReadChunk(TInstance *this, unsigned char *achOut,
		 int cchMax, int *pcchRead);
TState DoScanFile(TInstance *this);
void   GetAreaSize(TInstance *this);


/* scanmtek.c */
extern unsigned short aidProduct[];
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
TState MemReadArray(TInstance *this, int iAddress, int cb, unsigned char *pchBuffer);
TState MemWriteArray(TInstance *this, int iAddress, int cb, unsigned char *pchBuffer);

/* gray.c */
TState StartScanGray(TInstance *this);
/* color.c */
TState StartScanColor(TInstance *this);

/* homerun.c */
TState DoOriginate(TInstance *this);

/* ====================================================================== */

#endif
