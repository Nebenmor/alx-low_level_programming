#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.0
export LD_LIBRARY_PATH_=.:$LD_LIBRARY_PATH 
