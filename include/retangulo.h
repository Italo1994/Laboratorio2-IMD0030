#ifndef _RETANGULO_H_
#define _RETANGULO_H_

class Retangulo {
	private:
		int base, altura;
		int area, perimetro;

	public:
		Retangulo(int b, int a);
		~Retangulo();
		int getAreaRetangulo();
		int getPerimetroRetangulo();		
};

#endif