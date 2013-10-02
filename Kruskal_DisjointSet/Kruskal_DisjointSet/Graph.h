#pragma once
#include "Common.h"
#include "DisjointSets.h"
#include "Node.h"
#include "Edge.h"
class Graph
{
public:
	Graph(void);
	Graph(string CityFileName, string FlightFileName);
	~Graph(void);

	DisjointSets sets;
	vector<Edge*> edges;
	vector<Node*> nodes;

private:
	void readCityData(string Filename);
	void readFlightData(string Filename);
	vector<string> split(const string& s, const string& delim, const bool keep_empty = true) {
		vector<string> result;
		if (delim.empty()) {
			result.push_back(s);
			return result;
		}
		string::const_iterator substart = s.begin(), subend;
		while (true) {
			subend = search(substart, s.end(), delim.begin(), delim.end());
			string temp(substart, subend);
			if (keep_empty || !temp.empty()) {
				result.push_back(temp);
			}
			if (subend == s.end()) {
				break;
			}
			substart = subend + delim.size();
		}
		return result;
	}
};

