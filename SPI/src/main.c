#include "myletters.h"
#include "nokia5110.h"
#include "watch.h"

int main(void)
{
   initSpiInterface();
   enableSlave();
   initNokia5110();
   clearScreen();

   initStopWatchDisplay();

   runThroughHours();
   delayandSetHoursAndMinutes(0, 0);
   disableSlave();
}