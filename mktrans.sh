#!/bin/sh
#
# ======================================================================
#
# mktrans.sh
#
# q+d analysis driver, that walks over snoopy-logs in /dos/c/temp, incorporates
# them to our log and data directories, translates them to C code,
# and picks the interesting register transfers (the scan request) from
# the transscription
#
# (C) 3/2001 Marian Eichholz
#
# ======================================================================


NAMES=$1
if [ -z "$NAMES" ] ; then
  echo "usage: mktrans [SNOOPYNAME|"*"]"
  exit 1
fi

LOGS=../microtek3600-logs
DOS=/dos/c

mount $DOS

if [ "$NAMES" = "*" ]; then
  NAMES=""
  for NAME in $DOS/temp/*.log ; do
    NAME=`basename $NAME .log`
    test -r $DOS/temp/$NAME.log && NAMES="$NAMES $NAME"
  done
fi

for NAME in $NAMES ; do
  if [ -r $DOS/temp/$NAME.log ]; then
        echo "$NAME..."
	cp $DOS/temp/$NAME.log  $LOGS || exit 1
	squeezelog.pl -fc < $LOGS/$NAME.log >data/$NAME.c
	squeezelog.pl -fr < $LOGS/$NAME.log >data/$NAME.txt
        dumpscanctl.pl < data/$NAME.txt > data/ctlblocks/$NAME.txt
        dumpscanctl.pl < data/$NAME.c > data/ctlblocks/$NAME.c
  fi
done

umount $DOS



