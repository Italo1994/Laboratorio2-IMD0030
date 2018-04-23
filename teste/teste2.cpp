#include <iostream>
#include "triangulo.h"
#include "retangulo.h"
#include "quadrado.h"
#include "circulo.h"
#include "piramide.h"
#include "cubo.h"
#include "paralelepipedo.h"
#include "esfera.h"

#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {

	string str1 = "triangulo";
	string str2 = "retangulo";
	string str3 = "quadrado";
	string str4 = "circulo";
	string str5 = "piramide";
	string str6 = "cubo";
	string str7 = "paralelepipedo";
	string str8 = "esfera";

	if(str1.compare(argv[1]) == 0){

			if(argc < 7){
				cout << "Número de argumentos inválido" << endl;
			}
			else{
				int arg2 = atoi(argv[2]);
				int arg3 = atoi(argv[3]);
				int arg4 = atoi(argv[4]);
				int arg5 = atoi(argv[5]);
				int arg6 = atoi(argv[6]);
				Triangulo triangulo(arg2, arg3, arg4, arg5, arg6);

				cout << "Área do triângulo = " << triangulo.getAreaTriangulo() << endl;

				cout << "Perímetro do triângulo = " << triangulo.getPerimetroTriangulo() << endl;

			}

	}

	

	if(str2.compare(argv[1]) == 0){
		
			if(argc < 4){
				cout << "Número de argumentos inválido" << endl;
			}
			else{
				int arg2 = atoi(argv[2]);
				int arg3 = atoi(argv[3]);
	
				Retangulo retangulo(arg2, arg3);

				cout << "Área do retângulo = " << retangulo.getAreaRetangulo() << endl;

				cout << "Perímetro do retângulo = " << retangulo.getPerimetroRetangulo() << endl;

			}

	}

	if(str3.compare(argv[1]) == 0){

			if(argc < 3){
				cout << "Número de argumentos inválido" << endl;
			}
			else{
				int arg2 = atoi(argv[2]);
			
				Quadrado quadrado(arg2);

				cout << "Área do quadrado = " << quadrado.getAreaQuadrado() << endl;

				cout << "Perímetro do quadrado = " << quadrado.getPerimetroQuadrado() << endl;

			}
	}

	if(str4.compare(argv[1]) == 0){

			if(argc < 3){
				cout << "Número de argumentos inválido" << endl;
			}
			else{
				int arg2 = atoi(argv[2]);
			
				Circulo circulo(arg2);

				cout << "Área do círculo = " << circulo.getAreaCirculo() << endl;

				cout << "Perímetro do círculo = " << circulo.getPerimetroCirculo() << endl;

			}
	}

	if(str5.compare(argv[1]) == 0){

			if(argc < 5){
				cout << "Número de argumentos inválido" << endl;
			}
			else{
				int arg2 = atoi(argv[2]);
				int arg3 = atoi(argv[3]);
				int arg4 = atoi(argv[4]);
			
				Piramide piramide(arg2, arg3, arg4);

				cout << "Área da pirâmide = " << piramide.getAreaPiramide() << endl;

				cout << "Volume da pirâmide = " << piramide.getVolumePiramide() << endl;

			}
	}

	if(str6.compare(argv[1]) == 0){
			if(argc < 3){
				cout << "Número de argumentos inválido" << endl;
			}
			else{
				int arg2 = atoi(argv[2]);
			
				Cubo cubo(arg2);

				cout << "Área do cubo = " << cubo.getAreaCubo() << endl;

				cout << "Volume do cubo = " << cubo.getVolumeCubo() << endl;

			}	
	}

	if(str7.compare(argv[1]) == 0){

			if(argc < 5){
				cout << "Número de argumentos inválido" << endl;
			}
			else{
				int arg2 = atoi(argv[2]);
				int arg3 = atoi(argv[3]);
				int arg4 = atoi(argv[4]);
			
				Paralelepipedo paralelepipedo(arg2, arg3, arg4);

				cout << "Área da paralelepipedo = " << paralelepipedo.getAreaParalelepipedo() << endl;

				cout << "Volume do paralelepipedo = " << paralelepipedo.getVolumeParalelepipedo() << endl;

			}
	}

	if(str8.compare(argv[1]) == 0){

			if(argc < 3){
				cout << "Número de argumentos inválido" << endl;
			}
			else{
				int arg2 = atoi(argv[2]);
			
				Esfera esfera(arg2);

				cout << "Área da esfera = " << esfera.getAreaEsfera() << endl;

				cout << "Volume da esfera = " << esfera.getVolumeEsfera() << endl;

			}
	}

	



	return 0;
}	