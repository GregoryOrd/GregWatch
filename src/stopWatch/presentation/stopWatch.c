#include "stopWatch.h"

#include "../deviceDrivers/backlight/backlight.h"
#include "../deviceDrivers/buttons/buttons.h"
#include "../deviceDrivers/display/communicationProtocol/spi.h"
#include "../deviceDrivers/display/deviceController/nokia5110Controller.h"
#include "../deviceDrivers/lightSensor/lightSensor.h"
#include "../timer/timer.h"

#ifdef TEST
#include "../../sim/hardwareSim.h"
#else
#include <avr/interrupt.h>
#endif

extern uint8_t lightSensorValue;

void initStopWatch()
{
   sei();
   initButtons();
   setupTimer();
   initSpiInterface();
   enableSlave();
   initNokia5110();
   initStopWatchDisplay();
   startADCLightSensor();
}

void initStopWatchDisplay()
{
   clearScreen();
   setMinutesDisplay(0);
   setSecondsDisplay(0);
   displayLetter(COLON_POSITION, ':');
   initBacklight();
   setBacklightState(false);
}

void disableStopWatch()
{
   resetStopWatchDisplay();
   disableSlave();
}

void resetStopWatchDisplay() { resetTimer(); }

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

void updateDisplayWithCurrentState()
{
   setMinutesDisplay(minutes());
   setSecondsDisplay(seconds());
}

void runThroughMinutes()
{
   while (true)
   {
      updateDisplayWithCurrentState();

      if (minutes() >= 60)
      {
         break;
      }

      if (lightSensorValue < 5)
      {
         setBacklightState(true);
      }
      else
      {
         setBacklightState(false);
      }
   }
}