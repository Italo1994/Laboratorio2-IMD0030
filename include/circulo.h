#ifndef _CIRCULO_H_
#define _CIRCULO_H_

/**
*@brief Classe Circulo
*@details Classe que define as características
*e métodos de um círculo
*/
class Circulo {
	private:
		int raio;
		int area, perimetro;

	public:

		/**
		*@brief Construtor Circulo
		*@details Construtor parametrizado
		*da classe Circulo
		*@param r valor que irá inicializar o atributo "raio" da classe
		*/
		Circulo(int r);

		~Circulo();

		/**
		*@brief método getAreaCirculo
		*@details método que retorna o valor da área do circulo
		*/
		double getAreaCirculo();

		/**
		*@brief método getPerimetroCirculo
		*@details método que retorna o valor do perimetro do circulo
		*/
		int getPerimetroCirculo();		

};

#endif