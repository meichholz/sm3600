# $Id: mkdist.sh,v 1.4 2001/07/30 07:48:11 eichholz Exp $
NAME=$1 ; cd .. ; tar cfpzv \
	$NAME.tar.gz \
	--exclude=glenn_ramsey \
	--exclude=logs --exclude=CVS \
	$NAME

WWW="/home/marian/www/export/bugslayer.de/sm3600"

cp $NAME.tar.gz $WWW
cp $NAME/README.CHANGELOG $WWW
