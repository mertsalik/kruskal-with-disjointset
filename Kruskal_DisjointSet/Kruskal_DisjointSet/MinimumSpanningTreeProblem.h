#pragma once
#include "problem.h"
#include <string>
using namespace std;
class MinimumSpanningTreeProblem :
	public Problem
{
public:
	MinimumSpanningTreeProblem(void){};
	~MinimumSpanningTreeProblem(void){};
	string cityDataFileName;
	string flightDataFileName;
	string outputFileName;

	bool initializeInputVariables(string CityDataFilename, string FlightDataFilename, string OutputFilename){
		this->cityDataFileName = CityDataFilename;
		this->flightDataFileName = FlightDataFilename;
		this->outputFileName = OutputFilename;

		return true;
	};
};

