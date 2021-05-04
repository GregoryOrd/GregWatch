#include "stopWatch.h"

#include "../domain/timeDefs.h"
#include "../screenApi/communicationProtocol/spi.h"
#include "../screenApi/deviceController/nokia5110Controller.h"

#ifdef TEST
#include "../../../sim/timeSim.h"
#else
#include <util/delay.h>
#endif

void initStopWatch()
{
   initSpiInterface();
   enableSlave();
   initNokia5110();
   initStopWatchDisplay();
}

void initStopWatchDisplay()
{
   clearScreen();
   setMinutesDisplay(0);
   setSecondsDisplay(0);
   displayLetter(COLON_POSITION, ':');
}

void disableStopWatch()
{
   delayAndResetStopWatchDisplay();
   disableSlave();
}

void resetStopWatchDisplay()
{
   setMinutesDisplay(0);
   setSecondsDisplay(0);
}

void setMinutesDisplay(int minutes)
{
   int tensPosition = minutes / 10;
   int onesPosition = minutes % 10;

   displayLetter(MINUTES_TENS_POSITION, integerToAsciiChar(tensPosition));
   displayLetter(MINUTES_ONES_POSITION, integerToAsciiChar(onesPosition));
}

void setSecondsDisplay(int minutes)
{
   int tensPosition = minutes / 10;
   int onesPosition = minutes % 10;

   displayLetter(SECONDS_TENS_POSITION, integerToAsciiChar(tensPosition));
   displayLetter(SECONDS_ONES_POSITION, integerToAsciiChar(onesPosition));
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

void delayAndSetSeconds(int seconds)
{
   _delay_ms(1000);
   setSecondsDisplay(seconds);
}

void delayAndSetMinutes(int minutes)
{
   _delay_ms(1000);
   setMinutesDisplay(minutes);
}

void runThroughSeconds()
{
   setSecondsDisplay(0);
   for (int i = 1; i < 60; i++)
   {
      delayAndSetSeconds(i);
   }
}

void runThroughMinute(int minute)
{
   delayAndSetMinutes(minute);
   runThroughSeconds();
}

void runThroughMinutes()
{
   for (int i = 0; i < minutesPerHour; i++)
   {
      runThroughMinute(i);
   }
   delayAndSetMinutes(minutesPerHour);
   setSecondsDisplay(0);
}