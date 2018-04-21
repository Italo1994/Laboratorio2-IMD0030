#include <iostream>
#include "triangulo.h"
#include "retangulo.h"
#include "quadrado.h"
#include "circulo.h"
#include "piramide.h"
#include "cubo.h"
#include "paralelepipedo.h"
#include "esfera.h"

using namespace std;

int main(int argc, char* argv[]) {
	Triangulo triangulo(2, 4, 5, 8, 8);
	Retangulo retangulo(7, 12);
	Quadrado quadrado(5);
	Circulo circulo(9);
	Piramide piramide(5, 8, 10);
	Cubo cubo(4);
	Paralelepipedo paralelepipedo(5, 5, 7);
	Esfera esfera(2);


	cout << "Área do triângulo = " << triangulo.getAreaTriangulo() << endl;

	cout << "Perímetro do triângulo = " << triangulo.getPerimetroTriangulo() << endl << endl;

	cout << "Área do Retângulo = " << retangulo.getAreaRetangulo() << endl;

	cout << "Perímetro do retângulo = " <<retangulo.getPerimetroRetangulo() << endl << endl;

	cout << "Área  do quadrado = " << quadrado.getAreaQuadrado() << endl;

	cout << "Perímetro do quadrado = " << quadrado.getPerimetroQuadrado() << endl << endl;

	cout << "Área do círculo = " << circulo.getAreaCirculo() << endl << endl;

	cout << "Perímetro do círculo = " << circulo.getPerimetroCirculo() << endl << endl;

	cout << "Área da pirâmide = " << piramide.getAreaPiramide() << endl << endl;

	cout << "Volume da pirâmide = " << piramide.getVolumePiramide() << endl << endl;

	cout << "Área do cubo = " << cubo.getAreaCubo() << endl << endl;

	cout << "Volume do cubo = " << cubo.getVolumeCubo() << endl << endl;

	cout << "Área do paralelepipedo = " << paralelepipedo.getAreaParalelepipedo() << endl << endl;

	cout << "Volume do paralelepipedo = " << paralelepipedo.getVolumeParalelepipedo() << endl << endl;

	cout << "Área da esfera = " << esfera.getAreaEsfera() << endl << endl;

	cout << "Volume da esfera = " << esfera.getVolumeEsfera() << endl << endl;


	return 0;
}