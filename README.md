# libsmi5
A library for SMI management information

Copyright (c) 1999-2008 Frank Strauss, Technical University of Braunschweig.

See the file "[COPYING](COPYING)" for information on usage and redistribution
of this file, and for a DISCLAIMER OF ALL WARRANTIES.

This project has been started as part of Frank Strauss' master's
thesis at the Technical University of Braunschweig, Germany in 1999.
Since then numerous people applied very major improvements, fixes, and
new features, namely Juergen Schoenwaelder who also initiated the
whole project and supervised my thesis work, as well as Torsten Klie,
Andreas Mueller, Moritz Bunkus, Jens Mueller, Klaus Sperner, Kaloyan
Kanev, and Siarhei Kuryla. Many others contributed patches,
improvements, and feature requests.

This software comprises 

 - a library to parse MIB, PIB and YANG modules,

 - a set of tools based on the library to check, convert, and compare
   MIB, PIB and YANG modules.

 - a collection of all published IETF and IANA Standards Track MIB,
   PIB and YANG modules and some more.

Please read the manual pages and the [project's web pages](https://www.ibr.cs.tu-bs.de/projects/libsmi/)
for further information.


## MANIFEST

| File   | Description |
| ------ | ----------- |
| README | this file |
| COPYING | the libsmi lincense terms |
| ChangeLog | a rough history of changes |
| TODO | incomplete list of things to be done |
| THANKS | a list of people who contributed |
| configure | configure script |
| lib/ | library source code |
| tools/ | tools source code |
| doc/ | some related documents |
| mibs/ | MIB modules to be installed |
| pibs/ | PIB modules to be installed |
| test/ | some test patterns |
| win/ | Win32 port source code |
| yang/ | YANG modules to be installed |


## INSTALLATION

Requirements: GNU make, gcc, flex, bison, and other things most UNIX
systems have on board. The compiler has to support `long long' types.

To configure libsmi, first check

	./configure --help

output to see, what options are available. Then run

	./configure [options]

with the options of your choice. Choose mibdir, pibdir and smipath
values appripriate for your environment so that users can live without
an SMIPATH environment variable and without configuration files.

On HP-UX platforms the build process is reported to require gcc
and the --disable-shared configure option.

To build libsmi and the tools, run

	make

This should build the library libsmi in lib/ and the tools, namely
tools/smilint, tools/smidump, tools/smiquery, tools/smidiff,
tools/smixlate and the shell script tools/smistrip.

Now, you may run some checks by

	make check

Note that some tests of this test suite may fail, if GNU diff was not
found.

If you wish to install the library, the MIB and PIB modules, the tools
and the man pages, run

	make install

To use libsmi applications you might want to configure its behaviour.
Detailed library options, including per-application options, can
be configured through a global and a user level configuration file.
Additionally the SMIPATH environment variable can be used to configure
paths of module locations. See the smi_config(3) man page.


## DEBUGGING

If you encounter any crashes or feel for any other reasons the need to
debug the libsmi tools, you should link the tools statically. This is
the easiest way to get around the problems when your debugger claims to
be unable to read the libsmi binary files, since they are built using
libtool. You can build the libsmi tools statically by

	make clean
	./configure --enable-static --disable-shared
	make


## FURTHER READING

Read the man pages for library concepts and usage and for the tools.
Please note that SMIng is currently in a quite inconsistent and
outdated state. It does *not* reflect what is being specified in RFCs
3780/3781.  Therefore, SMIng is not enabled by default. See the old
specs in [doc/draft-irtf-nmrg-sming-02.txt](doc/draft-irtf-nmrg-sming-02.txt)
for details on SMIng as it is implemented.

You may find further information online, along with the subscription
information on the libsmi mailing list at

	http://www.ibr.cs.tu-bs.de/projects/libsmi/.



	Frank Strauss <strauss@ibr.cs.tu-bs.de>
