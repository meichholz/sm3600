/* ======================================================================

sm3600.c

SANE backend master module

(C) Marian Matthias Eichholz 2001

Start: 2.4.2001

====================================================================== */

#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include <usb.h>

#ifndef BACKEND_NAME
#define BACKEND_NAME sm3600
#endif

#ifndef PATH_MAX
#define PATH_MAX       1024
#endif

#define SM3600_CONFIG_FILE "sm3600.conf"

#include <sane/sane.h>
#include <sane/config.h>
#include <sane/sanei.h>
#include <sane/sanei_backend.h>
#include <sane/sanei_config.h>
#include <sane/saneopts.h>

/* prevent inclusion of scantool.h */
#define SCANTOOL_H

#include "sm3600.h"

unsigned long ulDebugMask;

int num_devices;
static TDevice        *pdevFirst;
static TInstance      *pinstFirst;

/* ====================================================================== */

#include "sm3600/scanutil.c"
#include "sm3600/scanusb.c"
#include "sm3600/scanmtek.c"
#include "sm3600/homerun.c"
#include "sm3600/gray.c"
#include "sm3600/color.c"

/* ======================================================================

Initialise SANE options

====================================================================== */

typedef enum { optCount,
	       optGroupMode, optMode, optResolution,
	       optBrightness, optContrast,
	       optPreview, optGrayPreview,
	       optGroupGeometry,optTLX, optTLY, optBRX, optBRY,
	       optGroupEnhancement,
	       optGammaGray, optGammaR,optGammaG,optGammaB,
	       optLast } TOptionIndex;

static const SANE_String_Const aScanModes[]= {  "color", "gray", "lineart",
						"halftone", NULL };

static const SANE_Range rangeXmm = {
  SANE_FIX(0),
  SANE_FIX(220),
  SANE_FIX(0.1) };

static const SANE_Range rangeYmm = {
  SANE_FIX(0),
  SANE_FIX(300),
  SANE_FIX(0.1) };

static const SANE_Range rangeLumi = {
  SANE_FIX(-100.0),
  SANE_FIX(100.0),
  SANE_FIX(1.0) };

static const SANE_Range rangeGamma = { 0, 4095, 1 };

static const SANE_Int setResolutions[] = { 6, 75,100,200,300,600 };

