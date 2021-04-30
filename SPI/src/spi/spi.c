#include "spi.h"

void initSpiInterface()
{
   SPI_DDR = (1 << MOSI) | (1 << SCK) | (1 << SS) | (1 << RST) | (1 << DC);
   SPCR = (1 << SPE) | (1 << MSTR) | (1 << SPR0);
}

void enableSlave() { PORTB &= ~(1 << SS); }

void disableSlave() { PORTB |= (1 << SS); }

void setResetPinLow() { PORTB &= ~(1 << RST); }

void setResetPinHigh() { PORTB |= (1 << RST); }

void resetSlave()
{
   setResetPinLow();
   _delay_ms(100);
   setResetPinHigh();
}

void transmitCommand(unsigned char data)
{
   PORTB &= ~(1 << DC);
   transmitByte(data);
}

void transmitData(unsigned char data)
{
   PORTB |= (1 << DC);
   transmitByte(data);
}

void transmitByte(unsigned char byte)
{
   SPDR = byte;
   waitForEndOfTransmissionFlagToGoHigh();
}

void waitForEndOfTransmissionFlagToGoHigh()
{
#ifndef TEST
   while (!(SPSR & (1 << SPIF)))
   {
   };
#endif
}
