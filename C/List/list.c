//Ara Beigi
//Assignment 8
//This program implements the following functions:
//printList(node* ptr): given the head pointer to a list, prints out the list and its size 
//insertNode(node* ptr, double data): given the head pointer and a new data item, inserts the new item at the beginning of the list
//deleteNode(node* ptr): given the head pointer, deletes the first item in the list
//reverseList(node* ptr): given the head pointer, reverses the list
//clearList(node* ptr): empties the list
//int isEmpty(node* ptr): checks if the list is empty.  Returns 1 if empty, 0 otherwise.
//int size(node* ptr): returns the length of the list

/*list.c*/


#include <stdlib.h>
#include <stdio.h>
#include "list.h"


void insertNode(node* pHead, double num)
{
  node *pNew = (node *) malloc(sizeof(node));
  pNew->dNum = num;
  
  node *pTemp = pHead->nextPtr;
  pHead->nextPtr = pNew;
  pNew->prevPtr = pHead;
  if (pTemp != NULL)
    pTemp->prevPtr = pNew;
  pNew->nextPtr = pTemp;

  return;
}


void deleteNode(node* pHead)
{
  node *pDelete = pHead->nextPtr;
  if (pDelete == NULL)
    return;

  node *pTemp = pDelete->nextPtr;
  if (pTemp != NULL)
    pTemp->prevPtr = pHead;

  pHead->nextPtr = pTemp;

  free((void*) pDelete);
  pDelete = NULL;

  return;
}




int isEmpty(node *pHead)
{
  if (pHead->prevPtr == NULL && pHead->nextPtr == NULL)
    return 1;
  else
    return 0;
}

int size(node* pHead)
{
  node *pTemp  = pHead;

  int iCount = 0 ;
  while ((pTemp = pTemp->nextPtr) != NULL)
    iCount++; 

  return iCount;
}


void reverseList(node* pHead)
{
  node *pTemp = NULL;
  node *pCurr = pHead;
  node *pCurrTemp = NULL;
  node *pCurrSave = NULL;
  node *pFirstNode = NULL;
   
  if (pHead->nextPtr == NULL)
    return;

  pCurrTemp = pCurr->nextPtr;
  pFirstNode = pCurrTemp;
  do
  {
    pTemp = pCurrTemp->nextPtr;
    pCurrTemp->nextPtr = pCurrTemp->prevPtr;
    pCurrTemp->prevPtr = pTemp;
    pCurr = pTemp;
    pCurrSave = pCurrTemp;
  } while ((pCurrTemp = pTemp) != NULL);

  pHead->nextPtr = pCurrSave;
  pCurrSave->prevPtr = pHead;
  pFirstNode->nextPtr = NULL;

  return;
}

void printList(node* pHead)
{
  node *pTemp  = pHead;

  int iCount = 0 ;
  printf("Size: %d\n", size(pHead));
  
  while ((pTemp = pTemp->nextPtr) != NULL)
  {
    /*
    printf("pCurr = %lx pNext = %lx pPrev = %lx num = %lf\n",
	   pTemp, pTemp->nextPtr, pTemp->prevPtr, pTemp->dNum);
    */
    printf("Number = %lf\n", pTemp->dNum);
    fflush(stdout);
  }

  return;
}

void clearList(node *pHead)
{
  while (pHead->nextPtr != NULL)
  {
    deleteNode(pHead);
  }

  return;
}

void sort(node *pHead)
{
	node* p1 = pHead->nextPtr;
	double swap, j;
	for (int i=1; i<size(pHead); i++)
	{
		swap = p1->dNum;
		printf("%lf\n", swap);
	if (p1->prevPtr != NULL){
		for (j=i-1; j>=0 && p1->prevPtr->dNum > swap; j--)
		{
			p1->nextPtr->dNum = p1->dNum;
		}
		p1->nextPtr->dNum = swap;
	}
	else
	{
		for (int k=i-1; k>=0 && (p1->prevPtr->dNum > swap || p1->prevPtr == NULL); k--)
			p1->dNum = p1->nextPtr->dNum;
			p1->nextPtr->dNum = swap;
	}
	}
}