SANE_Status
InitOptions(TInstance *this)
{
  TOptionIndex iOpt;
  if (optLast!=NUM_OPTIONS)
    {
      DBG(1,"NUM_OPTIONS does not fit!");
      return SANE_STATUS_INVAL;
    }
  memset(this->aoptDesc,0,sizeof(this->aoptDesc));
  memset(this->aoptVal,0,sizeof(this->aoptVal));
  InitGammaTables(this);
  for (iOpt=optCount; iOpt!=optLast; iOpt++)
    {
      static char *achNamesXY[]= {
	SANE_NAME_SCAN_TL_X,	SANE_NAME_SCAN_TL_Y,
	SANE_NAME_SCAN_BR_X,	SANE_NAME_SCAN_BR_Y };
      static char *achTitlesXY[]= {
	SANE_TITLE_SCAN_TL_X,	SANE_TITLE_SCAN_TL_Y,
	SANE_TITLE_SCAN_BR_X,	SANE_TITLE_SCAN_BR_Y };
      static char *achDescXY[]= {
	SANE_DESC_SCAN_TL_X,	SANE_DESC_SCAN_TL_Y,
	SANE_DESC_SCAN_BR_X,	SANE_DESC_SCAN_BR_Y };
      static double afFullBed[] = { 20.0,30.0, 50.0, 80.0 }; /* TODO: calculate exactly! */
      static const SANE_Range *aRangesXY[] = { &rangeXmm,&rangeYmm,&rangeXmm,&rangeYmm };
      SANE_Option_Descriptor *pdesc;
      TOptionValue           *pval;
      /* shorthands */
      pdesc=this->aoptDesc+iOpt;
      pval=this->aoptVal+iOpt;
      /* default */
      pdesc->size=sizeof(SANE_Word);
      pdesc->cap=SANE_CAP_SOFT_SELECT | SANE_CAP_SOFT_DETECT;

      /*
	Some hints:
	*every* field needs a constraint, elseway there will be a warning.
	*/
    
      switch (iOpt)
	{
	case optCount:
	  pdesc->title  =SANE_TITLE_NUM_OPTIONS;
	  pdesc->desc   =SANE_DESC_NUM_OPTIONS;
	  pdesc->cap    =SANE_CAP_SOFT_DETECT;
	  pval->w       =(SANE_Word)optLast;
	  break;
	case optGroupMode:
	  pdesc->title="Mode";
	  pdesc->desc ="";
	  pdesc->type = SANE_TYPE_GROUP;
	  pdesc->cap  = SANE_CAP_ADVANCED;
	  break;
	case optMode:
	  pdesc->name   =SANE_NAME_SCAN_MODE;
	  pdesc->title  =SANE_TITLE_SCAN_MODE;
	  pdesc->desc   ="Select the scan mode";
	  pdesc->type   =SANE_TYPE_STRING;
	  pdesc->size   =20;
	  pdesc->constraint_type = SANE_CONSTRAINT_STRING_LIST;
	  pdesc->constraint.string_list = aScanModes;
	  pval->s       = strdup(aScanModes[color]);
	  break;
	case optResolution:
	  pdesc->name   =SANE_NAME_SCAN_RESOLUTION;
	  pdesc->title  =SANE_TITLE_SCAN_RESOLUTION;
	  pdesc->desc   =SANE_DESC_SCAN_RESOLUTION;
	  pdesc->type   =SANE_TYPE_INT;
	  pdesc->unit   =SANE_UNIT_DPI;
	  pdesc->constraint_type = SANE_CONSTRAINT_WORD_LIST;
	  pdesc->constraint.word_list = setResolutions;
	  pval->w       =75;
	  break;
	case optBrightness:
	  pdesc->name   =SANE_NAME_BRIGHTNESS;
	  pdesc->title  =SANE_TITLE_BRIGHTNESS;
	  pdesc->desc   =SANE_DESC_BRIGHTNESS;
	  pdesc->type   =SANE_TYPE_FIXED;
	  pdesc->unit   =SANE_UNIT_PERCENT;
	  pdesc->constraint_type =SANE_CONSTRAINT_RANGE;
	  pdesc->constraint.range=&rangeLumi;
	  pval->w       =SANE_FIX(0);
	  break;
	case optContrast:
	  pdesc->name   =SANE_NAME_CONTRAST;
	  pdesc->title  =SANE_TITLE_CONTRAST;
	  pdesc->desc   =SANE_DESC_CONTRAST;
	  pdesc->type   =SANE_TYPE_FIXED;
	  pdesc->unit   =SANE_UNIT_PERCENT;
	  pdesc->constraint_type =SANE_CONSTRAINT_RANGE;
	  pdesc->constraint.range=&rangeLumi;
	  pval->w       =SANE_FIX(0);
	  break;
	case optPreview:
	  pdesc->name   =SANE_NAME_PREVIEW;
	  pdesc->title  =SANE_TITLE_PREVIEW;
	  pdesc->desc   =SANE_DESC_PREVIEW;
	  pdesc->type   =SANE_TYPE_BOOL;
	  pval->w       =SANE_FALSE;
	  break;
	case optGrayPreview:
	  pdesc->name   =SANE_NAME_GRAY_PREVIEW;
	  pdesc->title  =SANE_TITLE_GRAY_PREVIEW;
	  pdesc->desc   =SANE_DESC_GRAY_PREVIEW;
	  pdesc->type   =SANE_TYPE_BOOL;
	  pval->w       =SANE_FALSE;
	  break;
	case optGroupGeometry:
	  pdesc->title="Geometry";
	  pdesc->desc ="";
	  pdesc->type = SANE_TYPE_GROUP;
	  pdesc->constraint_type=SANE_CONSTRAINT_NONE;
	  pdesc->cap  = SANE_CAP_ADVANCED;
	  break;
	case optTLX: case optTLY: case optBRX: case optBRY:
	  pdesc->name   =achNamesXY[iOpt-optTLX];
	  pdesc->title  =achTitlesXY[iOpt-optTLX];
	  pdesc->desc   =achDescXY[iOpt-optTLX];
	  pdesc->type   =SANE_TYPE_FIXED;
	  pdesc->unit   =SANE_UNIT_MM; /* arghh */
	  pdesc->constraint_type =SANE_CONSTRAINT_RANGE;
	  pdesc->constraint.range=aRangesXY[iOpt-optTLX];
	  pval->w       =SANE_FIX(afFullBed[iOpt-optTLX]);
	  break;
	case optGroupEnhancement:
	  pdesc->title="Enhancement";
	  pdesc->desc ="";
	  pdesc->type = SANE_TYPE_GROUP;
	  pdesc->constraint_type=SANE_CONSTRAINT_NONE;
	  pdesc->cap  = SANE_CAP_ADVANCED;
	  break;
	case optGammaGray:
	  pdesc->name     = SANE_NAME_GAMMA_VECTOR;
	  pdesc->title    = SANE_TITLE_GAMMA_VECTOR;
	  pdesc->desc     = SANE_DESC_GAMMA_VECTOR;
	  pdesc->type     = SANE_TYPE_INT;
	  pdesc->unit     = SANE_UNIT_NONE;
	  pdesc->size     = 4096*sizeof(SANE_Int);
	  pdesc->constraint_type = SANE_CONSTRAINT_RANGE;
	  pdesc->constraint.range = &rangeGamma;
	  pval->wa        = this->agammaGray;
	  break;
	case optGammaR:
	  pdesc->name     = SANE_NAME_GAMMA_VECTOR_R;
	  pdesc->title    = SANE_TITLE_GAMMA_VECTOR_R;
	  pdesc->desc     = SANE_DESC_GAMMA_VECTOR_R;
	  pdesc->type     = SANE_TYPE_INT;
	  pdesc->unit     = SANE_UNIT_NONE;
	  pdesc->size     = 4096*sizeof(SANE_Int);
	  pdesc->constraint_type = SANE_CONSTRAINT_RANGE;
	  pdesc->constraint.range = &rangeGamma;
	  pval->wa        = this->agammaR;
	  break;
	case optGammaG:
	  pdesc->name     = SANE_NAME_GAMMA_VECTOR_G;
	  pdesc->title    = SANE_TITLE_GAMMA_VECTOR_G;
	  pdesc->desc     = SANE_DESC_GAMMA_VECTOR_G;
	  pdesc->type     = SANE_TYPE_INT;
	  pdesc->unit     = SANE_UNIT_NONE;
	  pdesc->size     = 4096*sizeof(SANE_Int);
	  pdesc->constraint_type = SANE_CONSTRAINT_RANGE;
	  pdesc->constraint.range = &rangeGamma;
	  pval->wa        = this->agammaG;
	  break;
	case optGammaB:
	  pdesc->name     = SANE_NAME_GAMMA_VECTOR_B;
	  pdesc->title    = SANE_TITLE_GAMMA_VECTOR_B;
	  pdesc->desc     = SANE_DESC_GAMMA_VECTOR_B;
	  pdesc->type     = SANE_TYPE_INT;
	  pdesc->unit     = SANE_UNIT_NONE;
	  pdesc->size     = 4096*sizeof(SANE_Int);
	  pdesc->constraint_type = SANE_CONSTRAINT_RANGE;
	  pdesc->constraint.range = &rangeGamma;
	  pval->wa        = this->agammaB;
	  break;
	case optLast: /* not reached */
	  break;
	}
    }
  return SANE_STATUS_GOOD;
}

