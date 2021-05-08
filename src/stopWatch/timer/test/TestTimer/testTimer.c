#include <GregTest.h>

#include "../../../../sim/hardwareSim.h"
#include "../../timer.h"

void willSetupTimer()
{
   TCCR0A = 0x00;
   TCCR0B = 0x00;
   OCR0A = 0x00;
   TIMSK0 = 0x00;

   G_EXPECT_CALL(sei);

   setupTimer();

   G_ASSERT_INT_EQ(2, TCCR0A);
   G_ASSERT_INT_EQ(5, TCCR0B);
   G_ASSERT_INT_EQ(155, OCR0A);
   G_ASSERT_INT_EQ(2, TIMSK0);
}