#include "myletters.h"

#define NUMBER_WIDTH 12
#define COLON_WIDTH  4

static const unsigned char ZERO_UPPER[12] = {0xFC, 0xFC, 0xFC, 0xFC, 0x3C, 0x3C, 0x3C, 0x3C, 0xFC, 0xFC, 0xFC, 0xFC};
static const unsigned char ZERO_LOWER[12] = {0x3F, 0x3F, 0x3F, 0x3F, 0x3C, 0x3C, 0x3C, 0x3C, 0x3F, 0x3F, 0x3F, 0x3F};

static const unsigned char ONE_UPPER[12] = {0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00};
static const unsigned char ONE_LOWER[12] = {0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00};

static const unsigned char TWO_UPPER[12] = {0x00, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x00};
static const unsigned char TWO_LOWER[12] = {0x00, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x39, 0x39, 0x39, 0x39, 0x39, 0x00};

static const unsigned char THREE_UPPER[12] = {0x00, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x00};
static const unsigned char THREE_LOWER[12] = {0x00, 0x39, 0x39, 0x39, 0x39, 0x39, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x00};

static const unsigned char FOUR_UPPER[12] = {0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00};
static const unsigned char FOUR_LOWER[12] = {0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x3F, 0x3F, 0x3F, 0x3F, 0x00};

static const unsigned char FIVE_UPPER[12] = {0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x00};
static const unsigned char FIVE_LOWER[12] = {0x00, 0x39, 0x39, 0x39, 0x39, 0x39, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x00};

static const unsigned char SIX_UPPER[12] = {0x00, 0xFC, 0xFC, 0xFC, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x00};
static const unsigned char SIX_LOWER[12] = {0x00, 0x3F, 0x3F, 0x3F, 0x39, 0x39, 0x39, 0x39, 0x3F, 0x3F, 0x3F, 0x00};

static const unsigned char SEVEN_UPPER[12] = {0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x9C, 0xDC, 0xFC, 0xFC, 0xFC, 0x7C};
static const unsigned char SEVEN_LOWER[12] = {0x00, 0x30, 0x38, 0x3C, 0x3E, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00};

static const unsigned char EIGHT_UPPER[12] = {0x00, 0xFC, 0xFC, 0xFC, 0x9C, 0x9C, 0x9C, 0x9C, 0xFC, 0xFC, 0xFC, 0x00};
static const unsigned char EIGHT_LOWER[12] = {0x00, 0x3F, 0x3F, 0x3F, 0x39, 0x39, 0x39, 0x39, 0x3F, 0x3F, 0x3F, 0x00};

static const unsigned char NINE_UPPER[12] = {0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x9C, 0x9C, 0xFC, 0xFC, 0xFC, 0xFC, 0x00};
static const unsigned char NINE_LOWER[12] = {0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x3F, 0x3F, 0x3F, 0x3F, 0x00};

static const unsigned char COLON_UPPER[4] = {0x3C, 0x3C, 0x3C, 0x3C};
static const unsigned char COLON_LOWER[4] = {0x3C, 0x3C, 0x3C, 0x3C};

const letterData getLetterData(char letter)
{
   letterData data;
   switch (letter)
   {
      case '0':
         data.upperBank = ZERO_UPPER;
         data.lowerBank = ZERO_LOWER;
         data.numBytes = NUMBER_WIDTH;
         break;
      case '1':
         data.upperBank = ONE_UPPER;
         data.lowerBank = ONE_LOWER;
         data.numBytes = NUMBER_WIDTH;
         break;
      case '2':
         data.upperBank = TWO_UPPER;
         data.lowerBank = TWO_LOWER;
         data.numBytes = NUMBER_WIDTH;
         break;
      case '3':
         data.upperBank = THREE_UPPER;
         data.lowerBank = THREE_LOWER;
         data.numBytes = NUMBER_WIDTH;
         break;
      case '4':
         data.upperBank = FOUR_UPPER;
         data.lowerBank = FOUR_LOWER;
         data.numBytes = NUMBER_WIDTH;
         break;
      case '5':
         data.upperBank = FIVE_UPPER;
         data.lowerBank = FIVE_LOWER;
         data.numBytes = NUMBER_WIDTH;
         break;
      case '6':
         data.upperBank = SIX_UPPER;
         data.lowerBank = SIX_LOWER;
         data.numBytes = NUMBER_WIDTH;
         break;
      case '7':
         data.upperBank = SEVEN_UPPER;
         data.lowerBank = SEVEN_LOWER;
         data.numBytes = NUMBER_WIDTH;
         break;
      case '8':
         data.upperBank = EIGHT_UPPER;
         data.lowerBank = EIGHT_LOWER;
         data.numBytes = NUMBER_WIDTH;
         break;
      case '9':
         data.upperBank = NINE_UPPER;
         data.lowerBank = NINE_LOWER;
         data.numBytes = NUMBER_WIDTH;
         break;
      case ':':
         data.upperBank = COLON_UPPER;
         data.lowerBank = COLON_LOWER;
         data.numBytes = COLON_WIDTH;
         break;
   }

   return data;
}