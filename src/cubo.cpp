#include "cubo.h"

	Cubo::Cubo(int m_aresta): aresta(m_aresta) {
		area = 6 * pow(aresta, 2);
		volume = aresta * aresta * aresta;
	}

	Cubo::~Cubo() {

	}

	int Cubo::getAreaCubo() {
		return area;
	}

	int Cubo::getVolumeCubo() {
		return volume;
	}