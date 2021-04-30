#ifndef HARDWARE_SIM_H
#define HARDWARE_SIM_H

#include <stdint.h>

#define SPE  6
#define MSTR 4

#define SPR0 0
#define SPR1 1
#define SPR2 2
#define SPR3 3
#define SPR4 4
#define SPR5 5
#define SPR6 6
#define SPR7 7
#define SPIF 7

#define PORTB0 0
#define PORTB1 1
#define PORTB2 2
#define PORTB3 3
#define PORTB4 4
#define PORTB5 5
#define PORTB6 6
#define PORTB7 7

extern uint8_t DDRB;
extern uint8_t PORTB;
extern uint8_t SPCR;
extern uint8_t SPDR;
extern uint8_t SPSR;

#ifdef __cplusplus
extern "C" {
#endif

void resetHardwareSimPortB();
void resetHardwareSimDDRB();

#ifdef __cplusplus
}
#endif

#endif