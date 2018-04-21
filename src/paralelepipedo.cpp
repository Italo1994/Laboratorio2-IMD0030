#include "paralelepipedo.h"

	Paralelepipedo::Paralelepipedo(int m_aresta1, int m_aresta2, int m_aresta3): aresta1(m_aresta1), 
		aresta2(m_aresta2), aresta3(m_aresta3) {

		area = (2 * aresta1) + (2 * aresta2) + (2 * aresta3);
		volume = aresta1 + aresta2 + aresta3;
	}

	Paralelepipedo::~Paralelepipedo() {

	}

	int Paralelepipedo::getAreaParalelepipedo(){
		return area;
	}

	int Paralelepipedo::getVolumeParalelepipedo() {
		return volume;
	}