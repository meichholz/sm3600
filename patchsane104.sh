#!/bin/bash
SM3600DEV=$1
SANE104=$2
if [ ! -d $SANE104 ] ;then
    echo "sane version 1.0.4 backend directory: $SANE104 doesn't exist"
    exit 1
fi
if [ ! -d $SM3600DEV ] ;then
    echo "sm3600 dev directory: $SANE104 doesn't exist"
    exit 1
fi
echo Making 
ln -sv $SM3600DEV/sm3600.* $SANE104/backend/
ln -sv $SM3600DEV/*.man $SANE104/doc/
for i in scantool.h color.c homerun.c scanutil.c gray.c scanmtek.c scanusb.c
  do
    ln -sv $SM3600DEV/sm3600-$i $SANE104/backend/sm3600-$i
  done

CURRDIR=`pwd`
cd $SANE104

cat $SM3600DEV/sane-backends-1.0.4.cfg.diff | patch -p1

cd $CURRDIR

#In <backend/Makefile.in> include the "sm3600" module to
#PRELOADABLE_BACKENDS, and make comments to every unneeded module to
#speed up things.

#Don't forget to include "-lusb" to the BACKENDLIBS.
#I have no idea yet how to to this with "configure".

#Integrate dependency for "sanei_constraint_value.lo" into Makefile.in.

#Reconfigure everything after You modified the Makefile.in.

#Include an "sm3600" line to the dll.conf in the source code. This is
#necessary, because normally there are only the preloaded modules
#available.
