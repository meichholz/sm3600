# $Id: Makefile,v 1.13 2001/04/01 17:01:18 eichholz Exp $
#
# -------------------------------------------------------------------
#
# 16.02.2001
#
# -------------------------------------------------------------------

NAME=		microtek3600

USBDIR=		/usr/local

# mit -pedantic warnt eine Include-Datei!
CCFLAGS=	-g -DPROG_NAME=\"$*\" -I $(USBDIR)/include \
		-fno-common -Wall -O2
LDFLAGS=	-g -L$(USBDIR)/lib
LIBS=		-lusb

CC=		gcc

BINARIES=	scantool

SCANTOOL_MODS=	scantool.o gray.o color.o homerun.o \
		scanvars.o scanusb.o scanmtek.o scanutil.o
SCANTOOL_H=	scantool.h

default: test

.c.o :
	@echo "compiling $* "
	@$(CC) $(CCFLAGS) -c $*.c -o $*.o

bin:	$(BINARIES)

all:	bin

initbus:
	sh initbus.sh

test:	scantool initbus
	./scantool -i -d 5 temp.out

testscan: scantool initbus
	./scantool -d 1 -v -m color -b 30 -c 40 /tmp/scan.pnm 200 000 000 3610 5400
#	./scantool -d 1 -v -m gray -b 20 -c -50 /tmp/scan.pnm 100 000 000 4800 5400
#	./scantool -d 1 -v -m line -b 30 /tmp/scan.pnm 200 000 000 3600 4800
#	./scantool -d 1 -v -m halftone /tmp/scan.pnm 300 000 000 3600 4800
	xv /tmp/scan.pnm

testraw: scantool initbus
	echo >/tmp/scan.pnm
	echo -e "P5\n200 150\n255" >/tmp/scan.pnm
	./scantool -v -m g -d 1 -d r /tmp/scan.pnm 75 600 300 2400 2400
	xv /tmp/scan.pnm

dist:	clean
	sh mkdist.sh $(NAME)

$(SCANTOOL_MODS) : $(SCANTOOL_H)

scantool:	$(SCANTOOL_MODS)
	@echo "linking $< "
	@$(CC) $(LDFLAGS) -o $@ $(SCANTOOL_MODS) $(LIBS)

dirty:		dirty.o
	@echo
	@echo "linking $< "
# erst die O-Files, dann die Bubitheken
	@$(CC) $(LDFLAGS) -o $@ $@.o $(LIBS)

checkin:	clean
#		docheckin -i
#		cvs noidea...
		make dist



getif:
	ssh -l root localhost chown -R marian /proc/bus/usb/001

# FU! "strich" has a hole in the snoopy-log...

nov:
	squeezelog.pl -fc -m 1 < data/logs/november.log >data/nov.c

human:
	squeezelog.pl -fp 134 -n 2788 < data/logs/strichinit.log >data/strich.scanlog

line:
	squeezelog.pl -fr -m 134 -n 2788 < data/logs/strichinit.log >temp.robot

line-c:
	squeezelog.pl -fc -m 134 < data/logs/strichinit.log >data/line.c
	less data/line.c

robot:
	usb-robot-slave product=0x40B3 vendor=0x05DA < temp.robot


clean:
	rm -rf data/*~ data/ctlblocks/*~ temp.* *.o *~ t $(BINARIES) DEADJOE || true

distclean: clean
	rm Makefile || true

