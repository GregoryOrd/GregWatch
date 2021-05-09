#include "timer.h"

#include <stdint.h>

#include "timeState.h"

#define DELAY_INTERRUPTS 100  // 1s

volatile uint8_t flag = 0;

ISR(TIMER0_COMPA_vect)
{
   if (!paused())
   {
      flag++;
   }
}

void resetTimerFlag() { flag = 0; }

void setupTimer()
{
   TCCR0A = 0b00000010;
   TCCR0B = 0b00000101;
   OCR0A = 155; /* (F_CPU / 1024 / 100) - 1 => 10ms */
   TIMSK0 = 0b00000010;

   sei();
}

bool oneSecondElapsed() { return flag == DELAY_INTERRUPTS; }