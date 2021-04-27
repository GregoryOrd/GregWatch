#include "watch.h"

#include <util/delay.h>

#include "myletters.h"
#include "nokia5110.h"

static const int HOURS_TENS_POSITION = 10;
static const int HOURS_ONES_POSITION = 24;
static const int COLON_POSITION = 38;
static const int MINUTES_TENS_POSITION = 44;
static const int MINUTES_ONES_POSITION = 58;

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

void initStopWatchDisplay()
{
   clearScreen();
   setHoursDisplay(0);
   setMinutesDisplay(0);
   displayLetter(COLON_POSITION, ':');
}

void resetStopWatchDisplay()
{
   setHoursDisplay(0);
   setMinutesDisplay(0);
}

void setHoursDisplay(int hours)
{
   int tensPosition = hours / 10;
   int onesPosition = hours % 10;

   displayLetter(HOURS_TENS_POSITION, integerToAsciiChar(tensPosition));
   displayLetter(HOURS_ONES_POSITION, integerToAsciiChar(onesPosition));
}

void setMinutesDisplay(int minutes)
{
   int tensPosition = minutes / 10;
   int onesPosition = minutes % 10;

   displayLetter(MINUTES_TENS_POSITION, integerToAsciiChar(tensPosition));
   displayLetter(MINUTES_ONES_POSITION, integerToAsciiChar(onesPosition));
}

char integerToAsciiChar(int integer)
{
   char zero = '0';
   return zero + integer;
}

void delayAndResetStopWatchDisplay()
{
   _delay_ms(1000);
   resetStopWatchDisplay();
}

void delayAndSetMinutes(int minutes)
{
   _delay_ms(1000);
   setMinutesDisplay(minutes);
}

void delayAndSetHour(int hours)
{
   _delay_ms(1000);
   setHoursDisplay(hours);
}

void runThroughMinutes()
{
   int tens = 0;
   int ones = 0;
   int maxMinutes = 3;
   int minutesPerHour = (maxMinutes + 1);
   int numDisplays = minutesPerHour * minutesPerHour;

   setMinutesDisplay(0);
   for (int i = 1; i < numDisplays; i++)
   {
      tens = i / minutesPerHour;
      ones = i % minutesPerHour;
      int valueToDisplay = (tens * 10) + ones;
      delayAndSetMinutes(valueToDisplay);
   }
}

void runThroughHour(int hour)
{
   delayAndSetHour(hour);
   runThroughMinutes();
}

void runThroughHours()
{
   int tens = 0;
   int ones = 0;
   int maxHours = 3;
   int hoursPerDay = (maxHours + 1);
   int numDisplays = hoursPerDay * hoursPerDay;

   for (int i = 0; i < numDisplays; i++)
   {
      tens = i / hoursPerDay;
      ones = i % hoursPerDay;
      int valueToDisplay = (tens * 10) + ones;
      runThroughHour(valueToDisplay);
   }
}