/**
* Linked List Practice
*
* Copyright (c) 2021, Myo Aung.
*/
#include "list.h"
#include <iostream>

int main() {
	List l1;
	l1.append(3);
	l1.append(4);
	l1.append(5);
	l1.display();
	l1.insert(4, 1);
	l1.display();
	return 0;
}