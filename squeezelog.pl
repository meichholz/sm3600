#!/usr/bin/perl -wT
use strict;
# $Id: squeezelog.pl,v 1.1 2001/03/23 21:58:23 eichholz Exp $
#
# Originally, this script should compact USB-SNOOPY's log files for protocol
# analysis. Is it designed to preserve as much information as is "possible".
#
# It has support for human analysis as well as roboted protocol replay.
#
# 0.14 : C-code-generation. New output format flags.
# 0.11 : Scanmaker-specific human format
# 0.10 : me-robot-length with 4 digits, URB index, end-of-data-detection
# 0.9 :  Modified robot support for my own robot
# 0.8 :  Support for bulk transfers in chunks.
# 0.7 :  Options:
#        -r : optional generation of robot-skript
#        -m : setting lowest snoopy-C<line>
#        -n : setting highes snoopy-C<line>
# 0.6 :  Better formattet output
# 0.4 :  hex/dec glitch fixed.
# 

# ======================================== options and command line

my $sOptFormat;
my $sOptBulkEncoding = "hex";
my ($nFrom,$nTo) = (0,100000);

while (defined $ARGV[0])
  {
    $_=shift @ARGV;
    if ($_ eq "-fu") { $sOptFormat="usb-robot"; }
    elsif (/^-fd/) { $sOptFormat="new-robot"; }
    elsif (/^-fp/) { $sOptFormat="plain"; }
    elsif (/^-fc/) { $sOptFormat="c"; }
    elsif (/^-fr/) { $sOptFormat="register"; }
    elsif (/^-m/) { $nFrom=shift @ARGV; }
    elsif (/^-n/) { $nTo=shift @ARGV; }
    else { print STDERR "unknown argument \"$_\"\n"; exit 1; }
  }

unless (defined $sOptFormat)
{
print STDERR <<eom;
usage: squeezelog.pl -f<format> < snoopyfile

formats are:
	-fr : register transfer analysis
	-fc : c code generation
	-fd : dirty-robot-input format
	-fu : usb-robot-input format
options are:
	-m : set lowest URB
	-n : set highest URB

(C) Marian Eichholz 2001
eom
	exit 1;
}

# ======================================== global variables

my ($nIndex,$sTime,$iLast,@aArgs,$bValid,$sDirection,
    $sFunc,$nLength,$nReq,$nVal,$sInOut,$iURB);

my $nLine=0;
my $bFirst=1;     # must be present BEFORE the helper
my $bInitPhase=1; # initialization phase (no data available)

# ======================================================================

sub Clear {
  $bValid=0;
  $sDirection="?";
  $sFunc=0;
  $nLength=-1;
  $nReq=-1;
  $nVal=-1;
  $sTime="?.?";
  $nIndex=0;
  $sInOut="?";
  @aArgs=();
}

# ======================================================================

