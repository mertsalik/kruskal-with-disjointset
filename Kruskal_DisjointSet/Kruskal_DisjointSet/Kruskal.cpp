#include "Kruskal.h"


void Kruskal::execute(){
	Graph* graph = new Graph(this->getProblem()->cityDataFileName,this->getProblem()->flightDataFileName);

	this->clock_start = clock();

	sort(graph->edges.begin(),graph->edges.end(),Edge::comp());
	for(int i=0;i<graph->edges.size();++i){
		int s1 = graph->sets.FindSet(graph->edges[i]->left->index);
		int s2 = graph->sets.FindSet(graph->edges[i]->right->index);
		if(s1!=s2){
			graph->sets.Union(s1,s2);
			totalCost+= graph->edges[i]->cost;
			spanningTree.push_back(graph->edges[i]);
		}
	}

	clock_end = clock();
}


void Kruskal::createResults(){
	assert(this->spanningTree.size() != 0);
	ofstream outputFile;
	outputFile.open (this->getProblem()->outputFileName);

	for(int i=0;i<this->spanningTree.size();i++)
	{
		outputFile << this->spanningTree[i]->left->data << "   " << this->spanningTree[i]->right->data << "   " << this->spanningTree[i]->cost << endl;
	}

	outputFile.close();
}