# Windows (MinGW-w64) file-sink build

Stub headers so galileo-sdr-sim builds without UHD, ncurses, Boost, libcurl or
POSIX sockets. Only the IQ file sink (`-U 1 -b 1 -o file`) is supported; a USRP
or a live bit streamer is not. Build with `build_windows.sh` (or the Witness HITL
`gps_rf.py build-galileo`).
