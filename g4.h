/*
* from g4tool
*
* Umwandlung eines G4-Bildes (ggf. mit Header) in ein PPM
*
* (C) Marian Matthias Eichholz 1. Mai 1997
*
* Version: s.u.
*
*/

#ifdef G4TOOL
#ifndef _H_G4TOOL
#define _H_G4TOOL

#define VERSION "0.17"

/* Revisionsgeschichte siehe <Revision> */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

typedef unsigned short	USHORT;
typedef int		BOOL;

#define	TRUE	1
#define	FALSE	0

#define	BLACK	1
#define WHITE	0

#define	xDUMP_SPECS
#define xSUPPRESS_DELTA_PCL

#define SUPPORT_FULL_PAGE
#define DIRECT_DELTA_PCL

/*
  Die folgenden Setzungen gehen direkt in die Pufferberechnung und skalieren
  im MB-Sektor, also sparsam. Die Settings sollten f�r A4 600x600 reichen.
*/

#define		CX_MAX	5000

#define SYM_P	0x0011ul
#define SYM_H	0x0009ul
#define SYM_V0	0x0003ul
#define SYM_VR1	0x000Bul
#define SYM_VR2	0x0043ul
#define SYM_VR3	0x0083ul
#define SYM_VL1	0x000Aul
#define SYM_VL2	0x0042ul
#define SYM_VL3	0x0082ul
#define SYM_EXT	0x0081ul
#define SYM_EOL	0x1001ul
#define SYM_EOFB 0xFFFFul

#define OP_SYM_P	1
#define OP_SYM_H	2
#define OP_SYM_V0	3
#define OP_SYM_VR1	4
#define OP_SYM_VR2	5
#define OP_SYM_VR3	6
#define OP_SYM_VL1	7
#define OP_SYM_VL2	8
#define OP_SYM_VL3	9
#define OP_SYM_EXT	10
#define OP_SYM_EOL	11
#define OP_SYM_EOFB	12

typedef struct {
	int	cPixel;
	char 	*szBitMask;
	} TTemplRunSpec;

#ifdef INSTANTIATE_VARIABLES
#define GLOBAL
#else
#define GLOBAL extern
#endif

	/**
	Die Tabelle mit den Laufl�ngencodes in der Rohfassung.
	*/
extern TTemplRunSpec *arstSpecs[3];

typedef struct {
	short	cPixel;
	USHORT	bitMask;
	} TRunSpec;
	
/*
* Seitenma�e lt PCL-Manual :	cX=2480-2*50 (printable area) in 300 DPI!
				cY=3507-2*50
*/

#define		CX_MAX_A4	2380
#define		CY_MAX_A4	3407

GLOBAL int	cxPaper,cyPaper;
GLOBAL int	xPaperOut;	/* Offset des ersten Ausgabepixels */
GLOBAL int	cxPaperOut;	/* Gr��e des Ausgabepuffers */
GLOBAL int	yPaperOut;	/* das Gleiche f�r die H�he */
GLOBAL int	cyPaperOut;

#define		CRUNTABLE	120

GLOBAL TRunSpec	arsRuns[2][CRUNTABLE];
GLOBAL int	acRuns[2];

#define		Y_LAST_LINE	2

#define		CCH_PCL_BUF	10000

GLOBAL BOOL		aabitBuffers[Y_LAST_LINE][CX_MAX+5];
GLOBAL BOOL		*abitRef,*abitWork;
GLOBAL int		iBuffer;

GLOBAL unsigned char	*pchFullPage;
GLOBAL long		lcchFullPageLine;
GLOBAL long		lcFullPageLines;

GLOBAL BOOL		bFullPage;
GLOBAL BOOL		bLandscape;
GLOBAL BOOL		bRotate;

#define		OFMT_PBM	1
#define		OFMT_TIFF	2
#define		OFMT_PCL	3
#define		OFMT_G4		4
#define		OFMT_RAWG4	5

GLOBAL int		nFileFormat;

GLOBAL int		iLine,iByte;
GLOBAL int		a,b;

GLOBAL BOOL		bNoLineWarnings;
GLOBAL BOOL		bDebugShowRunComp;
GLOBAL BOOL		bDebugVerbose;
GLOBAL BOOL		bBacon;
GLOBAL BOOL		bDebugPCL;
GLOBAL int		nClipType;

#define	CLIP_NONE		0
#define CLIP_CENTER_SIMPLE	1
#define CLIP_CENTER_DOC		2
#define CLIP_FIX_BORDERS	3

GLOBAL BOOL		bVerboseX;
GLOBAL BOOL		bDebugEncoder;
GLOBAL BOOL		bNoCheckEOL;
GLOBAL int		nPCLResolution;

/* ****************************************************************** */

/** MAIN */

void CenterPage(void);
BOOL WriteHeader(FILE *f);
BOOL FlushLine(FILE *f);
BOOL ClosePage(FILE *f);
void EncodePageLine(void);

/* PCL */

BOOL WriteHeadPCL(FILE *f);
BOOL ClosePagePCL(FILE *f);
BOOL FlushLinePCL(FILE *f);

/* ENCODE */

BOOL WriteHeadG4(FILE *f, BOOL bTiff);
BOOL ClosePageG4(FILE *f, BOOL bTiff);
BOOL EncodePage(FILE *f);
BOOL FlushLineG4(FILE *f);

/* DECODE */

BOOL DecodePage();
BOOL SetTables(void);

/* TIFF */

BOOL TiffEnter(unsigned char uch);
BOOL TiffClose(FILE *f, int cx, int cy, int idCompression);
BOOL TiffCreate(long lcchEstimated);
/* $Extended$File$Info$
 */

#endif
#endif
