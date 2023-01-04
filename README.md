# openKillNOW
Overview

This program is a simple command-line tool that opens the GeForceNOW app and then kills all its processes. It is written in C++ and uses the system and popen functions to execute shell commands.

Requirements:

The program has the following dependencies:

iostream: for input/output operations
cstdlib: for the system function
unistd.h: for the sleep function
cstring: for string operations
signal.h: for the popen function

Usage:

To use the program, simply compile it and run the executable. The GeForceNOW app will be opened and then killed after a close it.

Copy code
g++ openKillNOW.cpp -o gfn-killer
./gfn-killer

Limitations:

The program has the following limitations:

It is only tested on macOS. It may not work on other operating systems.
It relies on the /usr/bin/open and pkill commands, which may not be available on all systems.
It uses a hard-coded sleep duration (5 seconds) to wait for the app to be opened. This may not be sufficient in some cases.
It uses a hard-coded process name ("GeForceNOW") to identify and kill the app's processes. This may not work if the app's process name is changed or if there are other processes with a similar name.
