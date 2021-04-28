#include "watch.h"

#include <util/delay.h>

#include "myletters.h"
#include "nokia5110.h"

static const int HOURS_TENS_POSITION = 10;
static const int HOURS_ONES_POSITION = 24;
static const int COLON_POSITION = 38;
static const int MINUTES_TENS_POSITION = 44;
static const int MINUTES_ONES_POSITION = 58;

static const int hoursPerDay = 24;
static const int minutesPerHour = 60;

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
   setMinutesDisplay(0);
   for (int i = 1; i < minutesPerHour; i++)
   {
      delayAndSetMinutes(i % minutesPerHour);
   }
}

void runThroughHour(int hour)
{
   delayAndSetHour(hour);
   runThroughMinutes();
}

void runThroughHours()
{
   for (int i = 0; i < hoursPerDay; i++)
   {
      runThroughHour(i % hoursPerDay);
   }
   delayAndSetHour(hoursPerDay);
   setMinutesDisplay(0);
}