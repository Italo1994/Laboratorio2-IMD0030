#ifndef _ESFERA_H_
#define _ESFERA_H_

#include "cmath"

/**
*@brief Classe Esfera
*@details Classe que define as características
*e métodos de uma esfera
*/
class Esfera {
	private:
		int raio; /**<variável que define o raio da esfera*/
		int area; /**<variável que define a área total da esfera*/
		float volume; /**<variável que define o volume total da esfera*/

	public:
		
		/**
		*@brief método construtor da classe Esfera
		*@details método construtor parametrizado da classe Esfera
		*que utiliza inicialização direta dos membros
		*da classe
		*@param r representa o valor que irá inicializar o atributo "raio" da classe
		*/
		Esfera(int r);

		/**
		*@brief método destrutor da classe Esfera
		*@details método destrutor da classe Esferas
		*que será invocado explicitamente quando
		*um objeto não estiver mais sendo utilizado
		*/
		~Esfera();

		/**
		*@brief método getAreaEsfera
		*@details método que retorna o valor da área da esfera
		*@return area da esfera;
		*/
		int getAreaEsfera();

		/**
		*@brief método getVolumeEsfera
		*@details método que retorna o valor do volume da esfera
		*@return volume da esfera
		*/
		float getVolumeEsfera();	
	
};

#endif