#!/bin/sh

# ======================================================================
# scancopy application for fast ad-hoc-copy jobs
# suitable for a HP 1200. Everything else will need tweaking of scantool
# and/or this script
#
# (C) Marian Eichholz 2002
# ======================================================================

RESO=600

while [ -n "$1" ]; do
  case "$1" in
    -c|-fast) RESO=300 ;;
    -v) VERBOSE="$1" ;;
    --debug) VERBOSE="-v" ; DEBUG="$2" ; shift ;;
    -h*) cat <<EOF
usage: scancopy [-c] [-v] [-debug MODE] [-h]
EOF
    exit 0
    ;;
    *) echo "fatal: unknown option $1" ; exit 1 ;;
  esac
  shift
done

SCANBASE="scantool $VERBOSE -p c"

(
echo -e -n '\033%-12345X'	# UEL
echo -e -n '\033E'	        # Reset
echo -e -n '\033&l26A'		# A4-Paper
echo -e -n '\033&a0L'		# left margin 0 col
echo -e -n '\033&l0E'		# top margin 0 lines
echo -e -n '\033&l0O'		# portrait

case "$DEBUG" in
  save) $SCANBASE /tmp/scancopy.pcl $RESO ;;
  load) cat /tmp/scancopy.pcl ;;
  *)    $SCANBASE - $RESO ;;
esac

) | lpr -Ppcl
