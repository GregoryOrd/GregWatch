#include <GregTest.h>

#include "../../../communicationProtocol/spi.h"
#include "../../nokia5110Controller.h"

#define X_POS_BOUNDARY 83
#define VALID_X        23
#define INVALID_X      100

#define Y_POS_BOUNDARY 5
#define VALID_Y        2
#define INVALID_Y      9

void willInitNokia5110()
{
   G_EXPECT_CALL(resetSlave);
   G_EXPECT_CALL(transmitCommand);  // 0x21
   G_EXPECT_CALL(transmitCommand);  // 0xC0
   G_EXPECT_CALL(transmitCommand);  // 0x07
   G_EXPECT_CALL(transmitCommand);  // 0x13
   G_EXPECT_CALL(transmitCommand);  // 0x20
   G_EXPECT_CALL(transmitCommand);  // 0x0C

   initNokia5110();
}

void willClearScreen()
{
   for (int i = 0; i < 504; i++)
   {
      G_EXPECT_CALL(transmitData);  // 0x00
   }

   clearScreen();
}

void willReturnValidXPosition_OnBoundary()
{
   G_EXPECT_FALSE(validXPosition(X_POS_BOUNDARY + 1));
   G_EXPECT_TRUE(validXPosition(X_POS_BOUNDARY));
   G_EXPECT_TRUE(validXPosition(X_POS_BOUNDARY - 1));
}

void willReturnValidYPosition()
{
   G_EXPECT_FALSE(validYPosition(Y_POS_BOUNDARY + 1));
   G_EXPECT_TRUE(validYPosition(Y_POS_BOUNDARY));
   G_EXPECT_TRUE(validYPosition(Y_POS_BOUNDARY - 1));
}

void willSetScreenXYWhenGivenValidPosition()
{
   unsigned char x = VALID_X;
   unsigned char y = VALID_Y;

   G_EXPECT_CALL(transmitCommand);  // 0x80 | x
   G_EXPECT_CALL(transmitCommand);  // 0x40 | y

   bool result = setScreenXY(x, y);

   G_EXPECT_TRUE(result);
}

void willNotSetScreenXYWhenGivenInvalidXPosition()
{
   unsigned char x = INVALID_X;
   unsigned char y = VALID_Y;

   bool result = setScreenXY(x, y);

   G_ASSERT_INT_EQ(0, result);
}

void willNotSetScreenXYWhenGivenInvalidYPosition()
{
   unsigned char x = VALID_X;
   unsigned char y = INVALID_Y;

   bool result = setScreenXY(x, y);

   G_ASSERT_INT_EQ(0, result);
}