static SANE_Status
RegisterSaneDev (struct usb_device *pdevUSB, char *szName){
  TDevice * q;

  errno = 0;

  q = malloc (sizeof (*q));
  if (!q)
    return SANE_STATUS_NO_MEM;

  memset (q, 0, sizeof (*q)); /* clear every field */
  q->sane.name   = strdup (szName);
  q->sane.vendor = "Microtek";
  q->sane.model  = "ScanMaker 3600";
  q->sane.type   = "flatbed scanner";

  q->pdev=pdevUSB;

  ++num_devices;
  q->pNext = pdevFirst; /* link backwards */
  pdevFirst = q;

  return SANE_STATUS_GOOD;
}

SANE_Status
sane_init (SANE_Int *version_code, SANE_Auth_Callback authCB)
{
  struct usb_bus    *pbus;
  struct usb_device *pdev;
  int                iBus,rc;

  DBG_INIT();

  authCB++; /* compiler */

  if (version_code)
    *version_code = SANE_VERSION_CODE (V_MAJOR, V_MINOR, 0);

  DBG(DEBUG_VERBOSE,"SM3600 init\n");
  pdevFirst=NULL;

  usb_init();
  rc=usb_find_busses();
  if (rc)
    return SANE_STATUS_GOOD;
  usb_find_devices();
  if (!usb_busses) return SANE_STATUS_IO_ERROR;
  iBus=0;
  DBG(DEBUG_INFO,"starting bus scan\n");
  for (pbus = usb_busses; pbus; pbus = pbus->next)
    {
      int iDev=0;
      iBus++;
      /* 0.1.3b no longer has a "busnum" member */
      DBG(DEBUG_JUNK,"scanning bus %s\n", pbus->dirname);
      for (pdev=pbus->devices; pdev; pdev  = pdev->next)
	{
	  unsigned short *pidProduct;
	  iDev++;
	  DBG(DEBUG_JUNK,"found dev %04X/%04X\n",
		  pdev->descriptor.idVendor,
		  pdev->descriptor.idProduct);
	  /* the loop is not SO effective, but straight! */
	  for (pidProduct=aidProduct; *pidProduct; pidProduct++)
	      if (pdev->descriptor.idVendor  ==  SCANNER_VENDOR &&
		  pdev->descriptor.idProduct == *pidProduct)
		{
		  char ach[100];
		  sprintf(ach,"bus%d;dev%d",iBus,iDev);
		  RegisterSaneDev(pdev,ach);
		}
	}
    }
  return SANE_STATUS_GOOD;
}

