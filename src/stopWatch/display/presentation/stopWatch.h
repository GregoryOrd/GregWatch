#ifndef WATCH_H
#define WATCH

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

   void delayAndResetStopWatchDisplay();
   void delayAndSetSeconds(int seconds);
   void delayAndSetMinutes(int minutes);
   void runThroughSeconds();
   void runThroughMinute(int minutes);
   void runThroughMinutes();

#ifdef __cplusplus
}
#endif

#endif