#include "triangulo.h"

	Triangulo::Triangulo(int b, int a, int l1, int l2, int l3): base (b), altura(a), lado1(l1), lado2(l2), lado3(l3) {
		area = (base * altura) / 2;
		perimetro = lado1 + lado2 + lado3;
	}

	Triangulo::~Triangulo(){

	}

	int Triangulo::getAreaTriangulo(){
		return area;
	}

	int Triangulo::getPerimetroTriangulo(){
		return perimetro;
	}