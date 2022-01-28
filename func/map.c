#include <stdint.h>

#define MAP_CAL(mV) (mV * 16.66 + 167)

int32_t calc(int32_t mV){
    return MAP_CAL(mV);
}

