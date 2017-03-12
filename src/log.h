#ifndef LOG_H
#define LOG_H

#include <stdio.h>

#define DEBUG_LOG(...) printf(__VA_ARGS__)
#define ERROR_LOG(...) printf(__VA_ARGS__)
#define INFO_LOG(...)  printf(__VA_ARGS__)

#endif