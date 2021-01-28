#ifndef COR_DECORATOR_H
#define COR_DECORATOR_H

#include "../Decorator - POO/FormaDecorator.hpp"

/**
 * \Este decorador pega uma forma e adiciona cor a a ela.
 */
class CorDecorator: public FormaDecorator {

public:
	/**
	 * \O construtor, que envia o objeto que ser� decorado, ou seja, a forma,
	 * para o decorador de base.
	 * e seta _cor do objeto
	 * \param o objeto que deve ser decorado.
	 */
	CorDecorator(AbstractForma *formaObj, std::string cor) :
			FormaDecorator(formaObj), _cor(cor) {
	}

	/**
	 * \O destruidor � o destruidor padr�o produzido pelo compilador.
	 */
	~CorDecorator() {
	}
	;

	/**
	 * \Este m�todo decorado adiciona uma cor (atributo da classe) � forma.
	 * Esse atributo cor aparece como uma nova linha no seguinte formato:
	 *  " - cor: ?"
	 * Onde a interroga��o � a cor passada como par�metro
	 */
	std::string desenha() override;

	void setCor(std::string cor);
	std::string getCor();

private:
	std::string _cor;
};

#endif
