/* ======================================================================

Userspace scan tool for the Microtek 3600 scanner

compatibility functions for g4tool functions

$Id: g4compat.c,v 1.1 2001/07/30 07:48:11 eichholz Exp $

(C) Marian Eichholz 1997/2001

====================================================================== */

#ifdef G4TOOL

#define INSTANTIATE_VARIABLES
#include "g4.h"

/*
 *                     A U S G A B E T E I L
 */

/*
 ******************************************************************
 * EncodePageLine()
 ******************************************************************
 */

	/**
	Es wird nur die aktuelle Zeile zu Bytes zusammengepackt
	und in den Seitenpuffer �bertragen.
	Funktioniert nur mit SUPPORT_FULL_PAGE
	*/
void EncodePageLine()
 {
#ifdef SUPPORT_FULL_PAGE
  unsigned char	*pchCurrent, uch=0;
  int	i;
  BOOL	bBit;
  int	cBits; cBits=0;
  pchCurrent=pchFullPage+lcchFullPageLine*(iLine-1);
  for (i=1; i<=cxPaper; i++) /* erste und letzte Bits sind ung�ltig! */

   {
    bBit=abitWork[i];
    uch=(uch<<1) | bBit;
    if (++cBits == 8)
     {
      cBits=0;
      *pchCurrent++ = uch;
     }
   }
  /** padden, und Zeile abschlie�en */
  if (cBits)
   {
    uch=(uch<<(8-cBits));
    *pchCurrent=uch;
   }
#endif
 }

/*
 ******************************************************************
 * FlushLinePBM()
 ******************************************************************
 */
	/**
	Hier wird ein rohes PBM-Format geschrieben, 1bpp.
	*/
static BOOL FlushLinePBM(FILE *f)
 {
  int	i;
  int	uch=0;
  int	cBits=0;
  for (i=1; i<=cxPaper; i++)
   {
    BOOL bBit=abitWork[i];
    uch=(uch<<1) | bBit;
    	/**
    	Vielleicht ist hier noch Luft, wenn
    	die Einzelwrites von der Applikation gepuffert werden.
    	*/
    if (++cBits == 8)
     {
      fputc((int)uch,f);
      cBits=0;
     }
   }
  /** padden, und Zeile abschlie�en */
  if (cBits)
   {
    uch=(uch<<(8-cBits));
    fputc((int)uch,f);
   }
  return TRUE;
 }

/*
 ******************************************************************
 * FlushLine()
 ******************************************************************
 */
 	/**
 	Treiber f�r alle direkten Formate.
 	*/
BOOL FlushLine(FILE *f)
 {
  switch (nFileFormat)
   {
    case OFMT_G4:
    case OFMT_RAWG4:
    		return FlushLineG4(f);
    case OFMT_PBM:
    		return FlushLinePBM(f);
    case OFMT_PCL:
     		if (iLine<cyPaperOut+1+yPaperOut)
      		  return FlushLinePCL(f);
   }
  return TRUE;
 }

BOOL WriteHeader(FILE *f)
 { 
  switch (nFileFormat)
   {
    case OFMT_G4:	return WriteHeadG4(f,TRUE);
    case OFMT_RAWG4:	return WriteHeadG4(f,FALSE);
    case OFMT_PBM:	fprintf(f,"P4\n%d %d\n",cxPaper,cyPaper);
    			return TRUE;
    case OFMT_PCL:	return WriteHeadPCL(f);
   }
  return FALSE;
 }

BOOL ClosePage(FILE *f)
 {
  switch (nFileFormat)
   {
    case OFMT_G4:	return ClosePageG4(f,TRUE);
    case OFMT_RAWG4:	return ClosePageG4(f,FALSE);
    case OFMT_PBM:	return TRUE;
    case OFMT_PCL:	return DumpPagePCL(f);
   }
  return FALSE;
 }

/*
 ******************************************************************
 * CenterPage()
 ******************************************************************
 */

