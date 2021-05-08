#ifndef TIMER_H
#define TIMER_H

#include <stdbool.h>

#ifdef TEST
#include "../../sim/hardwareSim.h"
#else
#include <avr/interrupt.h>
#include <avr/io.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

void resetTimerFlag();
void setupTimer();
bool oneSecondElapsed();

#ifdef __cplusplus
}
#endif

#endif