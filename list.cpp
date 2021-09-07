#include <iostream>
#include "node.h"
#include "list.h"

List::List() : head(nullptr), tail(nullptr) {}

List::~List() {
	for (Node* np = head; np != nullptr;) {
		Node* cnp = np;
		np = np->next;
		delete cnp;
	}
}

void List::append(int v) {
	Node* np = new Node(v);
	if (head == nullptr) {
		head = tail = np;
		return;
	}
	tail->next = np;
	tail = tail->next;
}

void List::display() {
	std::cout << "The Linked List elements are: { ";
	for (Node* np = head; np != nullptr; np = np->next) {
		if (np != head) {
			std::cout << " -> ";
		}
		std::cout << np->data;
	}
	std::cout << " }" << std::endl;
}

void List::insert(int n, int x) {
	if (head == nullptr) {
		append(x);
		return;
	}
	Node* newNodePointer = new Node(x);
	for (Node* np = head; np != nullptr; np = np->next) {
		if (np->data == n) {
			newNodePointer->next = np->next;
			np->next = newNodePointer;
			if (np == tail) {
				tail = tail->next;
			}
			return;
		}
	}
	tail->next = newNodePointer;
	tail = tail->next;
}