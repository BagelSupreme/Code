//Ara Beigi
//Assignment 5
//This program implements the following functions:
//factorial(n) takes an integer, n, and recursively computes n!
//combinations(k, n) takes 2 integers, k and n and returns the number of k-sized combinations from n using the factorial() function.  If k > n, it returns 0. 
//cleanint() implements one of the input sanitation methods provided in earlier classes and returns an integer entered by the user.

/*combinationsMain.c*/

#include <stdio.h>
#include "combinations.h"

int main()
{
  int k = cleanint();
  int n = cleanint();
  printf("Result: %d\n", combinations(k,n));
}
