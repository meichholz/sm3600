#ifndef _H_ME_USB
#define _H_ME_USB

#include <usb.h>

#define USB_DIR_IN        0x80
#define USB_DIR_OUT       0x00

#ifdef USB_MISSING_PROTOTYPES

/* missing declarations from USB lib */

int usb_find_devices_on_bus(struct usb_bus *bus);
void usb_find_devices(void);
int usb_find_busses(void);
void usb_set_debug(int level);

#else

#define USB_OK 0

#endif

#endif