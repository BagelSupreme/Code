//Ara Beigi
//Assignment 2
//This program prompts the user with a menu for operations (+, -, *, /, %), takes in 2 numbers, and performs the selected operation.

#include <stdio.h>

int main()
{
	printf("Select an operation (+, -, *, /, %%)\n");
	char x = getchar();
	printf("Enter 2 numbers:\n");
	float y;
	scanf("%f", &y);
	float z;
	scanf("%f", &z);

	if (x == '+')
		printf("%.2f\n", y+z);
	else if (x == '-')
		printf("%.2f\n", y-z);
	else if (x == '*')
		printf("%.2f\n", y*z);
	else if (x == '/')
		printf("%.2f\n", y/z);
	else if (x == '%')
		printf("%d\n", (int) y % (int) z);
}
