#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
#define ZERO 0.0
using namespace std;

class Encomenda {

public:

	//metodo virtual que calcula e retorna o valor da entrega
	virtual double calculaEntrega() {

		double valorEntrega = peso * custoKg;

		return valorEntrega;
	}

	//metodo virtual que imprime dados da entrega
	virtual void print() {

		std::cout << "[Remetente]" << endl;
		remetente.print();
		std::cout << "[Destinatário]" << endl;
		dest.print();
	}

	//Getter e Setter para Remetente
	virtual void setRemetente(Cliente _remetente) {
		remetente = _remetente;
	}
	virtual Cliente getRemetente() {
		return remetente;
	}

	//Getter e Setter para Destinatário
	virtual void setDestinatario(Cliente _destinatario) {
		dest = _destinatario;
	}
	virtual Cliente getDestinatario() {
		return dest;
	}

protected:

	double peso = ZERO;
	double custoKg = ZERO;
	double custoTotal = ZERO;

private:

	Cliente remetente;
	Cliente dest;

};

#endif
