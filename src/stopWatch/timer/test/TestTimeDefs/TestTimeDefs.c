#include <GregTest.h>

#include "../../timeDefs.h"

void usesCorrectSecondsPerMinute() { G_ASSERT_UNSIGNED_INT_EQ(60, secondsPerMinute); }

void usesCorrectMinutesPerHours() { G_ASSERT_UNSIGNED_INT_EQ(60, minutesPerHour); }