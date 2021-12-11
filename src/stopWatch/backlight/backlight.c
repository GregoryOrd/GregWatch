#include "backlight.h"

void initBacklight() { BACKLIGHT_DDR = 0b00010010; }

void setBacklightState(bool backlightOn)
{
   if (backlightOn)
   {
      BACKLIGHT_PORT = (1 << BACKLIGHT_PIN);
   }
   else
   {
      BACKLIGHT_PORT &= ~(1 << BACKLIGHT_PIN);
   }
}