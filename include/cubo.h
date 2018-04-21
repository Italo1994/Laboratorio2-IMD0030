#ifndef _CUBO_H_
#define _CUBO_H_

#include <cmath>

/**
*@brief Classe Cubo
*@details Classe que define as características
*e métodos de um cubo
*/
class Cubo {
	private:
		int aresta;
		int area;
		int volume;

	public:

		/**
		*@brief método construtor da classe Cubo
		*@details método construtor parametrizado da classe Cubo
		*que utiliza inicialização direta dos membros
		*da classe
		*@param m_aresta representa o valor que irá inicializar o atributo "aresta" da classe
		*/
		Cubo(int m_aresta);

		/**
		*@brief método destrutor da classe Cubo
		*@details método destrutor da classe Cubo
		*que será invocado explicitamente quando
		*um objeto não estiver mais sendo utilizado
		*/
		~Cubo();

		/**
		*@brief método getAreaCubo
		*@details método que retorna o valor da área do cubo
		*@return area do cubo;
		*/
		int getAreaCubo();

		/**
		*@brief método getVolumeCubo
		*@details método que retorna o valor do volume do cubo
		*@return volume do cubo
		*/
		int getVolumeCubo();	
	
};

#endif