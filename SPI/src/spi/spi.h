#ifndef SPI_H
#define SPI_H

//Commented out while working on the build system
#include <avr/io.h>
#ifdef TEST
//#include "../sim/hardwareSim.h"
#include "../sim/timeSim.h"
#else
//#include <avr/io.h>
#include <util/delay.h>
#endif

// SPI INTERFACE DEFINES
#define SPI_DDR  DDRB
#define SPI_PORT PORTB
#define RST      PORTB0 
#define DC       PORTB1
#define SS       PORTB2
#define MOSI     PORTB3
#define MISO     PORTB4
#define SCK      PORTB5

#ifdef __cplusplus
extern "C" {
#endif

void initSpiInterface();
void enableSlave();
void disableSlave();
void resetSlave();
void transmitCommand(unsigned char byte);
void transmitData(unsigned char byte);
void transmitByte(unsigned char byte);

#ifdef __cplusplus
}
#endif

#endif