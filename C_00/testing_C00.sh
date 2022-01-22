#!/bin/sh

norminette
gcc *.c
./a.out
rm a.out