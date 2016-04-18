#pragma once
#include "stdafx.h"
#include "Connection.h"
#include <vector>

typedef std::vector<Neuron> Layer;

class Neuron
{
public:
	Neuron(unsigned outputsCount, unsigned index);
	void setOutputValue(double input);
	double getOutputValue() const;
	void feedForward(const Layer &prevLayer);
private:
	double outputVal;
	std::vector<Connection> outputWeights;

	double randomWeight(void);
	unsigned index;


};

