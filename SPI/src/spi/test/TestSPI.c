#include <GregTest.h>

#include "../../sim/hardwareSim.h"
#include "../spi.h"

void willDisableSlave()
{
   PORTB = 0b00000000;
   disableSlave();
   int expected = (1 << SS);
   G_ASSERT_INT_EQ(expected, PORTB);
}