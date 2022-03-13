//Ara Beigi
//Assignment 7
//This program takes an inputted string and prints out the reversed string.

/*reverse.c*/

#include <stdio.h>
#include <string.h>
#include "reverse.h"

void strReverse(char *pcszString)
{
  char *pcszStringBegin = pcszString;
  char *pcszStringEnd = pcszString + strlen(pcszString) - 1;
  char *pcszTemp = NULL;
  char cTemp;

  for (int iLoop=0; iLoop<strlen(pcszString)/2; iLoop++)
  {
    cTemp = *pcszStringEnd;
    *pcszStringEnd = *pcszStringBegin;
    *pcszStringBegin = cTemp;
    pcszStringEnd--;
    pcszStringBegin++;
  }

  return;
}
