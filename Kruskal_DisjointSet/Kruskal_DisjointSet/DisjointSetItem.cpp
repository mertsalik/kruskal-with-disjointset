#include "DisjointSetItem.h"


DisjointSetItem::DisjointSetItem(int index)
{
	this->parent = NULL;
	this->index = index;
	this->rank = 0;
}


DisjointSetItem::~DisjointSetItem(void)
{
}

DisjointSetItem::DisjointSetItem(const DisjointSetItem & sItem)
{
	cout << "DisjointSetItem copy constructor" << endl;
	this->index = sItem.index;
	this->parent = sItem.parent;
	this->rank = sItem.rank;
}