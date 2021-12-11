#ifndef NOKIA_5110_CONTROLLER_H
#define NOKIA_5110_CONTROLLER_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

   void initNokia5110();
   void clearScreen();
   bool setScreenXY(unsigned char x, unsigned char y);
   bool validXPosition(unsigned char x);
   bool validYPosition(unsigned char y);
   void displayLetter(int startingPosition, char letter);

#ifdef __cplusplus
}
#endif

#endif