void
sane_exit (void)
{
  TDevice   *dev, *pNext;

  /* free all bound resources and instances */
  while (pinstFirst)
    sane_close((SANE_Handle)pinstFirst); /* free all resources */
  
  /* free all device descriptors */
  for (dev = pdevFirst; dev; dev = pNext)
    {
      pNext = dev->pNext;
      free ((void *) dev->sane.name);
      free (dev);
    }
}

SANE_Status
sane_get_devices (const SANE_Device *** device_list,
		  SANE_Bool local_only)
{
  static const SANE_Device ** devlist = 0;
  TDevice *dev;
  int i;

  local_only = TRUE; /* Avoid compile warning */

  if (devlist)
    free (devlist);

  devlist = malloc ((num_devices + 1) * sizeof (devlist[0]));
  if (!devlist)
    return SANE_STATUS_NO_MEM;

  i = 0;
  for (dev = pdevFirst; i < num_devices; dev = dev->pNext)
    devlist[i++] = &dev->sane;
  devlist[i++] = 0;

  *device_list = devlist;
  return SANE_STATUS_GOOD;
}

SANE_Status
sane_open (SANE_String_Const devicename, SANE_Handle *handle)
{
  TDevice    *pdev;
  TInstance  *this;
  SANE_Status rc;
  DBG(DEBUG_VERBOSE,"opening %s\n",devicename);
  if (devicename[0]) /* selected */
    {
      for (pdev=pdevFirst; pdev; pdev=pdev->pNext)
	if (!strcmp(devicename,pdev->sane.name))
	  break;
      /* no dynamic post-registration */
    }
  else
    pdev=pdevFirst;
  if (!pdev)
      return SANE_STATUS_INVAL;
  this = (TInstance*) calloc(1,sizeof(TInstance));
  if (!this) return SANE_STATUS_NO_MEM;
  *handle = (SANE_Handle)this;
  
  this->pNext=pinstFirst; /* register open handle */
  pinstFirst=this;
  /* open and prepare USB scanner handle */
  this->hScanner=usb_open(pdev->pdev);
  if (!this->hScanner)
    return SetError(this,SANE_STATUS_IO_ERROR, "cannot open scanner device");
  rc=SANE_STATUS_GOOD;
  if (usb_claim_interface(this->hScanner, 0))
    return SetError(this,SANE_STATUS_IO_ERROR, "cannot claim IF");
  if (usb_set_configuration(this->hScanner, 1))
    return SetError(this,SANE_STATUS_IO_ERROR, "cannot set USB config 1");

  this->calibration.xMargin=200;
  this->calibration.yMargin=0x019D;
  this->calibration.nHoleGray=10;
  this->calibration.rgbBias=0x888884;
  this->calibration.nBarGray=0xC0;
  this->quality=fast;

  return InitOptions(this);
}

