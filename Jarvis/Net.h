#include "stdafx.h"
#include <vector>
#pragma once
using namespace std;
class Net
{
public:
	Net(const std::vector<unsigned>& topology);
	void feedForward(const std::vector<double>& inputVals);
	void backProp(std::vector<double>& targetVals);
	void getResoults(std::vector<double>& resoultVals) const;

	~Net();
private:

};