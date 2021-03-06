#include "nokia5110Controller.h"

#include "../communicationProtocol/spi.h"
#include "letters16x12.h"

void initNokia5110()
{
   resetSlave();
   transmitCommand(0x21);  // command set in addition mode
   transmitCommand(0xC0);  // set the voltage by sending C0 means VOP = 5V
   transmitCommand(0x07);  // set the temp. coefficient to 3
   transmitCommand(0x13);  // set value of Voltage Bias System
   transmitCommand(0x20);  // command set in basic mode
   transmitCommand(0x0C);  // display result in normal mode
}

void clearScreen()
{
   for (int k = 0; k <= 503; k++)
   {
      transmitData(0x00);
   }
}

bool setScreenXY(unsigned char x, unsigned char y)
{
   if (validXPosition(x) && validYPosition(y))
   {
      transmitCommand(0x80 | x);  // column (0-83)
      transmitCommand(0x40 | y);  // row (0-5)
      return true;
   }
   return false;
}

bool validXPosition(unsigned char x) { return x <= 83; }

bool validYPosition(unsigned char y) { return y <= 5; }

void displayLetter(int startingPosition, char letter)
{
   const letterData data = getLetterData(letter);
   setScreenXY(startingPosition, 2);
   for (int index = 0; index < data.numBytes; index++)
   {
      transmitData(data.upperBank[index]);
   }

   setScreenXY(startingPosition, 3);
   for (int index = 0; index < data.numBytes; index++)
   {
      transmitData(data.lowerBank[index]);
   }
}