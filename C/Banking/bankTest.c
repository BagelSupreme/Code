//Ara Beigi
//Assignment 6
//This program uses structures to represent a bank account. It implements the following functions:
//typedef account - a structure storing the user's account number (int), name (string of 50 characters max), and balance (double)
//displayInfo(account) takes an account structure and prints out the informationAccount numbers are at most 8 digits and should be padded with 0s if less.
//deposit(account, double) takes an account and a double representing the amount to deposit.  The function verifies that the deposit is positive and take no action if it isn't.  This function does not print anything.  Returns the edited account.
//withdraw(account, double) takes an account and a double representing the amount to withdraw.
//createAccount(char []) takes a name and generates a random account number


/*bankTest.c*/

#include <stdio.h>
#include "banking.h"
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  srand(time(0));

  t_Acc accArr[5];
  char name[50];
  double  d, w;

  for (int i=0; i<5; i++)
  {
    fflush(stdin);
    scanf("%s", name); 
    accArr[i] = createAccount(name);
    displayInfo(accArr[i]);
    scanf("%lf", &d);
    accArr[i]=deposit(accArr[i], d);
    displayInfo(accArr[i]);
    scanf("%lf", &w);
    accArr[i] = withdraw(accArr[i], w);
    displayInfo(accArr[i]);
  }

}  
