# $Id: Makefile,v 1.2 2001/03/24 01:19:44 eichholz Exp $
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

BINARIES=	dirty scantool

SCANTOOL_MODS=	scantool.o scanvars.o scanusb.o scanmtek.o scanutil.o
SCANTOOL_H=	scantool.h

default: test

.c.o :
	@echo "compiling $* "
	@$(CC) $(CCFLAGS) -c $*.c -o $*.o

bin:	$(BINARIES)

all:	bin

initbus:
	ssh -l root localhost chown -R marian /proc/bus/usb/001	

test:	scantool initbus
	./scantool -i -d 1 temp.out
#	./scantool -v -d 1 temp.out

testscan: scantool initbus
	./scantool -v -d 1 /tmp/scan.pnm
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
	rm -rf data/*~ temp.* *.o *~ t $(BINARIES) DEADJOE || true
