#include "Graph.h"
#include <algorithm>


Graph::Graph(void)
{
}

Graph::Graph(string CityFilename,string FlightFilename)
{
	readCityData(CityFilename);
	readFlightData(FlightFilename);
}

Graph::~Graph(void)
{
}

void Graph::readFlightData(string Filename)
{
        std::ifstream input( Filename);
        int counter = 0;
        for( std::string line; getline( input, line ); )
        {
                vector<string> words = split(line, ",");
                Edge* edge = new Edge();
				edge->left = Node::findNodeByData(nodes,words[0]);
				edge->right = Node::findNodeByData(nodes,words[1]);
				edge->cost = atoi(words[2].c_str());
                edge->id = counter;
				edges.push_back(edge);
                counter++;
        }
}

void Graph::readCityData(string Filename)
{
	std::ifstream input( Filename);
	int counter = 0;
	for( std::string line; getline( input, line ); )
	{
		string word;
		istringstream iss(line, istringstream::in);
		while( iss >> word )     
		{
			Node* city = new Node(word,counter);
			nodes.push_back(city);
			this->sets.AddElement(city);
		}
		//DisjointSets::printElementSets(this->sets);
		counter++;
	}
}
