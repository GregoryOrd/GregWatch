#ifndef BUTTONS_H
#define BUTTONS_H

#include <stdbool.h>
#include <stdint.h>

#ifdef TEST
#include "../../sim/hardwareSim.h"
#else
#include <avr/interrupt.h>
#include <avr/io.h>
#endif

#define BUTTONS_DDR                           DDRD
#define BUTTONS_INPUT_REGISTER                PIND
#define BUTTONS_PIN_CHANGE_INTERRUPT_REGISTER PCICR
#define BUTTONS_PIN_CHANGE_MASK_REGISTER      PCMSK2
#define BUTTONS_INTERRUPT_VECTOR              PCINT2_vect

#define BUTTON_1    PORTD2
#define BUTTON_1_IN PIND2

#define BUTTON_2    PORTD3
#define BUTTON_2_IN PIND3

#define BUTTON_3    PORTD4
#define BUTTON_3_IN PIND4

#define BUTTON_4    PORTD5
#define BUTTON_4_IN PIND5

#ifdef __cplusplus
extern "C"
{
#endif

   void initButtons();

#ifdef __cplusplus
}
#endif

#endif