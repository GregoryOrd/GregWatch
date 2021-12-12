#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H

#ifdef TEST
#include "../../sim/hardwareSim.h"
#else
#include <avr/io.h>
#include <avr/interrupt.h>
#endif

#define ADC_INTERRUPT_VECTOR ADC_vect

#ifdef __cplusplus
extern "C" {
#endif

void startADCLightSensor();

#ifdef __cplusplus
}
#endif

#endif