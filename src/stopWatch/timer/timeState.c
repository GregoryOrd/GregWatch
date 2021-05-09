#include "timeState.h"

#include "timeDefs.h"

static uint64_t totalSeconds_ = 0;
static uint8_t seconds_ = 0;
static uint8_t minutes_ = 0;
static bool paused_ = false;

void incrementTimeStateByOneSecond()
{
   totalSeconds_++;
   seconds_ = totalSeconds_ % secondsPerMinute;
   minutes_ = totalSeconds_ / minutesPerHour;
}

uint8_t seconds() { return seconds_; }

uint8_t minutes() { return minutes_; }

bool paused() { return paused_; }

void setPaused(bool p) { paused_ = p; }

void togglePaused() { paused_ = !paused_; }