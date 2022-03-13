//Ara Beigi
//Assignment 2
//This program checks whether an integer value is divisible by 7 or not.

#include <stdio.h>

int main()
{
	int x;
	int input = scanf("%d",&x);
	if (x%7==0)
	{
		printf("%d is divsible by 7\n", x);
	}
	else
	{
		printf("%d is not divisible by 7\n", x);
	}
}
