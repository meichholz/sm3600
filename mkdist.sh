# $Id: mkdist.sh,v 1.1 2001/03/23 21:58:23 eichholz Exp $
NAME=$1 ; cd .. ; tar cfpzv \
	$NAME.tar.gz \
	--exclude=glenn_ramsey \
	--exclude=logs \
	$NAME

WWW="/home/marian/www/export/en/sm3600"

cp $NAME.tar.gz $WWW
cp $NAME/README.HISTORY $WWW
