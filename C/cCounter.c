//Ara Beigi
//Assignment 3
//This code accepts a user inputted string and counts the number of 'c's which appear in the string.

#include <stdio.h>

int main()
{
	char c;
	int count = 0;
	do
	{
	c=getchar();
	if (c=='c' || c=='C')
	count++;
	} while (c!='\n');
       printf("%d\n", count);
	return 0;
}	

