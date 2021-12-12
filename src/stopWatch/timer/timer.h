#ifndef TIMER_H
#define TIMER_H

#include <stdbool.h>

#ifdef TEST
#include "../../sim/hardwareSim.h"
#else
#include <avr/interrupt.h>
#include <avr/io.h>
#endif

#define HUNDREDTHS_PER_TENTH 10
#define TENTHS_PER_SECOND    10
#define SECONDS_PER_MINUTE   60
#define MINUTES_PER_HOUR     60
#define HOURS_PER_DAY        24
#define MAX_DAYS             30

#ifdef __cplusplus
extern "C"
{
#endif

   void setupTimer();
   void resetTimer();
   void startTimer();
   void stopTimer();
   uint8_t seconds();
   uint8_t minutes();
   bool paused();
   void togglePaused();

#ifdef __cplusplus
}
#endif

#endif