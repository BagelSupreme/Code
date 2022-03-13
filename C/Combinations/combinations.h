//Ara Beigi
//Assignment 5
//This program implements the following functions:
//factorial(n) takes an integer, n, and recursively computes n!
//combinations(k, n) takes 2 integers, k and n and returns the number of k-sized combinations from n using the factorial() function.  If k > n, it returns 0. 
//cleanint() implements one of the input sanitation methods provided in earlier classes and returns an integer entered by the user.


/*combinations.h*/

#ifndef INC_CONBINATIONS_H
#define INC_COMBINATIONS_H

int factorial(int);
int combinations(int, int);
int cleanint();

#endif //INC_COMBINATIONS_H
