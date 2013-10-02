#pragma once
#include "DisjointSetItem.h"
class Node :
	public DisjointSetItem
{
public:
	Node(string Name,int Id);
	Node(Node const &n);
	~Node(void);
	string data;
	int id;

	static Node* findNodeByData(vector<Node*> Nodes,string Data){
		Node* found = (Node*)NULL;
		for (int i = 0; i < Nodes.size(); i++)
		{
			if(Nodes[i]->data == Data){
				found = Nodes[i];
			}
		}
		return found;
	}
};

