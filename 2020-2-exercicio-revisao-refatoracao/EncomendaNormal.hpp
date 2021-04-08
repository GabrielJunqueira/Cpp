#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda {

public:

	EncomendaNormal() {
	}

	//construtor
	EncomendaNormal(double _peso, double _custokg) {
		this->peso = _peso;
		this->custoKg = _custokg;
	}

	//método que calcula o valor de Entregas Normais
	double calculaEntrega() override {

		double valorEntregaNormal = peso * custoKg;

		return valorEntregaNormal;
	}

	//método que imprime dados de Entregas Normais
	void print() {

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << peso   << endl
				  << "  Custo por kg: "   << custoKg << endl
				  << "  Custo total: "    << custoTotal << endl;
	}

};

#endif
