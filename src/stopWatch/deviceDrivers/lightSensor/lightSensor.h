#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H

/*
Note about wiring:
One leg of photoresistor gets 5V power.
The other leg of the photoresitor is connected to the ADC5 pin.
The pin that is connected to the ADC5 pin also has a 220 Ohm resistor connecting
it to ground.
*/

#ifdef TEST
#include "../../../sim/hardwareSim.h"
#else
#include <avr/interrupt.h>
#include <avr/io.h>
#endif

#define ADC_INTERRUPT_VECTOR ADC_vect

#ifdef __cplusplus
extern "C"
{
#endif

   void startADCLightSensor();

#ifdef __cplusplus
}
#endif

#endif