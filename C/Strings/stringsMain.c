//Ara Beigi
//Assignment 5
//This program implements 2 string function as follows:
//firstMatch(str,c) takes a string str and a char c and returns the first location (index) in str where c occurs, or -1 if c was not found.
//letterMatch(str,c) takes a string str and a char c and removes all instances of the character c from str.  This function should not return anything.

/* stringsMain.c */ 

#include <stdio.h>
#include "moreStrings.h"

int main()
{
  char str1[] = "Hello World!";
  char str2[] = "Two hundred twenty three";
  char c='e';

  printf("%d\n", firstMatch(str1, c));
  printf("%s\n", str1);
  letterMatch(str1, c);
  printf("%s\n", str1);

  printf("%d\n", firstMatch(str2, c));
  printf("%s\n", str2);
  letterMatch(str2, c);
  printf("%s\n", str2);

}
