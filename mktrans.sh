#!/bin/sh
NAME=$1
if [ -z "$NAME" ] ; then
  echo "usage: mktrans SNOOPYNAME"
  exit 1
fi

mount /dos/c
cp /dos/c/temp/$NAME.log ../logs || exit 1
squeezelog.pl -fc < ../microtek3600-logs/$NAME.log >data/$NAME.c
squeezelog.pl -fr < ../microtek3600-logs/$NAME.log >data/$NAME.txt
umount /dos/c


