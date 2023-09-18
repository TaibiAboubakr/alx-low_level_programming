# 0x18-dynamic_libraries

## Overview
This project explores the concept of dynamic libraries in Unix-like operating systems, with a focus on creating, using, and managing shared libraries. Dynamic libraries, also known as shared objects, play a crucial role in modularizing code and improving the efficiency and maintainability of software systems.

## Usage
### Compile the Library:

To compile the shared library from source code files, use GCC with the -shared and -fPIC options:
$gcc -shared -fPIC -o libmylibrary.so src/mylibrary.c

### Set LD_LIBRARY_PATH (if necessary):

If your library is not in a standard library path, set LD_LIBRARY_PATH to include the library directory:
$ export LD_LIBRARY_PATH=/path/to/0x18-dynamic_libraries/lib:$LD_LIBRARY_PATH

### Compile and Run Test Programs:
$gcc -o test_program tests/test_program.c -L/path/to/0x18-dynamic_libraries/lib -lmylibrary
