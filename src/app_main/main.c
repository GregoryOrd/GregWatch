#include "../display/watch.h"
#include "../spi/spi.h"

int main(void)
{
   initSpiInterface();
   enableSlave();
   initNokia5110();

   initStopWatchDisplay();
   runThroughHours();

   delayAndResetStopWatchDisplay();
   disableSlave();
}