void
sane_close (SANE_Handle handle)
{
  TInstance *this,*pParent,*p;
  this=(TInstance*)handle;
  DBG(DEBUG_VERBOSE,"closing scanner\n");
  if (this->hScanner)
    {
      if (this->state.bScanning)
	EndScan(this);
      usb_close(this->hScanner);
      this->hScanner=NULL;
    }
  /* unlink active device entry */
  pParent=NULL;
  for (p=pinstFirst; p; p=p->pNext)
    {
      if (p==this) break;
      pParent=p;
    }
  
  if (!p)
    {
      DBG(1,"invalid handle in close()\n");
      return;
    }
  /* delete instance from instance list */
  if (pParent)
    pParent->pNext=this->pNext;
  else
    pinstFirst=this->pNext; /* NULL with last entry */
  /* free resources */
  if (this->szErrorReason)
    {
      DBG(DEBUG_VERBOSE,"Error status: %d, %s",
	  this->nErrorState, this->szErrorReason);
      free(this->szErrorReason);
    }
  free(this);
}

const SANE_Option_Descriptor *
sane_get_option_descriptor (SANE_Handle handle, SANE_Int iOpt)
{
  TInstance *this=(TInstance*)handle;
  if (iOpt<NUM_OPTIONS)
    return this->aoptDesc+iOpt;
  return NULL;
}

