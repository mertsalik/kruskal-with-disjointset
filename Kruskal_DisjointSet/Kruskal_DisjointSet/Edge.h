#pragma once
#include "Node.h"
class Edge
{
public:
	Edge(void);
	~Edge(void);

	Node* left;
	Node* right;
	int cost;
	int id;
	struct comp{
		bool operator()(const Edge* e1,Edge* e2){
			return e1->cost<e2->cost;
		}
	};
};

