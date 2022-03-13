//Ara Beigi
//Assignment 4
//This program reads in and concatenates 2 strings. It then prints out the concatenated string.


#include <stdio.h>

int main()
{
	char s1[200];
	char s2[100];
	int s1Len = 0;
	int s2Len = 0;

		fgets(s1, 200, stdin);
		for (int i=0; i<200; i++)
	{
		s1Len++;
		if (s1[i] == '\n')
			break;
	}
		fgets(s2, 100, stdin);
		for (int j=0; j<100; j++)
        {
		s2Len++;
		if (s2[j] == '\n')
			break;
	}
	int s2Temp = 0;
	for (int k=s1Len-1; k<s1Len+s2Len-1; k++)
	{
		s1[k] = s2[s2Temp];
		s2Temp++;
	}
		printf("%s", s1);
	return 0;
}
	
