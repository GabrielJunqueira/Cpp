#ifndef CONCRETE_FORMA_H
#define CONCRETE_FORMA_H

#include "../Decorator - POO/AbstractForma.hpp"

/**
 * \Este � o componente concreto do decorador. Ele fornece uma implementa��o
 * muito simples para o fluxo abstrato.
 */
class ConcreteForma: public AbstractForma {

public:
	/**
	 * \Construtor. Ele recebe uma string e a liga � string interna que essa classe
	 * encapsula
	 * \param forma: a string que ser� representada por este objeto.
	 */
	ConcreteForma(const std::string forma) :
			_forma(forma) {
	}

	/**
	 * \simplesmente retorna o "desenho" do objeto, aqui representado pela string interna. Sem modifica��es.
	 * \retornar o "desenho" (a string) n�o modificada encapsulada por este objeto.
	 */
	std::string desenha() override {
		return this->_forma;
	}

private:
	std::string _forma; ///< A string encapsulada por este objeto.
};

#endif
