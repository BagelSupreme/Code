//Ara Beigi
//Assignment 3
//This program generates a random integer between 1 and 10 (inclusive), prompts the user for a guess, and tells the user if they guessed correctly, too high, or too low.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0)); 
	int r = rand() % 10 + 1;
	int guess;
	int guessStatus = 0;
	do
	{
		printf("Please enter an integer between 0 and 10\n");
		if (scanf("%d", &guess) == 0) {
 		            printf("Invalid input\n");
 		            while (getchar() != '\n');
 		 }
		else if (guess < 0 || guess > 10)
			printf("Make sure your guess is between 0 and 10. Try again!\n");
		else if ((int)guess < r)
			printf("Too low! Try again!\n");
		 else if ((int)guess > r)
                        printf("Too high! Try again!\n");

		else if ((int)guess == r)
				{
			printf("Well done! the number was %d\n", r);
			guessStatus = 1;
				}
	} while (guessStatus == 0);
	return 0;
}
