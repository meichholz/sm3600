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
#include <signal.h>

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

typedef int    SANE_Int;

#endif

#include "sm3600.h"

extern char *achErrorMessages[];

#ifdef INSANE_VERSION

void DBG(int nLevel, const char *szFormat, ...);

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

#endif
