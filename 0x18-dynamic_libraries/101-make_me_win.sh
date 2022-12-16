#!/bin/bash
gcc *.o -fPIC -shared -o libtek.so

LD_PRELOAD=$PWD/libtek.so
