#include "retangulo.h"

	Retangulo::Retangulo(int b, int a): base(b), altura(a) {
		area = base * altura;
		perimetro = 2 * (base + altura);
	}

	Retangulo::~Retangulo() {

	}

	int Retangulo::getAreaRetangulo() {
		return area;
	}

	int Retangulo::getPerimetroRetangulo() {
		return perimetro;
	}