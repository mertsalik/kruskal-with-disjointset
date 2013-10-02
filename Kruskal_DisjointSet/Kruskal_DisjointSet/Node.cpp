#include "Node.h"


Node::Node(string Name, int Id) : DisjointSetItem(Id)
{
	this->data = Name;
	this->id = Id;
}

Node::Node(Node const &n) : DisjointSetItem(n)
{
	cout << "Node copy constructor" << endl;
	this->data = n.data;
	this->id = n.id;
}

Node::~Node(void)
{
}
