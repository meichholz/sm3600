# $Id: mkdist.sh,v 1.3 2001/04/01 17:01:18 eichholz Exp $
NAME=$1 ; cd .. ; tar cfpzv \
	$NAME.tar.gz \
	--exclude=glenn_ramsey \
	--exclude=logs --exclude=CVS \
	$NAME

WWW="/home/marian/www/export/en/sm3600"

cp $NAME.tar.gz $WWW
cp $NAME/README.CHANGELOG $WWW