void CenterPage(void)
 {
  cxPaperOut=cxPaper;
  xPaperOut=0;
  cyPaperOut=cyPaper;
  yPaperOut=0;
  switch (nClipType)
   {
    case CLIP_NONE: break;
    case CLIP_CENTER_DOC:
    case CLIP_CENTER_SIMPLE:
        /**
        Notfalls mu� die Seite zentriert werden. Das geschieht mit etwas
        Augenma�, da die Dokumente ihre T�cken haben, bes. der Barcode
        an DE-Schriften.
        */
        if (cxPaper>CX_MAX_A4)
         {
          cxPaperOut=CX_MAX_A4;
#ifdef OLD_DOC_CLIP_FORMULA
          xPaperOut=(cxPaper-cxPaperOut)*100/(200-66*(nClipType==CLIP_CENTER_SIMPLE));
/*
          					^^^^
          				das sind 134 bei "simple"
*/
#else
          xPaperOut=(cxPaper-cxPaperOut)*100/(150-16*(nClipType==CLIP_CENTER_SIMPLE));
#endif
          xPaperOut-=(xPaperOut % 8);
          if (bVerboseX)
            fprintf(stderr,"limiting X to %d / %d pixels\n",
            	xPaperOut,cxPaperOut);
         }
        if (cyPaper>CY_MAX_A4)
         {
          cyPaperOut=CY_MAX_A4;
          yPaperOut=(cyPaper-cyPaperOut)/3;
          /* yPaperOut-=(yPaperOut % 8); */
          if (bVerboseX)
            fprintf(stderr,"limiting Y to %d / %d pixels\n",
            	yPaperOut,cyPaperOut);
         }
       break;
     case CLIP_FIX_BORDERS:
	/* fprintf(stderr,"Wir hatten: %d/%d",xPaperOut,yPaperOut); */
     	xPaperOut=nPCLResolution/5;
        xPaperOut-=(xPaperOut % 8);
     	yPaperOut=nPCLResolution/7; /* xxx */
	/* fprintf(stderr," und bekommen: %d/%d\n",xPaperOut,yPaperOut); */
     	break;
   }
 }
   
/*
 ******************************************************************
 * RotatePage()
 ******************************************************************
 */

static void Swap(int *x, int *y)
 {
  int n;
  n = *x; *x = *y; *y = n;
 }

int RotatePage(void)
 {
 	/**
 	Es mu� erst ein neuer Puffer geholt werden,
 	dann wird er bitweise verf�llt, und am Ende
 	wird er aktueller Puffer.
 	*/
  long 			lcchNewLine=(cyPaper+7L)/8L;
  long 			lcchNewBuf=cxPaper*lcchNewLine;
  unsigned char		*pchNewBuf;
  int			x0,y0,x,y;
  BOOL	abitBuf[8][8];
  if (bVerboseX)
    fprintf(stderr,"rotating...\n");
  pchNewBuf=malloc(lcchNewBuf);
  if (pchNewBuf<0)
   {
    fprintf(stderr,"no memory!\n");
    return 1;
   }
  	/**
  	Der Quellpuffer wird zu Schachbrettchen abgearbeitet.
  	*/
  for (x0=0; x0<cxPaper; x0+=8)
    for (y0=0; y0<cyPaper; y0+=8)
     {
     	/**
     	Zuerst wird ein Quellk�stchen geholt, mit �berlappungsschutz unten.
     	*/
       {
        unsigned char uch;
        int yMax=cyPaper-y0;
        if (yMax>8) yMax=8;
        for (y=0; y<8; y++)
         {
          if (y>yMax)
            uch=0;
          else
            uch=pchFullPage[(y0+y)*lcchFullPageLine+x0/8];
          for (x=0; x<8; x++)
            abitBuf[x][y]=(uch & (0x80>>x))!=0;
         }
       } /* read */
       	/**
       	Dann wird das K�stchen geschrieben.
       	*/
       {
        unsigned char uch;
        int y1;
        int x1;
        x1=cyPaper-y0;
        y1=x0;
        for (y=0; y<8; y++) /* y ist nun vertikal! */
         {
          uch=0;
          for (x=0; x<8; x++)
            uch=(uch<<1)|abitBuf[y][7-x];
          if (y1<cxPaper)
            pchNewBuf[lcchNewLine*(y1+y)+(x1/8L)]=uch;
         }
       } /* write */
     } /* y0 */
   /* x0 */
#ifdef DIRECT_DUMP
  printf("P4\n%d %d\n",cyPaper,cxPaper);
  fwrite(pchNewBuf,lcchNewBuf,1,stdout);
  free(pchNewBuf);
#endif
  free(pchFullPage);
  pchFullPage=pchNewBuf;
  Swap(&cxPaper,&cyPaper);
  Swap(&xPaperOut,&yPaperOut);
  Swap(&cxPaperOut,&cyPaperOut);
  lcchFullPageLine=lcchNewLine;
  lcFullPageLines=cyPaper;
  return 0;
 }

#endif
