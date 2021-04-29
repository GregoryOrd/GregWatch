#include "../display/watch.h"

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