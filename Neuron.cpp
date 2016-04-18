#include "stdafx.h"
#include "Neuron.h"
#include <iostream>
#include <cstdlib>


Neuron::Neuron(unsigned outputsCount, unsigned myIndex)
{
	std::cout << "Neuron creating..." << std::endl;

	for (unsigned c = 0; c < outputsCount; ++c) {
		outputWeights.push_back(Connection());
	}

	index = myIndex;
}

void Neuron::setOutputValue(double input)
{
	outputVal = input;
}

double Neuron::getOutputValue() const
{
	return outputVal;
}


void Neuron::feedForward(const Layer &prevLayer)
{
	double sum = 0.0;

	// dodajemy wszystkie wejœcia
	// pamiêtaæ o neuroenie bias z poprzedniej warstwy

	for (unsigned neuronNr = 0; neuronNr < prevLayer.size(); ++neuronNr) {
		sum += prevLayer[neuronNr].getOutputVal() * prevLayer[neuronNr].outputWeights[index].weight;
	}
	// todo

}


double Neuron::randomWeight(void)
{
	return rand() / double(RAND_MAX);
}

