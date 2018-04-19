#ifndef _TRIANGULO_H_
#define _TRIANGULO_H_

class Triangulo {
	private:
		int base, altura;
		int area, perimetro;
		int lado1, lado2, lado3;

	public:		
		Triangulo(int b, int a, int l1, int l2, int l3);
		~Triangulo();

		int getAreaTriangulo();
		int getPerimetroTriangulo();
};

#endif