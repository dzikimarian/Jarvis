#include "stdafx.h"
#include "Net.h"
#include "Neuron.h"
#include <vector>
#include <iostream>
#include <cassert>

//typedef std::vector<Neuron> Layer;

//void Layer::Layer() {
//
//}

Net::Net(const std::vector<unsigned>& topology)
{
	unsigned layersCount = topology.size();
	for (unsigned layerNr = 0; layerNr < layersCount; ++layerNr) {
		layers.push_back(Layer{});
		unsigned outputsCount = layerNr == topology.size() - 1 ? 0 : topology[layerNr + 1];


		for (unsigned neuronNr = 0; neuronNr <= topology[layerNr]; ++neuronNr) {
			layers.back().push_back(Neuron(outputsCount, neuronNr));
		}
	}

}

void Net::feedForward(const std::vector<double>& inputVals)
{
	//@todo Dodaæ sprawdzanie czy jest minimum 1 warstwa neurownów
	// Liczba wejœæ danych musi byæ równa iloœci neurownów w pierwszej warstwie

}

void Net::backProp(std::vector<double>& targetVals)
{

}

void Net::getResoults(std::vector<double>& resoultVals) const
{

}

Net::~Net()
{

}
