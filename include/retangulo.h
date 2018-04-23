#ifndef _RETANGULO_H_
#define _RETANGULO_H_

/**
*@brief Classe Retangulo
*@details Classe que define as características
*e métodos de um retângulo
*/
class Retangulo {
	private:
		int base, altura;
		int area, perimetro;

	public:

		/**
		*@brief Construtor Retangulo
		*@details Construtor parametrizado
		*da classe Retangulo
		*@param b valor que irá inicializar o atributo "base" da classe
		*@param a valor que irá inicializar o atributo "altura" da classe
		*/	
		Retangulo(int b, int a);

		/**
		*@brief método destrutor da classe Retangulo
		*@details método destrutor da classe Retangulo
		*que será invocado explicitamente quando
		*um objeto não estiver mais sendo utilizado
		*/
		~Retangulo();

		/**
		*@brief método getAreaRetangulo
		*@details método que retorna o valor da área do retângulo
		*/
		int getAreaRetangulo();

		/**
		*@brief método getPerimetroRetangulo
		*@details método que retorna o valor do perimetro do retângulo
		*/
		int getPerimetroRetangulo();		
};

#endif