#ifndef WATCH_H
#define WATCH

static const int MINUTES_TENS_POSITION = 10;
static const int MINUTES_ONES_POSITION = 24;
static const int COLON_POSITION = 38;
static const int SECONDS_TENS_POSITION = 44;
static const int SECONDS_ONES_POSITION = 58;

#ifdef __cplusplus
extern "C"
{
#endif

   void initStopWatch();
   void initStopWatchDisplay();
   void resetStopWatchDisplay();
   void disableStopWatch();
   void setMinutesDisplay(int minutes);
   void setSecondsDisplay(int seconds);
   char integerToAsciiChar(int integer);
   void runThroughMinutes();
   void incrementStopWatchOneSecondAndResetTimerFlag();
   void updateDisplayWithCurrentState();

#ifdef __cplusplus
}
#endif

#endif