#
# initbus.sh (24.3.2001)
#
# Sets the USBLIB device to the current user, if she is not Ruth.
# (C) Marian Eichholz

USER=`whoami`

test "$USER" = root && exit

ssh -l root localhost chown -R $USER /proc/bus/usb/001	