SANE_Status
sane_control_option (SANE_Handle handle, SANE_Int iOpt,
		     SANE_Action action, void *pVal, 
		     SANE_Int *pnInfo)
{
  SANE_Word   cap;
  SANE_Status rc;
  TInstance *this;
  this=(TInstance*)handle;
  rc=SANE_STATUS_GOOD;
  if (pnInfo)
    *pnInfo=0;

  if (this->state.bScanning)
    return SANE_STATUS_DEVICE_BUSY;
  if (iOpt>=NUM_OPTIONS)
    return SANE_STATUS_INVAL;

  cap=this->aoptDesc[iOpt].cap;
  
  switch (action)
    {

      /* ------------------------------------------------------------ */

    case SANE_ACTION_GET_VALUE:
      switch ((TOptionIndex)iOpt)
	{
	case optCount:
	case optPreview:
	case optGrayPreview:
	case optResolution:
	case optBrightness:
	case optContrast:
	case optTLX: case optTLY: case optBRX: case optBRY:
	  *(SANE_Word*)pVal = this->aoptVal[iOpt].w;
	  break;
	case optMode:
	  strcpy(pVal,this->aoptVal[iOpt].s);
	  break;
	case optGammaGray:
	case optGammaR:
	case optGammaG:
	case optGammaB:
	  DBG(DEBUG_INFO,"getting gamma\n");
	  memcpy(pVal,this->aoptVal[iOpt].wa, this->aoptDesc[iOpt].size);
	  break;
	default:
	  return SANE_STATUS_INVAL;
	}
      break;

      /* ------------------------------------------------------------ */

    case SANE_ACTION_SET_VALUE:
      if (!SANE_OPTION_IS_SETTABLE(cap))
	return SANE_STATUS_INVAL;
      rc=sanei_constrain_value(this->aoptDesc+iOpt,pVal,pnInfo);
      if (rc!=SANE_STATUS_GOOD)
	return rc;
      switch ((TOptionIndex)iOpt)
	{
	case optResolution:
	case optTLX: case optTLY: case optBRX: case optBRY:
	  if (pnInfo) (*pnInfo) |= SANE_INFO_RELOAD_PARAMS;
	  /* fall through side effect free */
	case optBrightness:
	case optContrast:
	case optPreview:
	case optGrayPreview:
	  this->aoptVal[iOpt].w = *(SANE_Word*)pVal;
	  break;
	case optMode:
	  if (pnInfo)
	    (*pnInfo) |= SANE_INFO_RELOAD_PARAMS
	      | SANE_INFO_RELOAD_OPTIONS;
	  strcpy(this->aoptVal[iOpt].s,pVal);
	  break;
	case optGammaGray:
	case optGammaR:	case optGammaG:	case optGammaB:
	  DBG(DEBUG_INFO,"setting gamma #%d\n",iOpt);
	  memcpy(this->aoptVal[iOpt].wa, pVal, this->aoptDesc[iOpt].size);
	  break;
	default:
	  return SANE_STATUS_INVAL;
	}
      break;
    case SANE_ACTION_SET_AUTO:
      return SANE_STATUS_UNSUPPORTED;
    } /* switch action */
  return rc; /* normally GOOD */
}

static SANE_Status
SetupInternalParameters(TInstance *this)
{
  int         i;
  this->param.res=(int)this->aoptVal[optResolution].w;
  this->param.nBrightness=(int)(this->aoptVal[optBrightness].w>>SANE_FIXED_SCALE_SHIFT);
  this->param.nContrast=(int)(this->aoptVal[optContrast].w>>SANE_FIXED_SCALE_SHIFT);
  this->param.x=(int)(SANE_UNFIX(this->aoptVal[optTLX].w)*1200.0/25.4);
  this->param.y=(int)(SANE_UNFIX(this->aoptVal[optTLY].w)*1200.0/25.4);
  this->param.cx=(int)(SANE_UNFIX(this->aoptVal[optBRX].w-this->aoptVal[optTLX].w)*1200.0/25.4)+1;
  this->param.cy=(int)(SANE_UNFIX(this->aoptVal[optBRY].w-this->aoptVal[optTLY].w)*1200.0/25.4)+1;
  for (i=0; aScanModes[i]; i++)
    if (!strcasecmp(this->aoptVal[optMode].s,aScanModes[i]))
      {
	this->mode=(TMode)i;
	break;
      }
  DBG(DEBUG_INFO,"mode=%d, res=%d, BC=[%d,%d], xywh=[%d,%d,%d,%d]\n",
      this->mode, this->param.res,
      this->param.nBrightness, this->param.nContrast,
      this->param.x,this->param.y,this->param.cx,this->param.cy);
  return SANE_STATUS_GOOD;
}

