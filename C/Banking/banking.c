//Ara Beigi
//Assignment 6
//This program uses structures to represent a bank account. It implements the following functions:
//typedef account - a structure storing the user's account number (int), name (string of 50 characters max), and balance (double)
//displayInfo(account) takes an account structure and prints out the informationAccount numbers are at most 8 digits and should be padded with 0s if less.
//deposit(account, double) takes an account and a double representing the amount to deposit.  The function verifies that the deposit is positive and take no action if it isn't.  This function does not print anything.  Returns the edited account.
//withdraw(account, double) takes an account and a double representing the amount to withdraw.
//createAccount(char []) takes a name and generates a random account number


/*banking.c*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "banking.h"

void displayInfo(t_Acc a)
{
  printf("Accountholder: %s", a.name);
  printf("Account number: %08d\n", a.accNum);
  printf("Balance: %.2lf\n\n", a.balance);
}
  
t_Acc deposit(t_Acc a, double d)
{
  if (d>0)
    a.balance+=d;

  return a;
}

t_Acc withdraw(t_Acc a, double w)
{
  if (w>a.balance)
    printf("Insufficient funds\n");
  else if (w>0)
    a.balance-=w;
  return a;
}

t_Acc createAccount(char name[50])
{
  int accountNum = rand()%100000000;
  double bal = 0;
  t_Acc account;

  account.accNum = accountNum;
  account.balance=bal;
  strcpy(account.name,  name);

  return account;
}




