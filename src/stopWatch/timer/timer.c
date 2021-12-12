#include "timer.h"

#include <stdint.h>

//////////////////////////////////////////////////////////////////////
//              Private Data and Function Prototypes                //
//////////////////////////////////////////////////////////////////////
static uint8_t hundredths_ = 0;
static uint8_t tenths_ = 0;
static uint8_t seconds_ = 0;
static uint8_t minutes_ = 0;
static uint8_t hours_ = 0;
static uint8_t days_ = 0;
static bool paused_ = true;

ISR(TIMER1_COMPA_vect)
{
   if (!paused_)
   {
      hundredths_++;
      if (hundredths_ == HUNDREDTHS_PER_TENTH)
      {
         hundredths_ = 0;
         tenths_++;
         if (tenths_ == TENTHS_PER_SECOND)
         {
            tenths_ = 0;
            seconds_++;
            if (seconds_ == SECONDS_PER_MINUTE)
            {
               seconds_ = 0;
               minutes_++;
               if (minutes_ == MINUTES_PER_HOUR)
               {
                  minutes_ = 0;
                  hours_++;
                  if (hours_ == HOURS_PER_DAY)
                  {
                     hours_ = 0;
                     days_++;
                     if (days_ == MAX_DAYS)
                     {
                        days_ = 0;
                     }
                  }
               }
            }
         }
      }
   }
}

void setupTimer()
{
   // Normal Port Operation - This is the MCUs default, but setting here for safety
   TCCR1A &= ~(1 << COM1A1);
   TCCR1A &= ~(1 << COM1A0);
   TCCR1A &= ~(1 << COM1B1);
   TCCR1A &= ~(1 << COM1B1);

   // Set waveform generation mode - Clear Timer on Compare Match (CTC) mode
   TCCR1B &= ~(1 << WGM13);
   TCCR1B |= (1 << WGM12);
   TCCR1A &= ~(1 << WGM11);
   TCCR1A &= ~(1 << WGM10);

   // Turn off input capture noise canceller - This is the MCUs default, but setting here for safety
   TCCR1B &= ~(1 << ICNC1);

   // Set clock source - Use F_CPU/64 from prescaler
   TCCR1B &= ~(1 << CS12);
   TCCR1B |= (1 << CS11);
   TCCR1B |= (1 << CS10);

   // Set output compare register - (F_CPU / 64) + 9 => 1 hundreth of a second
   // +9 found through some testing, accounts for system being non-ideal
   OCR1A = 1259;

   // Set timer interrupt mask register - Enable Output Compare A Match Interrupt
   TIMSK1 |= (1 << OCIE1A);
}

void resetTimer()
{
   hundredths_ = 0;
   tenths_ = 0;
   seconds_ = 0;
   minutes_ = 0;
   hours_ = 0;
}

void startTimer() { paused_ = false; }

void stopTimer() { paused_ = true; }

uint8_t seconds() { return seconds_; }

uint8_t minutes() { return minutes_; }

bool paused() { return paused_; }

void togglePaused() { paused_ = !paused_; }