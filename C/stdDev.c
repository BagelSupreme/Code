//Ara Beigi
//Assignment_7
//This program takes a text file (from command line) as input. Next it reads the first number (an integer) from the file. It then reads that many floats from the same file and computes the mean and sample standard deviation of the list of floats.  Finally it prints the mean and standard deviation to standard output, rounded to 4 decimal places.


#include <stdio.h>
#include <math.h>

 int main(int argc, char *argv[])
{
	FILE *pFileInput = fopen(argv[1], "r");

	int iNumLines = 0;
	float sum = 0;

	float avg, stdDev, num;

	fscanf(pFileInput,"%d", &iNumLines);
	float fArr[iNumLines];
	 for (int iLoop=0; iLoop<iNumLines; iLoop++)
	 {
		 fscanf(pFileInput, "%f", &num);
		 sum += num;
		 fArr[iLoop] = num;
	 }

	 avg = sum/iNumLines;

	 sum = 0;

	 for (int iLoop=0; iLoop<iNumLines; iLoop++)
	 {
		 sum += pow((fArr[iLoop]-avg), 2);
	 }

	sum /= (iNumLines-1);
	stdDev = sqrt(sum);

	printf("Mean: %.4f\nStandard Deviation:  %.4f\n", avg, stdDev);
	
	return 0;
}
