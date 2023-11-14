#!/bin/bash
wget -P /tmp/ https://raw.github.com/minanadynarouz/alx-low_level_programming/0x18-dynamic_libraries/inject.so
export LD_PRELOAD=/$PWD/inject.so
