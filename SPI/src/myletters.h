#ifndef MY_LETTERS_H
#define MY_LETTERS_H

typedef struct letterData
{
   const unsigned char* upperBank;
   const unsigned char* lowerBank;
   int numBytes;
} letterData;

const letterData getLetterData(char letter);

#endif