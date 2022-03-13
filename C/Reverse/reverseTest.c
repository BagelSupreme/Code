//Ara Beigi
//Assignment 7
//This program takes an inputted string and prints out the reversed string.

/*reverseTest.c*/

#include <stdio.h>
#include <string.h>
#include "reverse.h"

int main(int argc, char *argv[])
{
  if (argc != 3)
  {
    printf("Syntax: %s <Input File> <Output File>\n", argv[0]);
    return 0;
  }

  FILE *pFileInput = NULL;
  FILE *pFileOutput = NULL;

  char *pcszInputFile = argv[1];
  char *pcszOutputFile = argv[2];

  char acszLine[256];
  acszLine[0] = '\0';

  int iNumLines = 0;

  if ((pFileInput = fopen(pcszInputFile, "r")) == NULL)
  {
    printf("Could not open %s for reading -- Exiting...\n",
	   pcszInputFile);
    return 1;
  }

  if ((pFileOutput = fopen(pcszOutputFile, "w")) == NULL)
  {
    printf("Could not open %s for writing -- Exiting...\n",
	   pcszOutputFile);
    return 1;
  }

  fscanf(pFileInput, "%d\n", &iNumLines);
  for (int iLoop=0; iLoop<iNumLines; iLoop++)
  {
    if (fgets(acszLine, 255, pFileInput) == NULL)
    {
      printf("File %s only has %d lines! Exiting....\n",
             pcszInputFile, iLoop+1);
      break;
    }
    acszLine[strlen(acszLine)-1] = '\0';
    strReverse((char *) acszLine);

    fprintf(pFileOutput, "%s\n", (char *) acszLine);
    fflush(pFileOutput);
  }

  if (pFileInput)
  {
    fclose(pFileInput);
    pFileInput = NULL;
  }

  if (pFileOutput)
  {
    fclose(pFileOutput);
    pFileOutput = NULL;
  }

  return 0;
}
