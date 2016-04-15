// Jarvis.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include "Net.h"


int main()
{

	std::vector<unsigned> topology;

	topology.push_back(2);
	topology.push_back(2);
	topology.push_back(1);


	Net network = Net(topology);

	std::vector<double> inputVals;
	network.feedForward(inputVals);

//	network.backProp(targetVals);
//	network.getResoults(resoultVals);


	return 0;
}

