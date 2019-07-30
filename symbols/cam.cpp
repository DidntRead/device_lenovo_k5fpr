#include <stdint.h>
#include "DpIspStream.h"

extern "C" {
    int _ZN11DpIspStream11startStreamEv();
    int _ZN11DpIspStream11startStreamEP7timeval(struct timeval *endTime) {
        return _ZN11DpIspStream11startStreamEv();
    }
    
    int _ZN11DpIspStream15dequeueFrameEndEv();
    int _ZN11DpIspStream15dequeueFrameEndEPj(unsigned int* pValueList) {
        return _ZN11DpIspStream15dequeueFrameEndEv();
    }
}
