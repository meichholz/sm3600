#!/usr/bin/perl -wT

use strict;

# ======================================================================
#
# dumpscanctl.pl
#
# filter the (last) scan block from input and split it out again
# method is simple: it identifies register sets, starting with assignment
# to SPOS, and looks, if they are followed by a 32768 BULK transfer.
# The last of such blocks is "the one".
#
# 29.3.2001, Mariuan Matthias Eichholz
#
# ======================================================================

my (@aDump,@aTemp);
my $sPhase="waiting";
while (<STDIN>)
  {
#    print "$sPhase -> $_";
    if (/\=>\[SPOS\]/) # new control blocks ends all search!
      {
	@aTemp=( $_ );
	$sPhase="collecting";
	next;
      }
    if ($sPhase eq "waiting")
      {
	if (/\=>\[SPOS\]/)
	  {
	    @aTemp=( $_ );
	    $sPhase="collecting";
	    next;
	  }
      }
    if ($sPhase eq "collecting")
      {
	if (/^\#/)
	  {
	    $sPhase="checking";
	  }
	else
	  {
	    push @aTemp,$_;
	  }
      }
    if ($sPhase eq "checking")
      {
	if (/: (\d+) bytes BULK/)
	  {
	    @aDump=@aTemp if $1==32768;
	    $sPhase="waiting";
	  }
      }
  }

print @aDump if @aDump;
