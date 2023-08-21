#!/bin/bash

source_file="low.c strbrk.c strncmp.c abs.c strcat.c strncpy.c alph.c memcpy.c strchr.c strspn.c atoi.c memset.c strcpy.c strstr.c isdig.c put.c strl.c isup.c puts.c strncat.c"

output_file="temp.o"

for src in $source_file; do
	gcc -c "$src" -o "${src%.c}.o"
done

gcc -o "$output_file" *.o

rm -f *.o
