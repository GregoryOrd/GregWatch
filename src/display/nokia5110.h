#ifndef NOKIA_5110_H
#define NOKIA_5110_H

#ifdef __cplusplus
extern "C"
{
#endif

   void initNokia5110();
   void clearScreen();
   void setScreenXY(unsigned char x, unsigned char y);

#ifdef __cplusplus
}
#endif

#endif