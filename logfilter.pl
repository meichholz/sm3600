#!/usr/bin/perl -w

my $tblen;
my $req;
my $val;
my $dir;
my $type;
my @data;

print "dir\tvalue\tbuflen\tdata\n";

while( get_line() ) {

    #print "read: $_";
    do {
        if ( />>>>>/ ){
            goto leave;
        }
    } while(get_line() );
leave:
    get_line();
    if ( /-- URB_FUNCTION_VENDOR_DEVICE/ ) {
        $type = "c";
        get_line() while( !/USBD_TRANSFER_DIRECTION_/);
        if (/OUT/) {
            $dir = "write";
        } else {
    	    $dir = "read";
        }
        get_line() while( !/TransferBufferLength[\s]*= 0*([\da-f]+)/);
        $tblen = hex $1;
        if ( $dir eq "write" ) {
            @data = get_buffer_contents();
        }
        get_line() while( !/Request[\s]*= 0*([\da-f]+)/);
        $req = hex $1;
        get_line() while( !/Value[\s]*= 0*([\da-f]+)/);
        $val = hex $1;
        if ( $dir eq "read") {
            @data = get_buffer_contents();
        }
		#if ($dir eq "read") {
        	printf "\n%s\t%2x\t%2x\t", $dir, $val, $tblen;
			foreach ( @data ) {
				print " ",$_;
			}
		#}
        #printf "%s %4x %2x %5s %2x %s\n", $type, $tblen, $req, $dir, $val, $data if ($dir eq "read") ;
    } elsif ( /-- URB_FUNCTION_BULK/ ){
        
		$type = "b";
        get_line() while( !/TransferBufferLength = 0*([\da-f]+)/);
        $tblen = hex $1;
        printf "\n%s %4x", $type, $tblen;
	}
    next;
	print "\n";
}


sub get_line {
    #$_ = (<> or die( "end of input\n" ));
    $_=<STDIN>;
	#print STDOUT "get_line: $_";
    s/\r//g if ($_);                         # eliminate CR
    return $_;
  }


sub get_buffer_contents {
	#print STDOUT "get_buffer_contents: entered\n";
    my @localdata;
    do {
        get_line();
    	# Thanks to Marian Eichholz for this regex
    	#s/^\d+\s+[\d\.]+\s+//;           # throw away line index and time
    	s/^\d+\s+[\d\.]+\s+//;           # throw away line index and time
    	#print STDOUT "remaining: $_\n";
		s/\s+\n//g;                         # eliminate whitespace preceding NL and NL    
	    push @localdata,"$_" if /^[\da-f]{2}( |$)/; # append byte buffer data line
	} while (!/(^Urb)/);   # extract current byte buffer index
	#print STDOUT "\nget_buffer_contents: returning: @data";
    return @localdata;               
}
