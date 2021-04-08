#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;
#define TaxaRelampago 0.25

class EncomendaRelampago: public Encomenda {

public:

	EncomendaRelampago() {
	}

	//Construtor
	EncomendaRelampago(double _peso, double _custokg) {
		this->peso = _peso;
		this->custoKg = _custokg;
	}

	//método que calcula o valor de Entregas Relâmpago
	double calculaEntrega() override {

		double valorEntregaRelampago = peso * custoKg;
		valorEntregaRelampago += valorEntregaRelampago * TaxaRelampago;

		return valorEntregaRelampago;
	}

	//método que imprime dados de Entregas Relâmpago
	void print() {

		Encomenda::print();
		std::cout << "[Encomenda Relâmpago]" << endl;
		std::cout << "  Peso: " << peso << endl
				  << "  Custo por kg: " << custoKg << endl
				  << "  Taxa adicional: " << 0.25  << endl
				  << "  Custo total: " << custoTotal << endl;
	}

};

#endif
