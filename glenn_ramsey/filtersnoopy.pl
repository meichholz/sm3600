#!/usr/bin/perl -w

my $tblen;
my $req;
my $val;
my $dir;
my $type;
my $data;

# this makes each line printed after it have a \r\n instead of just a \n.
#print "type length request dir value (first 16 bytes of data buffer])";
#printf "%s\n", "type length request dir value (first 16 bytes of data buffer])";
#printf "%1s", "\n";

print "type length request dir value (first 16 bytes of data buffer])";

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
            $dir = "out";
        } else {
    	    $dir = "in";
        }
        get_line() while( !/TransferBufferLength[\s]*= 0*([a-zA-Z0-9]+)/);
        $tblen = hex $1;
        if ( $dir eq "out" ) {
            $data = get_buffer_contents();
        }
        get_line() while( !/Request[\s]*= 0*([a-zA-Z0-9]+)/);
        $req = hex $1;
        get_line() while( !/Value[\s]*= 0*([a-zA-Z0-9]+)/);
        $val = hex $1;
        if ( $dir eq "in") {
            $data = get_buffer_contents();
        }
        if ( $dir eq "out" ) {
            $dir = "write";
        } else {
            $dir = "read";
        }
        printf "%s %4x %2x %5s %2x %s\n", $type, $tblen, $req, $dir, $val, $data;
    } elsif ( /-- URB_FUNCTION_BULK/ ){
        $type = "b";
        get_line() while( !/TransferBufferLength = 0*([a-zA-Z0-9]+)/);
        $tblen = hex $1;
        printf "%s %4x\n", $type, $tblen;
    }
    next;
}

sub get_line {
    $_ = (<> or die( "end of input\n" ));
    #GR uncommented this
    #print STDERR "read: $_";
    #/GR
    s/\r//g;
    return $_;
  }


# this only gets the first line of data, it wouldn't be too hard
# to expand it to get the whole buffer, but then the output wouldn't
# be condensed by very much 
sub get_buffer_contents {
    get_line() while ( !/0000:/ );
    get_line();
    my @data;
    #remove the line no and timestamp
    @data = split /[\s]{3}/;        
    $data = pop @data;
    #remove the newline - there has to be a better way than this 
    @data = split /\n/, $data;
    $data = pop @data;
    return $data;               
}
