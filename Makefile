# $Id: Makefile,v 1.16 2001/10/25 20:02:31 eichholz Exp $
#
# -------------------------------------------------------------------
#
# 16.02.2001
#
# DO NOT EDIT DIRECTLY! Edit Makefile.in
#
# -------------------------------------------------------------------

NAME=		sm3600

USBDIR=		/usr/local

SANE_SRC=	/packin/sane-backends-1.0.4
SANE_CVS=       /packin/sane/sane-backends

SANE_INCLUDE=	$(SANE_SRC)/include
SANE_LIBDIR=	/usr/lib/sane
SANE_CONFDIR=	/etc/sane.d
SANE_EXECDIR=	$(SANE_LIBDIR)
SANE_LIBS=	-lm -ldl
SANE_STUB=	$(SANE_SRC)/backend/stubs.c

V_MAJOR=	1
V_MINOR=	0
V_REV=		4

# mit -pedantic warnt eine Include-Datei!
CCFLAGS=	-g -DPROG_NAME=\"$*\" -I $(USBDIR)/include -I $(SANE_INCLUDE) \
		-fno-common -Wall -O2 -DG4TOOL
LDFLAGS=	-g -L$(USBDIR)/lib -L$(SANE_LIBDIR)
LIBS=		-lusb 

CC=		gcc
COMPILE=	$(CC) -c $(CCFLAGS) 
LIBTOOL= 	/usr/bin/libtool

# ======================================================================

BINARIES=	scantool

G4TOOL_MODS=	g4compat.o g4tiff.o g4encode.o g4tables.o pcl.o

SCANTOOL_MODS=  scantool.o scanvars.o \
		$(G4TOOL_MODS) \
		sm3600-scanutil.o sm3600-gray.o sm3600-color.o \
		sm3600-homerun.o sm3600-scanusb.o sm3600-scanmtek.o
SCANTOOL_H=	sm3600.h sm3600-scantool.h

# ======================================================================

default: testscan

.c.o :
	@echo "compiling $* "
	@$(CC) $(CCFLAGS) -DSUPPORT_GAMMA -DINSANE_VERSION -c $*.c -o $*.o

bin:	$(BINARIES)

$(SCANTOOL_MODS) : $(SCANTOOL_H)

$(G4TOOL_MODS)   : g4.h

all:	bin

# ======================================================================

test:	scantool initbus
	./scantool -v -i -d 5 temp.out

testscan: scantool initbus
#	./scantool -d 25 -v -m color /tmp/scan.pnm 600 000 000 3600 1400
#	./scantool -d 1 -v -m gray /tmp/scan.pnm 200 300 300 3620 1200
	./scantool -d 64 -v -m gray /tmp/scan.pnm 200 000 300 10200 1200
#	./scantool -d 64 -v -m color /tmp/scan.pnm 200 000 300 10200 300
#	./scantool -d 1 -v -m line -b 30 /tmp/scan.pnm 200 000 000 3600 4800
#	./scantool -d 1 -v -m halftone -b 30 -c 50 /tmp/scan.pnm 300 000 000 3600 4800
	xv /tmp/scan.pnm

testraw: scantool initbus
	echo >/tmp/scan.pnm
	echo -e "P5\n200 150\n255" >/tmp/scan.pnm
	./scantool -v -m g -d 1 -d r /tmp/scan.pnm 75 600 300 2400 2400
	xv /tmp/scan.pnm

uncalibrated: scantool initbus
	./scantool -O -m gray /tmp/scan.pnm 100 0 0 10600 3600 
	ee /tmp/scan.pnm

dist:	clean
	sh mkdist.sh microtek3600

sane:
	cp sm3600-*.c sm3600-*.h sm3600.c sm3600.h $(SANE_CVS)/backend
	cp sane-sm3600.man $(SANE_CVS)/doc

sane104:
	ssh -l root localhost make -C $(SANE_SRC)/backend
	ssh -l root localhost make -C $(SANE_SRC)/backend install >/dev/null

sanetest:
	export SANE_DEBUG_SM3600=1 ; scanimage -L


# ======================================================================

# insane SANE stuff

sanemod: libsane-$(NAME).la

libsane-$(NAME).la : $(NAME).lo $(NAME)-s.lo
	$(LIBTOOL) --mode=link $(CC) -export-dynamic -o $@ $($*_LIBS) \
	$(LDFLAGS) $(SANE_LIBS) $^ \
	-rpath $(SANE_EXECDIR) \
	-version-info $(V_MAJOR):$(V_REV):$(V_MINOR)

$(NAME)-s.lo : $(NAME)-s.c
	$(LIBTOOL) --mode=compile $(COMPILE) -DSTUBS -DBACKEND_NAME=$* $<

$(NAME).lo: $(NAME).c
	$(LIBTOOL) --mode=compile $(COMPILE) -DBACKEND_NAME=$* \
	-DV_MAJOR=$(V_MAJOR) -DV_MINOR=$(V_MINOR) -DV_REV=$(V_REV) \
	-DLIBDIR=$(SANE_LIB) $<

$(NAME)-s.c: $(SANE_STUB)
	rm -f $@
	ln -s $(SANE_STUB) $@

libsane-$(NAME).so : libsane-$(NAME).la
	$(LIBTOOL) --mode=install install \
	libsane-$(NAME).la \
	$(SANE_EXECDIR)/libsane-$(NAME).so

install-sane: libsane-$(NAME).la libsane-$(NAME).so
	install $(NAME).conf $(SANE_CONFDIR)

.PRECIOUS: %-s.c %-s.lo %.lo dll-preload.c

# ======================================================================

$(SCANTOOL_MODS) : $(SCANTOOL_H)

scantool:	$(SCANTOOL_MODS)
	@echo "linking $< "
	@$(CC) $(LDFLAGS) -o $@ $(SCANTOOL_MODS) $(LIBS)

# ======================================================================

dirty:		dirty.o
	@echo
	@echo "linking $< "
# erst die O-Files, dann die Bubitheken
	@$(CC) $(LDFLAGS) -o $@ $@.o $(LIBS)


# ======================================================================

checkin:	clean
#		docheckin -i
#		cvs noidea...
		make dist

initbus:
	@sh initbus.sh

copy:	initbus scantool
	@scantool -p copy -c 32 -m l - 300 \
	cat /tmp/scan.pnm | pnmtops -dpi 300 -center \
		-scale 0.25 -width 8.26 -height 11.6 | \
	lpr

copyg:	initbus scantool
	@scantool -p copy -c 32 -m g - 300 \
	cat /tmp/scan.pnm | pnmtops -dpi 300 -center \
		-scale 0.25 -width 8.26 -height 11.6 | \
	lpr

fax:	initbus scantool
	@scantool -O -p fax -m h - | \
	pnmtops -dpi 200 -center -scale 0.25 -width 8.26 -height 11.6 \
	> ~/data/faxout/new.ps


install: install-sane

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
	rm -rf data/*~ data/ctlblocks/*~ temp.* .libs initbus \
	*.lo *.la dll-preload.c *-s.c *.so *.o *~ t $(BINARIES) \
	DEADJOE || true

distclean: clean
	rm Makefile || true

