//Ara Beigi
//Assignment 3
//This program reads in numbers until the user enters 0, then finds the average.

#include <stdio.h>

int main()
{
	float sum = 0;
	float avg = 0;
	float zeroCheck = 1;
	int userInput;

	for (int i=0; i<zeroCheck; i++)
	{
		if (scanf("%d", &userInput) == 0) {
		            printf("Invalid input\n");
			    zeroCheck++;
 		            while (getchar() != '\n');
 		}
		else {
		sum+=userInput;
		if(userInput != 0)
		zeroCheck++;
		avg++;
		}
		
	}

	avg = sum/(avg-1);
	printf("%.3f\n", avg);
	return 0;
}


