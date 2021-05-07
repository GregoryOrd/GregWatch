#ifndef TIME_STATE_H
#define TIME_STATE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void incrementTimeStateByOneSecond();
uint8_t seconds();
uint8_t minutes();

#ifdef __cplusplus
}
#endif

#endif