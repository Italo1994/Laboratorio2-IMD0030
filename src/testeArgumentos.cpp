#include "testeArgumentos.h"
#include "triangulo.h"
#include "retangulo.h"
#include "quadrado.h"
#include "circulo.h"
#include "piramide.h"
#include "cubo.h"
#include "paralelepipedo.h"
#include "esfera.h"

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

	void testeArgumentos(const char argumento[], int numArgumentos){

		string str1 = "triangulo";
		string str2 = "retangulo";
		string str3 = "quadrado";
		string str4 = "circulo";
		string str5 = "piramide";
		string str6 = "cubo";
		string str7 = "paralelepipedo";
		string str8 = "esfera";


		/**
		*@details Testa de o argumento passado por
		*linha de comando é igual a triangulo
		*/
		if(str1.compare(argumento) == 0){

			/**
			*@brief verifica se o número de argumentos passados
			*por linha de comando é menor que o necessário para
			*a figura em questão
			*/
			if(numArgumentos < 7){
				cout << "Número de argumentos inválido" << endl;
			}
			else{

				/**
				*@details converte os argumentos para inteiro que representam
				*os valores para o cálculo relacionado a figura em questão
				*/
				int arg2 = atoi( (argumento+1) );
				
				int arg3 = atoi( (argumento+2) );
				
				int arg4 = atoi( (argumento+3) );
				
				int arg5 = atoi( (argumento+4) );
				
				int arg6 = atoi( (argumento+5) );

				/**
				*@details cria um objeto da classe Triangulo
				*e o inicializa com os argumentos
				*/
				Triangulo triangulo(arg2, arg3, arg4, arg5, arg6);

				cout << "Área do triângulo = " << triangulo.getAreaTriangulo() << endl;

				cout << "Perímetro do triângulo = " << triangulo.getPerimetroTriangulo() << endl;

			}

	}

	
	/**
	*@details Testa de o argumento passado por
	*linha de comando é igual a triangulo
	*/
	if(str2.compare(argumento) == 0){
		
			/**
			*@brief verifica se o número de argumentos passados
			*por linha de comando é menor que o necessário para
			*a figura em questão
			*/
			if(numArgumentos < 4){
				cout << "Número de argumentos inválido" << endl;
			}
			else{
				int arg2 = atoi( (argumento+1) );
				int arg3 = atoi( (argumento+2) );
	
				Retangulo retangulo(arg2, arg3);

				cout << "Área do retângulo = " << retangulo.getAreaRetangulo() << endl;

				cout << "Perímetro do retângulo = " << retangulo.getPerimetroRetangulo() << endl;

			}

	}

	if(str3.compare(argumento) == 0){

			if(numArgumentos < 3){
				cout << "Número de argumentos inválido" << endl;
			}
			else{

				/**
				*@details converte os argumentos para inteiro que representam
				*os valores para o cálculo relacionado a figura em questão
				*/
				int arg2 = atoi( (argumento+1) );
			
				/**
				*@details cria um objeto da classe Quadrado
				*e o inicializa com os argumentos
				*/
				Quadrado quadrado(arg2);

				cout << "Área do quadrado = " << quadrado.getAreaQuadrado() << endl;

				cout << "Perímetro do quadrado = " << quadrado.getPerimetroQuadrado() << endl;

			}
	}

	if(str4.compare(argumento) == 0){

			if(numArgumentos < 3){
				cout << "Número de argumentos inválido" << endl;
			}
			else{
				int arg2 = atoi( (argumento+1) );
			
				Circulo circulo(arg2);

				cout << "Área do círculo = " << circulo.getAreaCirculo() << endl;

				cout << "Perímetro do círculo = " << circulo.getPerimetroCirculo() << endl;

			}
	}

	if(str5.compare(argumento) == 0){

			if(numArgumentos < 5){
				cout << "Número de argumentos inválido" << endl;
			}
			else{
				int arg2 = atoi( (argumento+1) );
				int arg3 = atoi( (argumento+2) );
				int arg4 = atoi( (argumento+3) );
			
				Piramide piramide(arg2, arg3, arg4);

				cout << "Área da pirâmide = " << piramide.getAreaPiramide() << endl;

				cout << "Volume da pirâmide = " << piramide.getVolumePiramide() << endl;

			}
	}

	if(str6.compare(argumento) == 0){
			if(numArgumentos < 3){
				cout << "Número de argumentos inválido" << endl;
			}
			else{
				int arg2 = atoi( (argumento+1) );
			
				Cubo cubo(arg2);

				cout << "Área do cubo = " << cubo.getAreaCubo() << endl;

				cout << "Volume do cubo = " << cubo.getVolumeCubo() << endl;

			}	
	}

	if(str7.compare(argumento) == 0){

			if(numArgumentos < 5){
				cout << "Número de argumentos inválido" << endl;
			}
			else{
				(argumento+1);
				int arg2 = atoi( (argumento) );
				(argumento+2);
				int arg3 = atoi( (argumento) );
				(argumento+3);
				int arg4 = atoi( (argumento) );
			
				Paralelepipedo paralelepipedo(arg2, arg3, arg4);

				cout << "Área da paralelepipedo = " << paralelepipedo.getAreaParalelepipedo() << endl;

				cout << "Volume do paralelepipedo = " << paralelepipedo.getVolumeParalelepipedo() << endl;

			}

			cout << numArgumentos << endl;
			cout << argumento << endl;
	}

	if(str8.compare(argumento) == 0){ 

			if(numArgumentos < 3){
				cout << "Número de argumentos inválido" << endl;
			}
			else{
				int arg2 = atoi( (argumento+1) );
			
				Esfera esfera(arg2);

				cout << "Área da esfera = " << esfera.getAreaEsfera() << endl;

				cout << "Volume da esfera = " << esfera.getVolumeEsfera() << endl;

			}
	}

	}