Some hints from Glenn Ramsey <glennr@es.co.nz>
==============================================

#transfer type=control dir=in request=0 value=46 size=1
#doing control message id 3 from device, size 1, timeout 10000
frames, 41:0:2e:0
#usb error: problem doing control msg
#ERROR: id=3
#transfer type=control dir=in request=0 value=0x46 size=0x1
#doing control message id 4 from device, size 1, timeout 10000
frames, 41:0:46:0
#usb error: problem doing control msg
#ERROR: id=4
#transfer type=control dir=in request=0x0 value=0x46 size=0x1
requesttype=0xc0
#doing control message id 5 from device, size 1, timeout 10000
frames, c0:0:46:0
#DATA: id=5 length=1
#0000: 68
#OK: id=5

Here you can see that I got it wrong the first couple of times, it
seems that you need to supply the requesttype field.  If you look
at the usbsnoopy trace this is the first value in the SetupPacket
field, so from the usb 1.1 spec p. 183, c0 means transfer dir is
device to host (bit 7 set) and transfer type is vendor (bit 6
set).
 