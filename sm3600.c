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

#include "sm3600.h"

unsigned long ulDebugMask;

int num_devices;
static SM3600_Device  *first_dev;
static SM3600_Scanner *first_handle;


/* ====================================================================== */

static SANE_Status
RegisterSaneDev (const char *devname, SM3600_Device **devp)
{
  SM3600_Device * q;

  errno = 0;

  q = malloc (sizeof (*q));
  if (!q)
    return SANE_STATUS_NO_MEM;

  memset (q, 0, sizeof (*q));

  q->sane.name   = strdup (devname);
  q->sane.vendor = "Microtek";
  q->sane.model  = "ScanMaker 3600";
  q->sane.type   = "flatbed scanner";

  ++num_devices;
  q->next = first_dev;
  first_dev = q;


  if (devp)
    *devp = q;
  return SANE_STATUS_GOOD;

  free (q);
  return SANE_STATUS_INVAL;
}

SANE_Status sane_init (SANE_Int *version_code, SANE_Auth_Callback authorize)
{
  DBG_INIT();

  if (version_code)
    *version_code = SANE_VERSION_CODE (V_MAJOR, V_MINOR, 0);

  DBG(1,"init() called\n");
  first_dev=NULL;
  first_handle=NULL; /* dunno, why we need it at all */
  RegisterSaneDev("/proc/usb/001/002",0);

#ifdef READ_V4L_CODE
  char dev_name[PATH_MAX], * str;
  size_t len;
  FILE *fp;

  fp = sanei_config_open (SM3600_CONFIG_FILE);
  if (!fp)
    {
      DBG(1, "sane_init: file `%s' not accessible\n", SM3600_CONFIG_FILE);
      return SANE_STATUS_INVAL;
    }

  while (sanei_config_read(dev_name, sizeof (dev_name), fp))
    {
      if (dev_name[0] == '#')           /* ignore line comments */
        continue;
      len = strlen (dev_name);

      if (!len)
        continue;                       /* ignore empty lines */

      /* Remove trailing space and trailing comments */
      for (str = dev_name; *str && !isspace (*str) && *str != '#'; ++str);
      *str = '\0';
      v4ldev = open ( dev_name,O_RDWR);
      if (-1 != v4ldev)
        {
          if (-1 != ioctl(v4ldev,VIDIOCGCAP,&capability))
            {
              DBG(1, "sane_init: found videodev on `%s'\n", dev_name);
              attach (dev_name, 0);
            }
          else
            DBG(1, "sane_init: ioctl(%d,VIDIOCGCAP,..) failed on `%s'\n",
                v4ldev, dev_name);
          close (v4ldev);
        }
      else
        DBG(1, "sane_init: failed to open device `%s'\n", dev_name);
    }
  fclose (fp);
#endif

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
  return SANE_STATUS_GOOD;
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

