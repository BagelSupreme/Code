//Ara Beigi
//Assignment 5
//This program implements the following functions:
//factorial(n) takes an integer, n, and recursively computes n!
//combinations(k, n) takes 2 integers, k and n and returns the number of k-sized combinations from n using the factorial() function.  If k > n, it returns 0. 
//cleanint() implements one of the input sanitation methods provided in earlier classes and returns an integer entered by the user.


/*combinations.c*/

#include <stdio.h>
#include "combinations.h"

int factorial(int n)
{
  if (n==1)
    return 1;
  else
    return n * factorial(n-1);
}

int combinations(int k, int n)
{
  if (k>n)
    return 0;
  else
    return factorial(n)/(factorial(k)*factorial(n-k));
}
      
int cleanint()
{
  char line[100];
  int num;

  while(1)
  {
    printf("Enter a number: ");
    fgets(line, sizeof(line), stdin);
    if (sscanf(line, "%d", &num))
      break;
    printf("You did not enter a number.\n");
  }

  return num;
}
