#ifndef BUTTONS_H
#define BUTTONS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef TEST
#include "../../sim/hardwareSim.h"
#else
#include <avr/io.h>
#include <avr/interrupt.h>
#endif

#define PAUSE_BUTTON_INTERRUPT_VECTOR               INT0_vect
#define PAUSE_BUTTON_INTERRUPT_CONTROL_REGISTER     EICRA
#define PAUSE_BUTTON_INTERRUPT_MASK_REGISTER        EIMSK
#define PAUSE_BUTTON_INTERRUPT_ENABLE               INT0
#define PAUSE_BUTTON_INTERRUPT_SENSE_CONTROL_1      ISC01
#define PAUSE_BUTTON_INTERRUPT_SENSE_CONTROL_0      ISC00

#ifdef __cplusplus
extern "C" {
#endif

void setupPauseButtonInterrupt();

#ifdef __cplusplus
}
#endif

#endif