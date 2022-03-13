//Ara Beigi
//Assignment 6
//This program uses structures to represent a bank account. It implements the following functions:
//typedef account - a structure storing the user's account number (int), name (string of 50 characters max), and balance (double)
//displayInfo(account) takes an account structure and prints out the informationAccount numbers are at most 8 digits and should be padded with 0s if less.
//deposit(account, double) takes an account and a double representing the amount to deposit.  The function verifies that the deposit is positive and take no action if it isn't.  This function does not print anything.  Returns the edited account.
//withdraw(account, double) takes an account and a double representing the amount to withdraw.
//createAccount(char []) takes a name and generates a random account number


/*banking.h*/

#ifndef INC_BANKING_H
#define INC_BANKING_H

typedef struct
{
        int accNum;
        char name[50];
        double balance;
} t_Acc;

void displayInfo(t_Acc);
t_Acc deposit(t_Acc, double);
t_Acc withdraw(t_Acc, double);
t_Acc createAccount(char []);

#endif //INC_BANKING_H
