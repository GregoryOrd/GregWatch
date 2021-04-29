#include <GregTest.h>

#include "../../sim/hardwareSim.h"
#include "../spi.h"

void firstTest()
{
   PORTB = 0b00000000;
   disableSlave();
   int expected = 7;  // This should fail. Expected should be 4.
   G_ASSERT_INT_EQ(expected, PORTB);
}