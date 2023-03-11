#!/bin/bash
gcc -c *.c -e | ar rcs liball.a *.c
