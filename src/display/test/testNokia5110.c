#include <GregTest.h>

#include "../nokia5110.h"

#define X_POS_BOUNDARY 83
#define VALID_X        23
#define INVALID_X      100

#define Y_POS_BOUNDARY 5
#define VALID_Y        2
#define INVALID_Y      9

void willInitNokia5110()
{
   /*
    InSequence s;
    EXPECT_CALL(resetSlave());
    EXPECT_CALL(transmitCommand(0x21));
    EXPECT_CALL(transmitCommand(0xC0));
    EXPECT_CALL(transmitCommand(0x07));
    EXPECT_CALL(transmitCommand(0x13));
    EXPECT_CALL(transmitCommand(0x20));
    EXPECT_CALL(transmitCommand(0x0C));

    initNokia5110();
   */
}

void willClearScreen()
{
   /*
   EXPECT_CALL(transmitData(0x00)).Times(504);

   clearScreen();
   */
}

void willReturnValidXPosition_OnBoundary()
{
   G_ASSERT_INT_EQ(0, validXPosition(X_POS_BOUNDARY + 1));
   G_ASSERT_INT_EQ(1, validXPosition(X_POS_BOUNDARY));
   G_ASSERT_INT_EQ(1, validXPosition(X_POS_BOUNDARY - 1));

   // Switch when GregTest adds support for bool comparisions
   //    G_ASSERT_BOOL_EQ(false, validXPosition(X_POS_BOUNDARY + 1));
   //    G_ASSERT_BOOL_EQ(true, validXPosition(X_POS_BOUNDARY));
   //    G_ASSERT_BOOL_EQ(true, validXPosition(X_POS_BOUNDARY - 1));
}

void willReturnValidYPosition()
{
   G_ASSERT_INT_EQ(0, validYPosition(Y_POS_BOUNDARY + 1));
   G_ASSERT_INT_EQ(1, validYPosition(Y_POS_BOUNDARY));
   G_ASSERT_INT_EQ(1, validYPosition(Y_POS_BOUNDARY - 1));

   // Switch when GregTest adds support for bool comparisions
   //    G_ASSERT_BOOL_EQ(false, validYPosition(Y_POS_BOUNDARY + 1));
   //    G_ASSERT_BOOL_EQ(true, validYPosition(Y_POS_BOUNDARY));
   //    G_ASSERT_BOOL_EQ(true, validYPosition(Y_POS_BOUNDARY - 1));
}

void willSetScreenXYWhenGivenValidPosition()
{
   unsigned char x = VALID_X;
   unsigned char y = VALID_Y;

   // Uncomment when we have expect call support from GregTest
   //    EXPECT_CALL(transmitCommand(0x80 | x));
   //    EXPECT_CALL(transmitCommand(0x40 | y));

   bool result = setScreenXY(x, y);

   G_ASSERT_INT_EQ(1, result);
   // Switch the assert when we have support from GregTest
   // G_ASSERT_TRUE(result);
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