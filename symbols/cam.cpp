#include <stdint.h>
#include "DpIspStream.h"
extern "C" {
DP_STATUS_ENUM _ZN11DpIspStream11startStreamEP7timeval(struct timeval *endTime = NULL) {
return startStream();
}}