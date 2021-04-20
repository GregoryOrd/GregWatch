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
   setHoursDisplay(0);
   setMinutesDisplay(0);
   displayLetter(COLON_POSITION, ':');
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

void delayAndSetMinutes(int minutes)
{
   _delay_ms(1000);
   setMinutesDisplay(minutes);
}

void delayandSetHoursAndMinutes(int hours, int minutes)
{
   _delay_ms(1000);
   setMinutesDisplay(minutes);
   setHoursDisplay(hours);
}

void runThroughMinutes()
{
   delayAndSetMinutes(1);
   delayAndSetMinutes(2);
   delayAndSetMinutes(10);
   delayAndSetMinutes(11);
   delayAndSetMinutes(12);
   delayAndSetMinutes(20);
   delayAndSetMinutes(21);
   delayAndSetMinutes(22);
}

void runThroughHour(int hour)
{
   delayandSetHoursAndMinutes(hour, 0);
   runThroughMinutes();
}

void runThroughHours()
{
   runThroughHour(0);
   runThroughHour(1);
   runThroughHour(2);
   runThroughHour(10);
   runThroughHour(11);
   runThroughHour(12);
   runThroughHour(20);
   runThroughHour(21);
   runThroughHour(22);
}