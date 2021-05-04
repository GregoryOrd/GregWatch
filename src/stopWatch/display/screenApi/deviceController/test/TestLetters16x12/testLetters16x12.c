#include <GregTest.h>

#include "../../letters16x12.h"

void willGetZero()
{
   const unsigned char expectedUpper[12] = {0xFC, 0xFC, 0xFC, 0xFC, 0x3C, 0x3C, 0x3C, 0x3C, 0xFC, 0xFC, 0xFC, 0xFC};
   const unsigned char expectedLower[12] = {0x3F, 0x3F, 0x3F, 0x3F, 0x3C, 0x3C, 0x3C, 0x3C, 0x3F, 0x3F, 0x3F, 0x3F};
   letterData expected;
   expected.upperBank = expectedUpper;
   expected.lowerBank = expectedLower;
   expected.numBytes = 12;

   letterData actual = getLetterData('0');

   G_ASSERT_INT_EQ(expected.numBytes, actual.numBytes);
   for (int i = 0; i < expected.numBytes; i++)
   {
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.upperBank[i], actual.upperBank[i]);
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.lowerBank[i], actual.lowerBank[i]);
   }
}

void willGetOne()
{
   const unsigned char expectedUpper[12] = {0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00};
   const unsigned char expectedLower[12] = {0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00};
   letterData expected;
   expected.upperBank = expectedUpper;
   expected.lowerBank = expectedLower;
   expected.numBytes = 12;

   letterData actual = getLetterData('1');

   G_ASSERT_INT_EQ(expected.numBytes, actual.numBytes);
   for (int i = 0; i < expected.numBytes; i++)
   {
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.upperBank[i], actual.upperBank[i]);
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.lowerBank[i], actual.lowerBank[i]);
   }
}

void willGetTwo()
{
   const unsigned char expectedUpper[12] = {0x00, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x00};
   const unsigned char expectedLower[12] = {0x00, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x39, 0x39, 0x39, 0x39, 0x39, 0x00};
   letterData expected;
   expected.upperBank = expectedUpper;
   expected.lowerBank = expectedLower;
   expected.numBytes = 12;

   letterData actual = getLetterData('2');

   G_ASSERT_INT_EQ(expected.numBytes, actual.numBytes);
   for (int i = 0; i < expected.numBytes; i++)
   {
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.upperBank[i], actual.upperBank[i]);
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.lowerBank[i], actual.lowerBank[i]);
   }
}

void willGetThree()
{
   const unsigned char expectedUpper[12] = {0x00, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x00};
   const unsigned char expectedLower[12] = {0x00, 0x39, 0x39, 0x39, 0x39, 0x39, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x00};
   letterData expected;
   expected.upperBank = expectedUpper;
   expected.lowerBank = expectedLower;
   expected.numBytes = 12;

   letterData actual = getLetterData('3');

   G_ASSERT_INT_EQ(expected.numBytes, actual.numBytes);
   for (int i = 0; i < expected.numBytes; i++)
   {
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.upperBank[i], actual.upperBank[i]);
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.lowerBank[i], actual.lowerBank[i]);
   }
}

void willGetFour()
{
   const unsigned char expectedUpper[12] = {0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00};
   const unsigned char expectedLower[12] = {0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x3F, 0x3F, 0x3F, 0x3F, 0x00};
   letterData expected;
   expected.upperBank = expectedUpper;
   expected.lowerBank = expectedLower;
   expected.numBytes = 12;

   letterData actual = getLetterData('4');

   G_ASSERT_INT_EQ(expected.numBytes, actual.numBytes);
   for (int i = 0; i < expected.numBytes; i++)
   {
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.upperBank[i], actual.upperBank[i]);
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.lowerBank[i], actual.lowerBank[i]);
   }
}

void willGetFive()
{
   const unsigned char expectedUpper[12] = {0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x00};
   const unsigned char expectedLower[12] = {0x00, 0x39, 0x39, 0x39, 0x39, 0x39, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x00};
   letterData expected;
   expected.upperBank = expectedUpper;
   expected.lowerBank = expectedLower;
   expected.numBytes = 12;

   letterData actual = getLetterData('5');

   G_ASSERT_INT_EQ(expected.numBytes, actual.numBytes);
   for (int i = 0; i < expected.numBytes; i++)
   {
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.upperBank[i], actual.upperBank[i]);
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.lowerBank[i], actual.lowerBank[i]);
   }
}

