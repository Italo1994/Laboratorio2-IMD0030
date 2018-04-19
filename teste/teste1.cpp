#include <iostream>
#include "triangulo.h"
#include "retangulo.h"
#include "quadrado.h"
#include "circulo.h"

using namespace std;

int main(int argc, char* argv[]) {
	Triangulo triangulo(2, 4, 5, 8, 8);
	Retangulo retangulo(7, 12);
	Quadrado quadrado(5);
	Circulo circulo(9);


	cout << "Área do triângulo = " << triangulo.getAreaTriangulo() << endl;

	cout << "Perímetro do triângulo = " << triangulo.getPerimetroTriangulo() << endl << endl;

	cout << "Área do Retângulo = " << retangulo.getAreaRetangulo() << endl;

	cout << "Perímetro do retângulo = " <<retangulo.getPerimetroRetangulo() << endl << endl;

	cout << "Área  do quadrado = " << quadrado.getAreaQuadrado() << endl;

	cout << "Perímetro do quadrado = " << quadrado.getPerimetroQuadrado() << endl << endl;

	cout << "Área do círculo = " << circulo.getAreaCirculo() << endl;

	cout << "Perímetro do círculo = " << circulo.getPerimetroCirculo() << endl;


	return 0;
}