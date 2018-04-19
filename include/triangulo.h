#ifndef _TRIANGULO_H_
#define _TRIANGULO_H_

/**
*@brief Classe Triângulo
*@details Classe que define as características
*e métodos de um triângulo
*/
class Triangulo {
	private:
		int base;
		int altura;
		int area;
		int perimetro;
		int lado1, lado2, lado3; /**<Define a medida dos lados do triângulo*/

	public:

		/**
		*@brief Construtor triângulo
		*@details Construtor parametrizado
		*da classe triângulo
		*@param b valor que irá inicializar o atributo "base" da classe
		*@param a valor que irá inicializar o atributo "altura" da classe
		*@param l1 valor que irá inicializar o atributo "lado1" da classe
		*@param l2 valor que irá inicializar o atributo "lado2" da classe
		*@param l3 valor que irá inicializar o atributo "lado3" da classe
		*/		
		Triangulo(int b, int a, int l1, int l2, int l3);
		
		~Triangulo();

		/**
		*@brief método getAreaTriangulo
		*@details método que retorna o valor da área do triângulo
		*/
		int getAreaTriangulo();

		/**
		*@brief método getPerimetroTriangulo
		*@details método que retorna o valor do perimetro do triângulo
		*/
		int getPerimetroTriangulo();
};

#endif