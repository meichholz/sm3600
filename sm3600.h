#ifndef _H_SM3600
#define _H_SM3600

/* ======================================================================

sm3600.c

SANE backend master module

(C) Marian Matthias Eichholz 2001

Start: 2.4.2001

====================================================================== */

typedef struct SM3600_Device {
  struct SM3600_Device * next;
  SANE_Device sane;
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

#define TRUE  1
#define FALSE 0

#endif
