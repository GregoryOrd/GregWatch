#ifndef SPI_H
#define SPI_H

#include <avr/io.h>

// SPI INTERFACE DEFINES
#define SPI_DDR DDRB
#define SPI_PORT PORTB
#define MOSI PORTB3  // MOSI it's PORT B, PIN 3
#define MISO PORTB4  // MISO it's PORT B, PIN 4
#define SCK  PORTB5  // SCK it's PORT B, PIN 5
#define SS   PORTB2  // SS it's PORT B, PIN 2

// RESET THE DISPLAY
#define RST PORTB0  // RESET it's PORT B, PIN 0

// // DISPLAY MODE SELECT - Input to select either command/address or data input.
#define DC PORTB1  // DC it's PORT B, PIN 1

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