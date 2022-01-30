#include <stdint.h>

#define convert_to_volt(adc) (adc * 0.805860805861)

//  TPS:
#define TPS_DUAL false //!< Habilita el TPS doble, requiere remapeo de IO

#define TPS_MIN_A 1700 //!< Valor minimo en mV para el sensor TPS (primer potenciometro); valores inferiores disparan DTC
#define TPS_MIN_B 1700 //!< Valor minimo en mV para el sensor TPS (segundo potenciometro); valores inferiores disparan DTC
#define TPS_MAX_A 4500 //!< Valor maximo en mV para el sensor TPS (primer potenciometro); valores superiores disparan DTC
#define TPS_MAX_B 4500 //!< Valor maximo en mv para el sensor TPS (segundo potenciometro); valores superiores disparan DTC

#define TPS_CALC_A(mV) ((mV <= 3695) ? (mV - 1823) / 37.44 : (mV - 2943) / 15.04) //!< Ecuacion para transformar valor en mV a porcentaje (varia dependiendo del sensor); NO MANDES UN MAP() DE ARDUINO ACA


int32_t calc(int32_t adc_value){
     int32_t _t = convert_to_volt(adc_value) /* * 1334 */;
    if (_t > TPS_MAX_A || _t < TPS_MIN_A)
        return 0;
    return (int32_t)TPS_CALC_A(_t  /* * 1.534 */);
}