#include "stopWatch.h"

#include "../backlight/backlight.h"
#include "../buttons/buttons.h"
#include "../display/communicationProtocol/spi.h"
#include "../display/deviceController/nokia5110Controller.h"
#include "../lightSensor/lightSensor.h"
#include "../timer/timeDefs.h"
#include "../timer/timeState.h"
#include "../timer/timer.h"

static bool stopWatchDoneFlag = false;
extern uint8_t lightSensorValue;

void initStopWatch()
{
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
   // initBacklight();
   // setBacklightState(false);
}

void disableStopWatch()
{
   resetStopWatchDisplay();
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

void incrementStopWatchOneSecondAndResetTimerFlag()
{
   incrementTimeStateByOneSecond();
   updateDisplayWithCurrentState();
   resetTimerFlag();
}

void updateDisplayWithCurrentState()
{
   setMinutesDisplay(minutes());
   setSecondsDisplay(seconds());
}

void runThroughMinutes()
{
   while (!stopWatchDoneFlag)
   {
      if (oneSecondElapsed())
      {
         incrementStopWatchOneSecondAndResetTimerFlag();
      }
      if (minutes() >= 60)
      {
         stopWatchDoneFlag = true;
      }

      /*if (lightSensorValue < 5)
      {
         setBacklightState(true);
      }
      else
      {
         setBacklightState(false);
      }*/
   }
}