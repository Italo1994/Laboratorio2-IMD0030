#include "circulo.h"
#include "cmath"

	Circulo::Circulo(int r): raio(r) {
		double pi = 3.1415;
		area = pi * pow(raio, raio);
		perimetro = 2 * pi * raio;
	}

	Circulo::~Circulo() {

	}

	double Circulo::getAreaCirculo(){
		return area;
	}

	int Circulo::getPerimetroCirculo() {
		return perimetro;
	}