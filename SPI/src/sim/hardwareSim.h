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

uint8_t DDRB   = 0x00;
uint8_t PORTB  = 0x00;
uint8_t PORTB0 = 0x00;
uint8_t PORTB1 = 0x00;
uint8_t PORTB2 = 0x00;
uint8_t PORTB3 = 0x00;
uint8_t PORTB4 = 0x00;
uint8_t PORTB5 = 0x00;

uint8_t SPCR = 0x00;
uint8_t SPDR = 0x00;
uint8_t SPSR = 0x00;

#ifdef __cplusplus
extern "C" {
#endif

void resetHardwareSimPortB();
void resetHardwareSimDDRB();

#ifdef __cplusplus
}
#endif

#endif