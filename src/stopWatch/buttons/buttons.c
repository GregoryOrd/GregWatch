#include "buttons.h"

void setupPortForButtons()
{
   BUTTON_PORT_DDR &= ~(1 << BUTTON_ONE);
   BUTTON_PORT |= (1 << BUTTON_ONE);
}

uint8_t readButton(uint8_t buttonPinNumber) { return (BUTTON_INPUT_REGISTER & (1 << buttonPinNumber)); }

uint8_t debouncedButtonRead(uint8_t buttonPinNumber, bool pressedReleased)
{
   int numSameReads = 0;
   int sameReadsThreshold = 10;
   bool previousState = false;
   while (numSameReads < sameReadsThreshold)
   {
      bool read = readButton(BUTTON_ONE) == pressedReleased;
      if (read == previousState)
      {
         numSameReads++;
      }
      else
      {
         numSameReads = 0;
         previousState = read;
      }
   }
   return previousState;
}

bool buttonPressed(uint8_t buttonPinNumber) { debouncedButtonRead(buttonPinNumber, 0); }

bool buttonReleased(uint8_t buttonPinNumber) { debouncedButtonRead(buttonPinNumber, 1); }