#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/root@96701e073f37/alx-low_level_programming/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so
