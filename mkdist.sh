# $Id: mkdist.sh,v 1.5 2001/09/30 19:44:27 eichholz Exp $
NAME=$1 ; cd .. ; tar cfpzv \
	$NAME.tar.gz \
	--exclude=glenn_ramsey \
	--exclude=logs --exclude=CVS \
	$NAME

WWW="/home/marian/www/export/bugslayer.de/sm3600"

cp $NAME.tar.gz $WWW
cp $NAME/NEWS $WWW
