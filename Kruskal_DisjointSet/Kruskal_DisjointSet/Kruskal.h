#pragma once
#include "algorithm.h"
#include "Graph.h"
#include "MinimumSpanningTreeProblem.h"
class Kruskal :
	public Algorithm
{
public:
	Kruskal(MinimumSpanningTreeProblem* mstProblem):Algorithm(mstProblem){totalCost=0;};
	~Kruskal(void){};

	void execute();
	void createResults();
	
	MinimumSpanningTreeProblem* getProblem(){return (MinimumSpanningTreeProblem*)this->problem;}

	int totalCost;
	vector<Edge*> spanningTree;
};

