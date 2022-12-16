#!/bin/bash
wget -P .. https://raw.githubusercontent.com/monoprosito/holbertonschool-low_level_programming/master/0x18_dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
