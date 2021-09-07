#ifndef LIST_H_
#define LIST_H_
#include "node.h"

class List {
private:
	Node* head;
	Node* tail;

public:
	List();
	~List();
	void append(int);
	void insert(int, int);
	void remove(int);
	void display();
};

#endif // LIST_H_
