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

/*listTest.c*/


#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int main()
{
  node* pHead = (node*)malloc(sizeof(node));
  pHead->nextPtr = NULL;
  pHead->prevPtr = NULL;
  pHead->dNum = 0.;

  double dNum = 0.;

  // Testing insertNode
  for (int iLoop=0; iLoop<5; iLoop++)
  {
    printf("Enter Number: ");
    scanf("%lf", &dNum);
    insertNode(pHead, dNum);
  }
 // printList(pHead);

  //Testing sort
  sort(pHead);
  printList(pHead);

  // Testing reverseList
  printf("Calling reverseList\n");
  reverseList(pHead);
 // printList(pHead);

  // Testing clearList
  printf("Calling clearList\n");
  clearList(pHead);
 // printList(pHead);

  return 0;
}
