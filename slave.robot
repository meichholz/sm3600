# $Id: slave.robot,v 1.1 2001/03/23 21:58:30 eichholz Exp $

interface 0
config 1
encoding hex
decoding hex

transfer timeout=10000 dir=in type=control request=0 value=0x46 requesttype=0xc0 size=1


quit
