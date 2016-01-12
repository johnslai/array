#!/bin/bash
gcc -c array.c
gcc main.c array.o -o run
./run
