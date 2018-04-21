#ifndef _PIRAMIDE_H_
#define _PIRAMIDE_H_

/**
*@brief Classe Piramide
*@details Classe que define as características
*e métodos de um piramide
*/
class Piramide {
	private:
		int area_base;
		int area_lateral;
		int altura;
		int areaTotal;
		float volume;

	public:

		/**
		*@brief Construtor Piramide
		*@details método construtor parametrizado
		*da classe Piramide que utiliza inicialização
		*direta dos membros da classe
		*@param a_b representa o valor que irá inicializar o atributo "area_base" da classe
		*@param a_l representa o valor que irá inicializar o atributo "area_lateral" da classe
		*@param alt representa o valor que irá inicializar o atributo "altura" da classe
		*/
		Piramide(int a_b, int a_l, int alt);

		/**
		*@brief método destrutor da classe Piramide
		*@details método destrutor da classe Piramide
		*que será invocado explicitamente quando
		*um objeto da classe não estiver mais sendo utilizado
		*/
		~Piramide();

		/**
		*@brief método getAreaPiramide
		*@details método que retorna o valor da área da pirâmide
		*@return área da pirâmide
		*/
		int getAreaPiramide();

		/**
		*@brief método getVolumePiramide
		*@details método que retorna o valor do volume da pirâmide
		*@return volume da pirâmide
		*/
		float getVolumePiramide();	
	
};

#endif