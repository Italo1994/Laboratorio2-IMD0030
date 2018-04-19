#ifndef _QUADRADO_H_
#define _QUADRADO_H_

/**
*@brief Classe Quadrado
*@details Classe que define as características
*e métodos de um quadrado
*/
class Quadrado {
	private:
		int lado; /**<define o atributo que corresponde ao lado do quadrado */
		int area, perimetro;

	public:

		/**
		*@brief Construtor Quadrado
		*@details Construtor parametrizado
		*da classe Quadrado
		*@param l valor que irá inicializar o atributo "lado" da classe
		*/
		Quadrado(int l);

		~Quadrado();

		/**
		*@brief método getAreaQuadrado
		*@details método que retorna o valor da área do quadrado
		*/
		int getAreaQuadrado();

		/**
		*@brief método getPerimetroQuadrado
		*@details método que retorna o valor do perimetro do quadrado
		*/
		int getPerimetroQuadrado();	
	
};

#endif