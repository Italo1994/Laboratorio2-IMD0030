#ifndef _PARALELEPIPEDO_H_
#define _PARALELEPIPEDO_H_

/**
*@brief Classe Paralelepipedo
*@details Classe que define as características
*e métodos de um paralelepipedo
*/
class Paralelepipedo {
	private:
		int aresta1, aresta2, aresta3; /**<Define a medida das três arestas do paralelepipedo*/
		int area;
		int volume;

	public:
		
		/**
		*@brief Construtor Paralelepipedo
		*@details Construtor parametrizado
		*da classe Paralelepipedo
		*@param m_aresta1 representa o valor que irá inicializar o atributo "aresta1" da classe
		*@param m_aresta2 representa o valor que irá inicializar o atributo "aresta2" da classe
		*@param m_aresta3 representa o valor que irá inicializar o atributo "aresta3" da classe
		*/	
		Paralelepipedo(int m_aresta1, int m_aresta2, int m_aresta3);

		/**
		*@brief método destrutor da classe Paralelepipedo
		*@details método destrutor da classe Paralelepipedo
		*que será invocado explicitamente quando
		*um objeto não estiver mais sendo utilizado
		*/
		~Paralelepipedo();

		/**
		*@brief método getAreaParalelepipedo
		*@details método que retorna o valor da área do paralelepipedo
		*/
		int getAreaParalelepipedo();

		/**
		*@brief método getVolumeParalelepipedo
		*@details método que retorna o valor do volume do triângulo
		*/
		int getVolumeParalelepipedo();
	
};

#endif