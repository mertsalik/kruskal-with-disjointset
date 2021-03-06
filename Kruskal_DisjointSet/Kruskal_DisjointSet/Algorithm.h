#pragma once
#include "Problem.h"
#include <ctime>
class Algorithm
{
protected:
	Problem *problem;
public:
	Algorithm(Problem* problem){	this->problem = problem;};
	~Algorithm(void){};


	virtual void execute(void){};

	Problem* getProblem(){
		return this->problem;
	}

	clock_t clock_start, clock_end;
	float diff,seconds;

	float getCalculationTime(){
		diff = ((float)clock_end - (float)clock_start);
		seconds = diff / CLOCKS_PER_SEC;
		return seconds;
	}
};