#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
gcc -shared -o libdynamic.so *.o
