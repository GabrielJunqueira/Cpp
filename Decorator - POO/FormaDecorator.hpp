#ifndef FORMA_DECORATOR_H
#define FORMA_DECORATOR_H

#include "../Decorator - POO/AbstractForma.hpp"

/**
 * \Este � o decorador b�sico. Todos os outros decoradores ter�o que implement�-lo.
 */
class FormaDecorator: public AbstractForma {

public:
	/**
	 * \O construtor, que simplesmente liga a forma abstrato ao estado interno
	 * deste objeto.
	 * \param o objeto que deve ser decorado.
	 */
	FormaDecorator(AbstractForma *formaObj) :
			_formaObj(formaObj) {
	}

	/**
	 * \O destruidor � o destruidor padr�o produzido pelo compilador.
	 */
	~FormaDecorator() {
	}
	;

	/**
	 * \Este � o m�todo que ter� que ser sobrescrito por qualquer decorador que
	 * rodeia esta classe.
	 * \retornar o desenho (a string) decorada n�o modificada.
	 */
	std::string desenha() override {
		return _formaObj->desenha();
	}

private:
	AbstractForma *_formaObj; ///< Um ponteiro para o objeto decorado.
};

#endif
