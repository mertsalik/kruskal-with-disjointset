#pragma once
#include "Common.h"
class DisjointSetItem
{
public:
	DisjointSetItem(int Index);
	~DisjointSetItem(void);
	DisjointSetItem(const DisjointSetItem & sItem);

	int rank; // This roughly represent the max height of the node in its subtree
	int index; // The index of the element the node represents
	DisjointSetItem* parent;
};

