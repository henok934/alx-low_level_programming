#!/bin/bash
gcc -c test.c -fpic
gcc -shared -o libtest.so test.o
