#ifndef NODE_H_
#define NODE_H_

class Node {
private:
	int data;
	Node* next;
	explicit Node(int);
	friend class List;
};

#endif // NODE_H_
