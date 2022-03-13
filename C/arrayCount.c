//Ara Beigi
//Assignment 4
//This program generates an array of length 15 containing random numbers between 0 and 10. It then prints out the contents of the array. Finally, it prompts the user for a number in that range, and prints out the number of times that number appears.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int intArr[15];
	int count = 0;

	srand(time(0));
	for (int i=0; i<15; i++)
	{

		intArr[i] = rand()%11;

	}

	int g;
	scanf("%d", &g);

	for (int j=0; j<15; j++)
	{
		if (intArr[j] == g) 
			count++;
	}

	printf("%d appears %d times\n", g, count);
	return 0;

}
