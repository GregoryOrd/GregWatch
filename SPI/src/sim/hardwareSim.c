#include "hardwareSim.h"

uint8_t DDRB = 0x00;
uint8_t PORTB = 0x00;
uint8_t SPCR = 0x00;
uint8_t SPDR = 0x00;
uint8_t SPSR = 0x00;

void resetHardwareSimPortB() { uint8_t PORTB = 0x00; }

void resetHardwareSimDDRB() { uint8_t DDRB = 0x00; }
