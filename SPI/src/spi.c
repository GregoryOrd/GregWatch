#include "spi.h"

#include <util/delay.h>

void initSpiInterface()
{
   SPI_DDR = (1 << MOSI) | (1 << SCK) | (1 << SS) | (1 << RST) | (1 << DC);  // Set MOSI,SCK,SS,RST,DC as output, all others input
   SPCR = (1 << SPE) | (1 << MSTR) | (1 << SPR0);                            // Enable SPI, Set as Master, Set Prescaler as Fosc/16 in SPI control register
}

void enableSlave()
{
   PORTB &= ~(1 << SS);  // Enable by setting the SS pin low
}

void disableSlave()
{
   PORTB |= (1 << SS);  // Disable by setting the SS pin high
}

void resetSlave()
{
   PORTB &= ~(1 << RST);
   _delay_ms(100);
   PORTB |= (1 << RST);
}

void transmitCommand(unsigned char data)
{
   PORTB &= ~(1 << DC);  // set DC pin low for command
   transmitByte(data);
}

void transmitData(unsigned char data)
{
   PORTB |= (1 << DC);  // set DC pin high for data
   transmitByte(data);
}

void transmitByte(unsigned char byte)
{
   SPDR = byte;
   while (!(SPSR & (1 << SPIF)))
   {
   };
}
