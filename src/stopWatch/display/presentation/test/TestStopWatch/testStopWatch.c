#include <GregTest.h>

#include "../../../screenApi/communicationProtocol/spi.h"
#include "../../../screenApi/deviceController/nokia5110Controller.h"
#include "../../stopWatch.h"
#include "stopWatchTestHelper.h"

void willInitStopWatch()
{
   G_EXPECT_CALL(initSpiInterface);
   G_EXPECT_CALL(enableSlave);
   G_EXPECT_CALL(initNokia5110);
   G_EXPECT_CALL(initStopWatchDisplay);

   initStopWatch();
}

void willInitStopWatchDisplay()
{
   G_EXPECT_CALL(clearScreen);
   G_EXPECT_CALL(setMinutesDisplay);  // 0
   G_EXPECT_CALL(setSecondsDisplay);  // 0
   G_EXPECT_CALL(displayLetter);      // (COLON_POSITION, :)

   initStopWatchDisplay();
}

void willResetStopWatchDisplay()
{
   G_EXPECT_CALL(setMinutesDisplay);  // 0
   G_EXPECT_CALL(setSecondsDisplay);  // 0

   resetStopWatchDisplay();
}

void willDisableStopWatch()
{
   G_EXPECT_CALL(delayAndResetStopWatchDisplay);
   G_EXPECT_CALL(disableSlave);

   disableStopWatch();
}

void willSetMinutesDisplay()
{
   int minutes = anonymousInteger();  // Anonymous value
   int tensPosition = minutes / 10;
   int onesPosition = minutes % 10;

   G_EXPECT_CALL(displayLetter);  // (MINUTES_TENS_POSITION, integerToAsciiChar(tensPosition))
   G_EXPECT_CALL(displayLetter);  // (MINUTES_ONES_POSITION, integerToAsciiChar(onesPosition))

   setMinutesDisplay(minutes);
}

void willSetSecondsDisplay()
{
   int seconds = anonymousInteger();  // Anonymous value
   int tensPosition = seconds / 10;
   int onesPosition = seconds % 10;

   G_EXPECT_CALL(displayLetter);  // (SECONDS_TENS_POSITION, integerToAsciiChar(tensPosition))
   G_EXPECT_CALL(displayLetter);  // (SECONDS_ONES_POSITION, integerToAsciiChar(onesPosition))

   setMinutesDisplay(seconds);
}

void willConvertIntegerToAsciiChar()
{
   for (int i = 0; i <= 9; i++)
   {
      char expected = charFromSingleDigitIntegerSwitchCase(i);
      char actual = integerToAsciiChar(i);

      G_ASSERT_CHAR_EQ(expected, actual);
   }
}

void willDelayAndResetStopWatchDisplay()
{
   G_EXPECT_CALL(_delay_ms);  // 1000
   G_EXPECT_CALL(resetStopWatchDisplay);

   delayAndResetStopWatchDisplay();
}

void willDelayAndSetSeconds()
{
   int seconds = anonymousInteger();

   G_EXPECT_CALL(_delay_ms);          // 1000
   G_EXPECT_CALL(setSecondsDisplay);  // seconds

   delayAndSetSeconds(seconds);
}

void willDelayAndSetMinutes()
{
   int minutes = anonymousInteger();

   G_EXPECT_CALL(_delay_ms);          // 1000
   G_EXPECT_CALL(setMinutesDisplay);  // seconds

   delayAndSetMinutes(minutes);
}

void willRunThroughSeconds()
{
   G_EXPECT_CALL(setSecondsDisplay);  // 0
   for (int i = 1; i < 60; i++)
   {
      G_EXPECT_CALL(delayAndSetSeconds);  // i
   }

   runThroughSeconds();
}

void willRunThroughASingleMinute()
{
   int minute = anonymousInteger();

   G_EXPECT_CALL(delayAndSetMinutes);  // minute
   G_EXPECT_CALL(runThroughSeconds);

   runThroughMinute(minute);
}
