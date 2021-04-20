#ifndef WATCH_H
#define WATCH

#ifdef __cplusplus
extern "C"
{
#endif

   void displayLetter(int startingPosition, char letter);
   void initStopWatchDisplay();
   void setHoursDisplay(int hours);
   void setMinutesDisplay(int minutes);
   char integerToAsciiChar(int integer);

   void delayAndSetMinutes(int minutes);
   void delayandSetHoursAndMinutes(int hours, int minutes);
   void runThroughMinutes();
   void runThroughHour(int hour);
   void runThroughHours();

#ifdef __cplusplus
}
#endif

#endif