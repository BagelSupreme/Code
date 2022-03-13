//Ara Beigi
//Assignment 4
//This program takes an integer array of size 10 as input, removes duplicates, and outputs that array.


#include <stdio.h>
#include <stdlib.h>



int main()
{
	int intArr[10];
	int arrLen=10;
	int temp;

	for (int i=0; i<arrLen; i++)
	{
	  if (scanf("%d", &temp) == 0) 
	  {
             printf("Invalid input.\n");
	     i--;
             while (getchar() != '\n');
 	  }
	  else
	     intArr[i]=temp;
	}

	for (int j=0; j<arrLen; j++)
	{
          for (int k=j+1; k<arrLen; k++)
          {
            while (intArr[j] == intArr[k])
            {
              for (int l=k; l<arrLen; l++)
              {
                intArr[l]=intArr[l+1];
              }
              arrLen--;
            }
          }
	}

	printf("\n");
	for (int m=0; m<arrLen; m++)
	{
		printf("%d ", intArr[m]);
	}
	printf("\n");

	return 0;
}
				

