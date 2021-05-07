#include "hardwareSim.h"

uint8_t DDRB = 0x00;
uint8_t PORTB = 0x00;
uint8_t SPCR = 0x00;
uint8_t SPDR = 0x00;
uint8_t SPSR = 0x00;
uint8_t TCCR0A = 0x00;
uint8_t TCCR0B = 0x00;
uint8_t OCR0A = 0x00;
uint8_t TIMSK0 = 0x00;

void resetHardwareSimPortB() { uint8_t PORTB = 0x00; }

void resetHardwareSimDDRB() { uint8_t DDRB = 0x00; }

void sei()
{
   // Do nothing. Stub for the function in avr/interrupt.h
}
