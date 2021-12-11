#ifndef BACKLIGHT_H
#define BACKLIGHT_H

#include <stdbool.h>

#ifdef TEST
#include "../../sim/hardwareSim.h"
#else
#include <avr/io.h>
#endif

// BACKLIGHT PIN DEFINES
#define BACKLIGHT_DDR  DDRD
#define BACKLIGHT_PORT PORTD
#define BACKLIGHT_PIN  PORTD4

#ifdef __cplusplus
extern "C" {
#endif

void initBacklight();
void setBacklightState(bool backlightOn);

#ifdef __cplusplus
}
#endif

#endif