sub FlushNewRobot {
  $_=shift;
  $bFirst=0;
  if ($sFunc eq "VENDOR_DEVICE")
    {
      my $chDir=lc(substr($sInOut,0,1));
      if ($sDirection eq ">")
	{
	  $bInitPhase=0;
	  printf "c%s%04X;%02X;%04X;%04X;%04X\n",
	  $chDir,$iURB,$nReq,$nVal,
	  0x40+($sInOut eq "in" ? 0x80 : 0 ),
	  $nLength;
	}
      # outgoing parameters */
      foreach (@aArgs)
	{
	  s/ //g;
	  printf "d%s%04X;%s",$chDir,$iURB,uc($_);
	}
    } # VENDOR
  elsif ($sFunc eq "BULK_OR_INTERRUPT_TRANSFER")
    {
      if ($sDirection eq ">")
	{
	  $bInitPhase=0;
	  printf "bi%04X;%02X;%04X\n",$iURB,0x82,$nLength;
	}
    }
  if ($sDirection eq "<" and @aArgs)
    {
      return if $bInitPhase;
      # each returning data comes as returning CONTROL message */
      my $i;
      for ($i=0; $i<=$#aArgs; $i++)
	{
	  $_=$aArgs[$i];
	  s/ //g;
	  print $i!=$#aArgs ? 'd' : 'D';
	  printf "i%04X;%s",$iURB,uc($_);
	}
    }
}

# ======================================================================

my $bVendorPending=0;
my $nRegister;
my %hRegNames=qw( 06 STPS 07 STPSH 42 CSTAT 44 LMP 46 CTL 52 POS 53 POSH
		  54 STAT 55 STATH
		  2F CCAL 30 CCAL2 31 CCAL3
		  32 LEN 33 LENH );

sub FlushRegisterStyle {
  $_=shift;
  $bFirst=0;
  if ($sFunc eq "VENDOR_DEVICE")
    {
      my $chDir=lc(substr($sInOut,0,1));
      if ($sDirection eq ">")
	{
	  $bInitPhase=0;
	  $bVendorPending=1;
	  $nRegister=$nVal;
	}
    } # VENDOR
  elsif ($sFunc eq "BULK_OR_INTERRUPT_TRANSFER")
    {
      $bVendorPending=0;
      if ($sDirection eq ">")
	{
	  printf "#%03d[%05s]: %05d bytes BULK\n",$iURB,$sTime,$nLength;
	  $bInitPhase=0;
	}
    }
  if (@aArgs and $bVendorPending)
    {
      return if $bInitPhase;

      my $i;
      my $sReg="";
      foreach (@aArgs)
	{
	  s/.*: //g; s/[ \n]//g;
	  $sReg.=uc($_);
	}
      printf "#%03d[%05s]:",$iURB,$sTime;
      for ($i=0; $i<$nLength; $i++)
	{
	  my $sRegName=sprintf "%02X",$nRegister+$i;
	  $sRegName=$hRegNames{$sRegName} if defined $hRegNames{$sRegName};

	  if ($sDirection eq ">")
	    {
	      printf " %s=>[%s]",substr($sReg,2*$i,2),$sRegName;
	    }
	  else
	    {
	      printf " [%s]=%s",$sRegName,substr($sReg,2*$i,2);
	    }
	  print "\n            " if ($i and !($i % 5))
	}
      print "\n";
      $bVendorPending=0;
    }
}

# ======================================================================

my @aLastRegSet=();

sub FlushCCode {
  $_=shift;
  $bFirst=0;
  if ($sFunc eq "VENDOR_DEVICE")
    {
      my $chDir=lc(substr($sInOut,0,1));
      if ($sDirection eq ">")
	{
	  $bInitPhase=0;
	  $bVendorPending=1;
	  $nRegister=$nVal;
	}
    } # VENDOR
  elsif ($sFunc eq "BULK_OR_INTERRUPT_TRANSFER")
    {
      $bVendorPending=0;
      if ($sDirection eq ">")
	{
	  printf "BulkRead(fh,%d);   /* #%03d[%05s] */\n",
	    $nLength,$iURB,$sTime;
	  $bInitPhase=0;
	}
    }
  if (@aArgs and $bVendorPending)
    {
      return if $bInitPhase;

      my $i;
      my $sReg="";
      foreach (@aArgs)
	{
	  s/.*: //g; s/[ \n]//g;
	  $sReg.=uc($_);
	}
      if ($nLength<=4) # do it scalar
	{
	  my $sWord="";
	  my $sRegName=sprintf "%02X",$nRegister;
	  $sRegName= (defined $hRegNames{$sRegName})
	    ? "R_".$hRegNames{$sRegName} : "0x$sRegName";
	  for ($i=0; $i<$nLength; $i++)
	    {
	      $sWord=substr($sReg,2*$i,2).$sWord;
	    }
	  if ($sDirection eq ">")
	    {
	      printf "RegWrite(%s, %d, 0x%s);",$sRegName,$nLength,$sWord;
	    }
	  else
	    {
	      printf "ulVal%d = RegRead(%s, %d); /*=0x%s*/",
	      $nLength,$sRegName,$nLength,$sWord;
	    }
	}
      else
	{
	  printf "{\n unsigned char uchRegs%d[]={",$iURB;
	  for ($i=0; $i<$nLength; $i++)
	    {
	      my $sRegName=sprintf "%02X",$nRegister+$i;
	      my $sVal=substr($sReg,2*$i,2);
	      my $sMark="";
	      $sMark="!!"
		if defined($aLastRegSet[$i]) and $sVal ne $aLastRegSet[$i];
	      print "\n  " if !($i % 3);
	      $sRegName= (defined $hRegNames{$sRegName})
		? "R_".$hRegNames{$sRegName} : "0x$sRegName";
	      printf " 0x%s /*%s%s%s*/",$sVal,$sMark,$sRegName,$sMark;
	      $aLastRegSet[$i]=$sVal;
	      print "," if $i<$nLength-1;
	    }
	  printf " };\n  RegWriteArray(R_ALL, %d, uchRegs%d);\n}",
	  $nLength,$iURB;
	}
      printf "    /* #%03d[%05s] */\n",$iURB,$sTime;
      $bVendorPending=0;
    }
}

# ======================================================================

sub FlushUsbRobot {
  $_=shift;
  if ($bFirst)
    {
      # print "#!/usr/local/bin/usb-robot-slave\n";
      # print "#\n# generated by squeezelog\n#\n";
      print "encoding hex\ndecoding hex\ninterface 0\n";
      $bFirst=0;
    }
  if ($sFunc eq "VENDOR_DEVICE")
    {
      if ($sDirection eq ">")
	{
	  printf "transfer size=%d direction=%s type=control ".
	    "request=0x%04X value=0x%04X requesttype=0x%04X\n",
	    $nLength,$sInOut,$nReq,$nVal,
	    0x40+($sInOut eq "in" ? 0x80 : 0 );
	}
      if (@aArgs)
	{
	  foreach (@aArgs)
	    {
	      s/^[0-9a-f]+: +//;
	      print $_;
	    }
	}
      elsif ($nLength>0)
	{
	  my $i;
	  for ($i=0; $i<$nLength; $i++)
	    {
	      if ($i)
		{
		  print $i & 31 ? " " : "\n";
		}
	      print "00";
	    }
	  print "\n" if $nLength>0;
	}
    } # VENDOR_DEVICE
  elsif ($sFunc eq "BULK_OR_INTERRUPT_TRANSFER")
    {
      # oops: does the kernel have a problem transferring more
      # than a page at once? "bad, bad, bad Kernel!"
      while ($nLength)
	{
	  my $cch=$nLength;
	  $cch=4096 if $cch>4096;
	  if ($sDirection eq ">")
	    {
	      printf "transfer size=%d direction=in ".
		"type=bulk ep=0x%02X\n",
		$cch,0x82;
	      if ($sOptBulkEncoding ne "hex")
		{
		  printf "00\n" x $cch;
		}
	      else
		{
		  my $i;
		  for ($i=0; $i<$cch; $i++)
		    {
		      if ($i)
			{
			  print $i & 31 ? " " : "\n";
			}
		      print "00";
		    }
		  print "\n";
		}
	    }
	  $nLength-=$cch;
	}
    }
} # robot code

# ----------------------------------------------------------------------

sub FlushPlainStyle {
  $_=shift;
  my $bShortRC=0;
  if ($bFirst)
    {
      printf " time #line: D%30s rq, val,indx, len\n",
      "FUNCTION";
      print "="x60,"\n";
      $bFirst=0;
    }
  if ($sDirection eq ">")
    {
      printf "%5s #%4d: %s%30s %02X,%04X,%04X,%04X\n",
      $sTime,$nLine,$sDirection,$sFunc,
      $nReq&0xFF,$nVal&0xFFFF,$nIndex&0xFF,$nLength&0xFFFF;
    }
  else # everytime CONTROL
    {
      printf "%5s #%4d: %s%30s -- ---- ---- ----",
      $sTime,$nLine,$sDirection,"./.",
      $nReq&0xFF,$nVal&0xFFFF,$nIndex&0xFF,$nLength&0xFFFF;
      if ($#aArgs==0 && length($aArgs[0])==9)
	{
	  $bShortRC=1;
	  print " >>> ",substr($aArgs[0],6,2);
	}
      print "\n";
    }
  if (!$bShortRC)
    {
      foreach (@aArgs)         # flush prepared URB byte buffer lines
	{
	  print " "x14,$_;
	}
    }
}

# ----------------------------------------------------------------------

while (<STDIN>)
  {
    $nLine++;
    next unless /^\d+/;              # skip garbage without line index
    $sTime=$1 if /^\d+\s+(\d+\.\d)/; # extract time index
    s/^\d+\s+[\d\.]+\s+//;           # through away line index and time
    s/\r//g;                         # eliminate CR
    if (/^[<>]/)                     # new URB registered?
      {
	my $sLine=$_; # save ARG
	if ($bValid)                 # flush last URB content
	  {
	    if ($nLine<$nFrom || $nLine>$nTo)
	      {
		; # skip unwanted USB log lines
	      }
	    elsif ($sOptFormat eq "usb-robot")
	      {
		FlushUsbRobot($_);
	      }
	    elsif ($sOptFormat eq "new-robot")
	      {
		FlushNewRobot($_);
	      }
	    elsif ($sOptFormat eq "register")
	      {
		FlushRegisterStyle($_);
	      }
	    elsif ($sOptFormat eq "c")
	      {
		FlushCCode($_);
	      }
	    else
	      {
		FlushPlainStyle($_);
	      }
	  } # if valid
	$_=$sLine;
	Clear();                     # invalidate last URB data
	$bValid=1;                   # hey, we have a new one!
      }
    $sDirection=">"  if /^>>>/;
    $sDirection="<"  if /^\<\<\</;
    $iURB=$1+0       if /^[<>]+ URB (\d+) /;
    $sFunc=$1        if /^-- URB_FUNCTION_([\w_]+)/;
    $nLength=hex($1) if /^TransferBufferLength\s+= ([\da-f]+)/;
    $nReq=hex($1)    if /^Request\s+= ([\da-f]+)/;
    $nVal=hex($1)    if /^Value\s+= ([\da-f]+)/;
    $nIndex=hex($1)  if /^Index\s+= ([\da-f]+)/;
    $sInOut=lc($1)   if /^TransferFlags\s+=.*DIRECTION_(IN|OUT)/;
    $iLast=$1        if /^([\da-f]{4}):/;   # extract current byte buffer index
    push @aArgs,"$iLast: $_" if /^[\da-z]{2}( |$)/; # append byte buffer data line
  }

if ($sOptFormat eq "usb-robot")
  {
    print "quit\n";
  }
