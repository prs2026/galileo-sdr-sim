/* Windows file-sink build: Winsock stands in for BSD sockets. */
#pragma once
#include <winsock2.h>
#include <ws2tcpip.h>
#include <sys/time.h>
#ifdef interface
#undef interface
#endif
