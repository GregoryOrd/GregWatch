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

#define PORTC0 0
#define PORTC1 1
#define PORTC2 2
#define PORTC3 3
#define PORTC4 4
#define PORTC5 5
#define PORTC6 6
#define PORTC7 7

extern uint8_t DDRB;
extern uint8_t PORTB;
extern uint8_t DDRC;
extern uint8_t PORTC;
extern uint8_t SPCR;
extern uint8_t SPDR;
extern uint8_t SPSR;
extern uint8_t TCCR0A;
extern uint8_t TCCR0B;
extern uint8_t OCR0A;
extern uint8_t TIMSK0;

#ifdef __cplusplus
extern "C" {
#endif

#  define ISR(vector, ...)            \
    void vector (void)  __VA_ARGS__; \
    void vector (void)

void resetHardwareSimPortB();
void resetHardwareSimDDRB();
void sei();

#ifdef __cplusplus
}
#endif

#endif