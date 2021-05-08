#ifndef LETTERS_16X12_H
#define LETTERS_16X12_H

typedef struct letterData
{
   const unsigned char* upperBank;
   const unsigned char* lowerBank;
   int numBytes;
} letterData;

const letterData getLetterData(char letter);

#endif