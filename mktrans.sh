#!/bin/sh
NAME=$1
if [ -z "$NAME" ] ; then
  echo "usage: mktrans SNOOPYNAME"
  exit 1
fi

LOGS=../microtek3600-logs
DOS=/dos/c

mount $DOS
cp $DOS/temp/$NAME.log  $LOGS || exit 1
squeezelog.pl -fc < $LOGS/$NAME.log >data/$NAME.c
squeezelog.pl -fr < $LOGS/$NAME.log >data/$NAME.txt
umount $DOS