void willGetSix()
{
   const unsigned char expectedUpper[12] = {0x00, 0xFC, 0xFC, 0xFC, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x00};
   const unsigned char expectedLower[12] = {0x00, 0x3F, 0x3F, 0x3F, 0x39, 0x39, 0x39, 0x39, 0x3F, 0x3F, 0x3F, 0x00};
   letterData expected;
   expected.upperBank = expectedUpper;
   expected.lowerBank = expectedLower;
   expected.numBytes = 12;

   letterData actual = getLetterData('6');

   G_ASSERT_INT_EQ(expected.numBytes, actual.numBytes);
   for (int i = 0; i < expected.numBytes; i++)
   {
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.upperBank[i], actual.upperBank[i]);
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.lowerBank[i], actual.lowerBank[i]);
   }
}

void willGetSeven()
{
   const unsigned char expectedUpper[12] = {0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x9C, 0xDC, 0xFC, 0xFC, 0xFC, 0x7C};
   const unsigned char expectedLower[12] = {0x00, 0x30, 0x38, 0x3C, 0x3E, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00};
   letterData expected;
   expected.upperBank = expectedUpper;
   expected.lowerBank = expectedLower;
   expected.numBytes = 12;

   letterData actual = getLetterData('7');

   G_ASSERT_INT_EQ(expected.numBytes, actual.numBytes);
   for (int i = 0; i < expected.numBytes; i++)
   {
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.upperBank[i], actual.upperBank[i]);
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.lowerBank[i], actual.lowerBank[i]);
   }
}

void willGetEight()
{
   const unsigned char expectedUpper[12] = {0x00, 0xFC, 0xFC, 0xFC, 0x9C, 0x9C, 0x9C, 0x9C, 0xFC, 0xFC, 0xFC, 0x00};
   const unsigned char expectedLower[12] = {0x00, 0x3F, 0x3F, 0x3F, 0x39, 0x39, 0x39, 0x39, 0x3F, 0x3F, 0x3F, 0x00};
   letterData expected;
   expected.upperBank = expectedUpper;
   expected.lowerBank = expectedLower;
   expected.numBytes = 12;

   letterData actual = getLetterData('8');

   G_ASSERT_INT_EQ(expected.numBytes, actual.numBytes);
   for (int i = 0; i < expected.numBytes; i++)
   {
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.upperBank[i], actual.upperBank[i]);
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.lowerBank[i], actual.lowerBank[i]);
   }
}

void willGetNine()
{
   const unsigned char expectedUpper[12] = {0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x9C, 0x9C, 0xFC, 0xFC, 0xFC, 0xFC, 0x00};
   const unsigned char expectedLower[12] = {0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x3F, 0x3F, 0x3F, 0x3F, 0x00};
   letterData expected;
   expected.upperBank = expectedUpper;
   expected.lowerBank = expectedLower;
   expected.numBytes = 12;

   letterData actual = getLetterData('9');

   G_ASSERT_INT_EQ(expected.numBytes, actual.numBytes);
   for (int i = 0; i < expected.numBytes; i++)
   {
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.upperBank[i], actual.upperBank[i]);
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.lowerBank[i], actual.lowerBank[i]);
   }
}

void willGetColon()
{
   const unsigned char expectedUpper[4] = {0x3C, 0x3C, 0x3C, 0x3C};
   const unsigned char expectedLower[4] = {0x3C, 0x3C, 0x3C, 0x3C};
   letterData expected;
   expected.upperBank = expectedUpper;
   expected.lowerBank = expectedLower;
   expected.numBytes = 4;

   letterData actual = getLetterData(':');

   G_ASSERT_INT_EQ(expected.numBytes, actual.numBytes);
   for (int i = 0; i < expected.numBytes; i++)
   {
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.upperBank[i], actual.upperBank[i]);
      G_ASSERT_UNSIGNED_CHAR_EQ(expected.lowerBank[i], actual.lowerBank[i]);
   }
}