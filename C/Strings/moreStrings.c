//Ara Beigi
//Assignment 5
//This program implements 2 string function as follows:
//firstMatch(str,c) takes a string str and a char c and returns the first location (index) in str where c occurs, or -1 if c was not found.
//letterMatch(str,c) takes a string str and a char c and removes all instances of the character c from str.  This function should not return anything.

/* moreStrings.c */

#include <stdio.h>
#include "moreStrings.h"

int firstMatch(char str[], char c)
{
  int i = 0;
  while (str[i]!='\0')
  {
    if (str[i] == c)
      return i;
    else 
      i++;
  }
  return -1;
}

void letterMatch(char str[], char c)
{
  int len=0;
  while (str[len]!='\0')
    len++;

  int index=0;

  for (int i=0; i<len; i++)
  {
    if (str[i] != c)
    {
      str[index] = str[i];
      index++;
    }
  }
  str[index] = '\0';
}
