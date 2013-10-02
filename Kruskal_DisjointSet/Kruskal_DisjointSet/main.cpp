#include <iostream>
#include "Graph.h"
#include "Kruskal.h"
#define TEST 0 // if 1 then test methods will run



int main(int argc, char* argv[]){

	if(TEST){
		MinimumSpanningTreeProblem* mstProblem = new MinimumSpanningTreeProblem();
		mstProblem->initializeInputVariables(
			"D:\\School\\AoA\\HW2\\Project2\\data\\data80\\Cities_80.txt",
			"D:\\School\\AoA\\HW2\\Project2\\data\\data80\\Flights_80.txt",
			"D:\\School\\AoA\\HW2\\Project2\\data\\data80\\result80.txt");
		Kruskal* algorithm = new Kruskal(mstProblem);
		algorithm->execute();
		algorithm->createResults();
		//assert(algorithm->totalCost == (185+436+670+804+858+872+1052+1146+1379));
		cout << "Total cost : " << algorithm->totalCost << endl;
		cout << "Time : " << algorithm->getCalculationTime() << endl;
	}else{

		if (argc < 4) { 
			std::cerr << "Usage: ./main “Cities_10.txt”  “Flights_10.txt”  “result10.txt” " << std::endl;
			return 1;
		}else if(argc == 4){
			/*Graph* flightGraph = new Graph(argv[1],argv[2]);
			flightGraph->Kruskal();
			cout << "Total Cost :" << endl;*/
			MinimumSpanningTreeProblem* mstProblem = new MinimumSpanningTreeProblem();
			mstProblem->initializeInputVariables(argv[1],argv[2],argv[3]);
			Kruskal* algorithm = new Kruskal(mstProblem);
			//algorithm->clock_start = clock();
			//for (int i = 0; i < 100; i++)
			//{
			algorithm->execute();	
			//}
			//algorithm->clock_end = clock();
			algorithm->createResults();
			cout << "Total cost : " << algorithm->totalCost << endl;
			cout << "Time : " << algorithm->getCalculationTime() << endl;
		}else{
			std::cerr << "Too many command arguments given!";
			return 1;
		}
	}

	return 0;
}