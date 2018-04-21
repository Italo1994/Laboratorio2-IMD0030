#include "piramide.h"
#include <iostream>

	using namespace std;

	Piramide::Piramide(int a_b, int a_l, int alt): area_base(a_b), area_lateral(a_l), altura(alt){
		areaTotal = area_base + area_lateral;
		volume = (float)1/3 * (area_base * altura);

	}

	Piramide::~Piramide() {

	}

	int Piramide::getAreaPiramide() {
		return areaTotal;
	}

	float Piramide::getVolumePiramide() {
		return volume;
	}