SANE_Status
sane_get_parameters (SANE_Handle handle, SANE_Parameters *p)
{
  /* extremly important for xscanimage */
  TInstance *this;
  this=(TInstance*)handle;
  SetupInternalParameters(this);
  GetAreaSize(this);
  p->pixels_per_line=this->state.cxPixel;
  /* TODO: we need a more stable cyPixel prediction */
  p->lines=this->state.cyPixel+1;
  p->last_frame=SANE_TRUE;
  switch (this->mode)
    {
    case color:
      p->format=SANE_FRAME_RGB;
      p->depth=8;
      p->bytes_per_line=p->pixels_per_line*3;
      break;
    case gray:
      p->format=SANE_FRAME_GRAY;
      p->depth=8;
      p->bytes_per_line=p->pixels_per_line;
      break;
    case halftone:
    case line:
      p->format=SANE_FRAME_GRAY;
      p->depth=1;
      p->bytes_per_line=(p->pixels_per_line+7)/8;
      break;
    }      
  DBG(DEBUG_INFO,"getting parameters (%d,%d)...\n",p->bytes_per_line,p->lines);
  return SANE_STATUS_GOOD;
}

SANE_Status
sane_start (SANE_Handle handle)
{
  TInstance    *this;
  SANE_Status   rc;
  this=(TInstance*)handle;
  DBG(DEBUG_VERBOSE,"starting scan...\n");
  if (this->state.bScanning) return SANE_STATUS_DEVICE_BUSY;
  rc=SetupInternalParameters(this);
  this->state.bCanceled=false;
  if (!rc) rc=DoOriginate(this);
  if (!rc) rc=DoJog(this,this->calibration.yMargin);
  if (rc) return rc;
  this->state.bEOF=false;
  switch (this->mode)
    {
    case color: rc=StartScanColor(this); break;
    default:    rc=StartScanGray(this); break;
    }
  if (this->state.bCanceled) return SANE_STATUS_CANCELLED;
  return rc;
}

SANE_Status
sane_read (SANE_Handle handle, SANE_Byte *puchBuffer,
	   SANE_Int cchMax,
	   SANE_Int *pcchRead)
{
  SANE_Status    rc;
  TInstance     *this;
  this=(TInstance*)handle;
  DBG(DEBUG_INFO,"reading chunk %d...\n",(int)cchMax);
  *pcchRead=0;
  if (this->state.bEOF)
    return SANE_STATUS_EOF;
  rc=ReadChunk(this,puchBuffer,cchMax,pcchRead);
  DBG(DEBUG_INFO,"... line %d (%d/%d)...\n",this->state.iLine,*pcchRead,rc);
  switch (rc)
    {
    case SANE_STATUS_EOF:
      this->state.bEOF=true; /* flag EOF on next read() */
      rc=SANE_STATUS_GOOD;   /* we do not flag THIS block! */
      break;
    case SANE_STATUS_GOOD:
      if (!*pcchRead) rc=SANE_STATUS_EOF;
      break;
    default:
      break;
    }
  return rc;
}

void
sane_cancel (SANE_Handle handle)
{
  TInstance *this;
  this=(TInstance*)handle;
  DBG(DEBUG_VERBOSE,"cancel called...\n");
  if (this->state.bScanning)
    {
      this->state.bCanceled=true;
      if (this->state.bEOF) /* regular (fast) cancel */
	{
	  DBG(DEBUG_INFO,"regular end cancel\n");
	  EndScan(this);
	  DoJog(this,-this->calibration.yMargin);
	}
      else
	{
	  /* since Xsane does not continue scanning,
	     we cannot defer cancellation */
	  DBG(DEBUG_INFO,"hard cancel called...\n");
	  CancelScan(this);
	}
    }
}

SANE_Status
sane_set_io_mode(SANE_Handle h, SANE_Bool m)
{
  h++;
  if (m==SANE_TRUE) /* no non-blocking-mode */
    return SANE_STATUS_UNSUPPORTED;
  return SANE_STATUS_GOOD;
}

SANE_Status
sane_get_select_fd(SANE_Handle handle, SANE_Int *fd)
{
  handle++; fd++;
  return SANE_STATUS_UNSUPPORTED; /* we have no file IO */
}
