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

/*list.h*/

#ifndef INC_LIST_H
#define INC_LIST_H



typedef struct nodestruct
{
  double dNum; 
  struct nodestruct *nextPtr;
  struct nodestruct *prevPtr;
} node;

void insertNode(node* pHead, double num);

void deleteNode(node* pHead);

int isEmpty(node *pHead);

int size(node* pHead);

void reverseList(node* pHead);

void printList(node* pHead);

void clearList(node *pHead);

void sort(node *pHead);

#endif //INC_LIST_H
