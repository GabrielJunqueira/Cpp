#ifndef OPACIDADE_DECORATOR_H
#define OPACIDADE_DECORATOR_H

#include "../Decorator - POO/FormaDecorator.hpp"

/**
 * \Este decorador pega uma forma e adiciona opacidade a ela.
 */
class OpacidadeDecorator: public FormaDecorator {

public:
	/**
	 * \O construtor, que envia o objeto que ser� decorado, ou seja, a forma,
	 * para o decorador de base.
	 * \param o objeto que deve ser decorado.
	 */
	OpacidadeDecorator(AbstractForma *formaObj, double opacidade) :
			FormaDecorator(formaObj), _opacidade(opacidade) {
	}

	/**
	 * \O destruidor � o destruidor padr�o produzido pelo compilador.
	 */
	~OpacidadeDecorator() {
	}
	;

	/**
	 * \Este m�todo decorado adiciona uma opacidade (atributo da classe) � forma.
	 * Esse atributo opacidade aparece como uma nova linha no seguinte formato:
	 *  " - opacidade: ?"
	 * Onde a interroga��o � a opacidade passada como par�metro (em um intervalo de 0 a 1)
	 * Para valores de 0 a 0.33 (inclusive) a opacidade � baixa
	 * Para valores de 0.33 a 0.66 (inclusive) a opacidade � m�dia
	 * Para valores de 0.66 a 1 (inclusive) a opacidade � alta
	 * Valores fora desse intervalo n�o s�o classificados como opacidade (n�o devem alterar o desenha())
	 */
	std::string desenha() override;

	void setOpacidade(double opacidade);
	double getOpacidade();

private:
	double _opacidade;

};

#endif
