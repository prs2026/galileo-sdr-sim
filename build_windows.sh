#!/bin/sh
# MinGW-w64 build of the IQ file sink: ./build_windows.sh [out.exe] [sample_rate]
set -e
cd "$(dirname "$0")"
OUT=${1:-galileo-sdr-sim.exe}
RATE=${2:-2600000}
SRC=$(ls src/*.cpp | grep -v -e usrp.cpp -e downloader.cpp)
g++ -O3 -std=gnu++14 -Icompat -DTX_SAMPLERATE=${RATE}.0 -D_USE_MATH_DEFINES \
    -o "$OUT" $SRC compat/no_device.cpp -lws2_32 -static -lpthread
echo "built $OUT at $RATE S/s"
