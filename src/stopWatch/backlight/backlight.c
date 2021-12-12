#include "backlight.h"

void initBacklight()
{
   // Set the backlight pin as output
   BACKLIGHT_DDR |= (1 << BACKLIGHT_PIN);
}

void setBacklightState(bool backlightOn)
{
   if (backlightOn)
   {
      BACKLIGHT_PORT |= (1 << BACKLIGHT_PIN);
   }
   else
   {
      BACKLIGHT_PORT &= ~(1 << BACKLIGHT_PIN);
   }
}