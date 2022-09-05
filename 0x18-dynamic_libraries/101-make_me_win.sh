#!/bin/bash
wget -P .. https://github.com/holbertonschool/0x18.c.git
export LD_PRELOAD="$PWD/../libgiga.so"
