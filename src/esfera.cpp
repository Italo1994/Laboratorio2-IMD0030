#include "esfera.h"

	Esfera::Esfera(int r): raio(r) {
		const double pi = 3.1415;

		area = 4 * pi * pow(raio, 2);
		volume = (float)4/3 * pi * pow(raio, 3);
	}

	Esfera::~Esfera() {

	}

	int Esfera::getAreaEsfera(){
		return area;
	}

	float Esfera::getVolumeEsfera() {
		return volume;
	}