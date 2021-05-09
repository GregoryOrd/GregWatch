#ifndef BUTTONS_H
#define BUTTONS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef TEST
#include "../../sim/hardwareSim.h"
#else
#include <avr/io.h>
#endif

#define BUTTON_PORT_DDR         DDRC
#define BUTTON_INPUT_REGISTER   PINC
#define BUTTON_PORT             PORTC
#define BUTTON_ONE              PORTC0

#ifdef __cplusplus
extern "C" {
#endif

void setupPortForButtons();
uint8_t readButton(uint8_t buttonPinNumber);
bool buttonPressed(uint8_t buttonPinNumber);
bool buttonReleased(uint8_t buttonPinNumber);

#ifdef __cplusplus
}
#endif

#endif