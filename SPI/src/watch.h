#ifndef WATCH_H
#define WATCH

#ifdef __cplusplus
extern "C"
{
#endif

   void displayLetter(int startingPosition, char letter);
   void initStopWatchDisplay();
   void resetStopWatchDisplay();
   void setHoursDisplay(int hours);
   void setMinutesDisplay(int minutes);
   char integerToAsciiChar(int integer);

   void delayAndResetStopWatchDisplay();
   void delayAndSetMinutes(int minutes);
   void delayAndSetHour(int hours);
   void runThroughMinutes();
   void runThroughHour(int hour);
   void runThroughHours();

#ifdef __cplusplus
}
#endif

#endif