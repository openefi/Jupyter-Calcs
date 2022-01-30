#include <stdint.h>

// Sensor GM:
// V * 18.987 + 10.1515 => kPa
// V * 20 => Load

#define MAP_CAL(V) (mV * 18.987 + 10.1515)
#define MAP_LOAD_CAL(V) (V * 20)

int32_t calc(int32_t mV)
{
    int32_t volt = mV;
    return MAP_CAL(volt) / 1000;
    return 5;
    /*   return MAP_CAL(((int32_t)mV / 1000)); */
}

int32_t calc_load(int32_t mV)
{
    return MAP_LOAD_CAL(mV )/ 1000;
}