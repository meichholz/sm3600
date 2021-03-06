Tools for the ScanMaker 3600 scanner
====================================

Content
-------

- Purpose
- Broken links and special names
- Installing
- Permissions
- Contact


Purpose
-------

This is the source code and the tools for development of a scanning
tool for the Microtek SanMaker 3600 scanner.

If you want only the SANE backend version then the easiset way to
install this is to get the patch that is available from the files
area on our sourceforge project page. You only need to install this
CVS version if you are doing development or testing.

It is intended with two goals:

1) A standalone tool (scantool) for the command line with specific
optimisations and options. The scantool is a testbede for scanning
algorithms, too and has a command line interface for ad hoc testing.

2) A SANE backend module.

See README.FILE for the meaning of certain files, tools and scripts.


Broken links and special names
------------------------------

This is a DEVELOPMENT TREE, no "shrinkwrapped package". It is *very*
alpha, but might me useful for you, if you are brave :-)

Please have this notion in mind, if you find mysterious scripts with
magic SSH stuff, hard coded directories and all such things.

There might be links to directories outside of the package (RCS or
so), that make the tree somewhat leaner. This is perfectly ok. Just
ignore them.


Installing
----------

Read README.INSTALL for the installing procedure with the
sane-backends 1.0.4 (see http://www.mostang.com/sane/ for download
procedures).

For the scantool target use the following procedure:

	./configure
	make bin

There is no "make install" available now. So, just copy the binary to
an appropriate place.


Permissions and USBDEVFS
------------------------

Since we use the usblib interface for now, you need to grant the
appropriate permissions to the /proc/bus/usb filesystem.

If you have no special USB devices, it is completely sufficient to do:

	chown YOURUID /proc/bus/usb/???

This will probably be OK for a development machine, but for a
production environment you will probably want to fix that properly,
and you wouldn't be using this development package on such a machine
anyway, would you?  

You might also find hotplug useful see http://linux-hotplug.sourceforge.net/ .


Contact
-------

If you have ideas and suggestions about the code, please ask

	mailto:eichholz@computer.org

There is a web site with a mailing list. Please have a look at

	http://sm3600.sourceforge.net/

License
-------

MIT. See [LICENSE](LICENSE)

