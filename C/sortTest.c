// This program tests the sorting function of the list library

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"

int main() {
	srand(time(0));
	node * head = NULL; // modify this line if you have a dummy node

	// Generate 20 random numbers and add to list
	for(int i=0; i<20; i++) {
		// modify this line if your insert function has different input/output:
		insertNode(head, rand() % 100); 
	}

	printList(head);
	sort(head);
	printList(head);
	clearList(head);
}
