#!/bin/bash
wget -P /tmp https://github.com/abrhamamare/alx-low_level_Programming/blob/main/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD=/tmp/libmask.so
