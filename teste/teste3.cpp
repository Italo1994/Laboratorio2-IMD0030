#include "triangulo.h"
#include "retangulo.h"
#include "quadrado.h"
#include "circulo.h"
#include "piramide.h"
#include "cubo.h"
#include "paralelepipedo.h"
#include "esfera.h"
#include "testeArgumentos.h"

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {

	//string arg1 = argv[1];	

	testeArgumentos(argv[1], argc);


	return 0;
}