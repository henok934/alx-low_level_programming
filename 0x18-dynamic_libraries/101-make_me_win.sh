#!/bin/bash
gcc test.o -fPIC -shared -o libtest.so
LD_PRELOAD=$PWD/libtest.so
