#ifndef TIME_STATE_H
#define TIME_STATE_H

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

   void incrementTimeStateByOneSecond();
   uint8_t seconds();
   uint8_t minutes();
   bool paused();
   void setPaused(bool p);
   void togglePaused();

#ifdef __cplusplus
}
#endif

#endif