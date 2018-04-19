#include "quadrado.h"

	Quadrado::Quadrado(int l): lado(l) {
		area = lado * lado;
		perimetro = 4 * lado;
	}

	Quadrado::~Quadrado() {

	}

	int Quadrado::getAreaQuadrado() {
		return area;
	}

	int Quadrado::getPerimetroQuadrado(){
		return perimetro;
	}