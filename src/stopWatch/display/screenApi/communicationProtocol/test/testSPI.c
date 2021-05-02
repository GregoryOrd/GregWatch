#include <GregTest.h>

#include "../../../../../sim/hardwareSim.h"
#include "../spi.h"

void willDisableSlave()
{
   PORTB = 0b00000000;
   int expected = 0b00000100;

   disableSlave();

   G_ASSERT_INT_EQ(expected, PORTB);
}

void willEnableSlave()
{
   PORTB = 0b11111111;
   int expected = 0b11111011;

   enableSlave();

   G_ASSERT_INT_EQ(expected, PORTB);
}

void willSetResetPinLow()
{
   PORTB = 0b11111111;
   int expected = 0b11111110;

   setResetPinLow();

   G_ASSERT_INT_EQ(expected, PORTB);
}

void willSetResetPinHigh()
{
   PORTB = 0b00000000;
   int expected = 0b00000001;

   setResetPinHigh();

   G_ASSERT_INT_EQ(expected, PORTB);
}

void willSetPinDirectionsCorrectlyWhenInitializingTheSPIInterface()
{
   SPI_DDR = 0b00000000;
   int expected = 0b00101111;

   initSpiInterface();

   G_ASSERT_INT_EQ(expected, SPI_DDR);
}

void willSetSPIControlRegisterToCorrectStateWhenInitializingTheSPIInterface()
{
   SPCR = 0b00000000;
   int expected = 0b01010001;

   initSpiInterface();

   G_ASSERT_INT_EQ(expected, SPCR);
}

void willSetDCPinLowWhenTransmitingCommand()
{
   unsigned char anonymousData = 0x36;
   PORTB = 0b11111111;
   int expected = 0b11111101;

   transmitCommand(anonymousData);

   G_ASSERT_INT_EQ(expected, PORTB);
}

void willSetSPIDataRegisterWhenTransmittingCommand()
{
   unsigned char anonymousData = 0x36;
   SPDR = 0x00;

   transmitCommand(anonymousData);

   G_ASSERT_INT_EQ(anonymousData, SPDR);
}

void willSetDCPinHighWhenTransmitingData()
{
   unsigned char anonymousData = 0x36;
   PORTB = 0b00000000;
   int expected = 0b00000010;

   transmitData(anonymousData);

   G_ASSERT_INT_EQ(expected, PORTB);
}

void willSetSPIDataRegisterWhenTransmittingData()
{
   unsigned char anonymousData = 0x36;
   SPDR = 0x00;

   transmitData(anonymousData);

   G_ASSERT_INT_EQ(anonymousData, SPDR);
}

void willWaitForEndOfTransmission()
{
   unsigned char anonymousData = 0x36;

   G_EXPECT_CALL(waitForEndOfTransmissionFlagToGoHigh);

   transmitByte(anonymousData);
}

void willResetSlave()
{
   G_EXPECT_CALL(setResetPinLow);
   G_EXPECT_CALL(_delay_ms);
   G_EXPECT_CALL(setResetPinHigh);

   resetSlave();
}