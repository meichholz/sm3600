#!/bin/sh
NAME=$1
if [ -z "$NAME" ] ; then
  echo "usage: mktrans SNOOPYNAME"
  exit 1
fi

mount /dos/c
cp /dos/c/temp/$NAME.log data/logs || exit 1
squeezelog.pl -fc < data/logs/$NAME.log >data/$NAME.c
squeezelog.pl -fr < data/logs/$NAME.log >data/$NAME.txt
umount /dos/c


