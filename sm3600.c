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

#include <sane/sane.h>

#ifndef BACKEND_NAME
#define BACKEND_NAME sm3600
#endif

#include <sane/config.h>

#include "sane/sanei_backend.h"

#ifndef PATH_MAX
# define PATH_MAX       1024
#endif

#include "sane/sanei_config.h"
#define SM3600_CONFIG_FILE "sm3600.conf"

/* prevent inclusion of scantool.h */
#define SCANTOOL_H

#include "sm3600.h"

unsigned long ulDebugMask;

int num_devices;
static SM3600_Device  *first_dev;

/* ====================================================================== */

#include "sm3600/scanutil.c"
#include "sm3600/scanusb.c"
#include "sm3600/scanmtek.c"
#include "sm3600/homerun.c"
#include "sm3600/gray.c"
#include "sm3600/color.c"

/* ====================================================================== */

static SANE_Status
RegisterSaneDev (struct usb_device *pdevUSB, int nBus, int nDev)
{
  SM3600_Device * q;
  char ach[100];

  errno = 0;

  q = malloc (sizeof (*q));
  if (!q)
    return SANE_STATUS_NO_MEM;

  memset (q, 0, sizeof (*q)); /* clear every field */
  sprintf(ach,"bus %d, dev %d",nBus,nDev);
  q->sane.name   = strdup (ach);
  q->sane.vendor = "Microtek";
  q->sane.model  = "ScanMaker 3600";
  q->sane.type   = "flatbed scanner";

  q->pdev=pdevUSB;

  ++num_devices;
  q->next = first_dev; /* link backwards */
  first_dev = q;

  return SANE_STATUS_GOOD;
}

SANE_Status
sane_init (SANE_Int *version_code, SANE_Auth_Callback authCB)
{
  struct usb_bus    *pbus;
  struct usb_device *pdev;
  int                iBus;

  DBG_INIT();

  authCB++; /* compiler */

  if (version_code)
    *version_code = SANE_VERSION_CODE (V_MAJOR, V_MINOR, 0);

  DBG(1,"SM3600 init\n");
  first_dev=NULL;

  if (usb_find_busses())
    return SANE_STATUS_GOOD;
  usb_find_devices();
  if (!usb_busses) return SANE_STATUS_IO_ERROR;
  iBus=0;
  for (pbus = usb_busses; pbus; pbus = pbus->next)
    {
      int iDev=0;
      iBus++;
      /* 0.1.3b no longer has a "busnum" member */
      DBG(3,"scanning bus %s\n", pbus->dirname);
      for (pdev=pbus->devices; pdev; pdev  = pdev->next)
	{
	  unsigned short *pidProduct;
	  iDev++;
	  DBG(3,"found dev %04X/%04X\n",
		  pdev->descriptor.idVendor,
		  pdev->descriptor.idProduct);
	  /* the loop is not SO effective, but straight! */
	  for (pidProduct=aidProduct; *pidProduct; pidProduct++)
	      if (pdev->descriptor.idVendor  ==  SCANNER_VENDOR &&
		  pdev->descriptor.idProduct == *pidProduct)
		RegisterSaneDev(pdev,iBus,iDev);
	}
    }
  return SANE_STATUS_GOOD;
}

void
sane_exit (void)
{
  SM3600_Device *dev, *next;

  for (dev = first_dev; dev; dev = next)
    {
      next = dev->next;
      free ((void *) dev->sane.name);
      free (dev->pdev);
      free (dev);
    }
}

SANE_Status sane_get_devices (const SANE_Device *** device_list,
			      SANE_Bool local_only)
{
  static const SANE_Device ** devlist = 0;
  SM3600_Device *dev;
  int i;

  local_only = TRUE; /* Avoid compile warning */

  if (devlist)
    free (devlist);

  devlist = malloc ((num_devices + 1) * sizeof (devlist[0]));
  if (!devlist)
    return SANE_STATUS_NO_MEM;

  i = 0;
  for (dev = first_dev; i < num_devices; dev = dev->next)
    devlist[i++] = &dev->sane;
  devlist[i++] = 0;

  *device_list = devlist;
  return SANE_STATUS_GOOD;
}

SANE_Status sane_open (SANE_String_Const devicename, SANE_Handle *handle)
{
  return SANE_STATUS_GOOD;
}

void sane_close (SANE_Handle handle)
{
}

const SANE_Option_Descriptor *
sane_get_option_descriptor (SANE_Handle handle, SANE_Int option)
{
  return NULL;
}

SANE_Status sane_control_option (SANE_Handle handle, SANE_Int option,
				 SANE_Action action, void *val, SANE_Int *info)
{
  return SANE_STATUS_GOOD;
}

SANE_Status sane_get_parameters (SANE_Handle handle, SANE_Parameters *params)
{
  return SANE_STATUS_GOOD;
}

SANE_Status sane_start (SANE_Handle handle)
{
  return SANE_STATUS_GOOD;
}

SANE_Status sane_read (SANE_Handle handle, SANE_Byte *buf, SANE_Int max_len,
		       SANE_Int *lenp)
{
  return SANE_STATUS_GOOD;
}

void sane_cancel (SANE_Handle handle)
{
}

