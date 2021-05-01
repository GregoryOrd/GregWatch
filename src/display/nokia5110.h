#ifndef NOKIA_5110_H
#define NOKIA_5110_H

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

#ifdef __cplusplus
}
#endif

#endif