#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c -fPIC 
gcc *.o -shared -o liball.so
