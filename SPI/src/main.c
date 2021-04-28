#include "myletters.h"
#include "nokia5110.h"
#include "watch.h"

int main(void)
{
   initSpiInterface();
   enableSlave();
   initNokia5110();

   initStopWatchDisplay();
   runThroughHours();

   delayAndResetStopWatchDisplay();
   // setHoursDisplay(77);
   // setMinutesDisplay(77);
   disableSlave();
}