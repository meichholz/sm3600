# $Id: mkdist.sh,v 1.2 2001/03/24 17:02:48 eichholz Exp $
NAME=$1 ; cd .. ; tar cfpzv \
	$NAME.tar.gz \
	--exclude=glenn_ramsey \
	--exclude=logs --exclude=CVS \
	$NAME

WWW="/home/marian/www/export/en/sm3600"

cp $NAME.tar.gz $WWW
cp $NAME/README.HISTORY $WWW
