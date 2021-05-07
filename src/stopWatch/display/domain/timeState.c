#include "timeState.h"

#include "timeDefs.h"

static uint64_t totalSeconds_ = 0;
static uint8_t seconds_ = 0;
static uint8_t minutes_ = 0;

void incrementTimeStateByOneSecond()
{
   totalSeconds_++;
   seconds_ = totalSeconds_ % secondsPerMinute;
   minutes_ = totalSeconds_ / minutesPerHour;
}

uint8_t seconds() { return seconds_; }

uint8_t minutes() { return minutes_; }