#include "../Decorator - POO/OpacidadeDecorator.hpp"

std::string OpacidadeDecorator::desenha() {
	if (this->_opacidade >= 0 && this->_opacidade <= 0.33)
		return FormaDecorator::desenha() + "\n- opacidade: baixa";

	if (this->_opacidade > 0.33 && this->_opacidade <= 0.66)
		return FormaDecorator::desenha() + "\n- opacidade: m�dia";

	if (this->_opacidade > 0.66 && this->_opacidade <= 1)
		return FormaDecorator::desenha() + "\n- opacidade: alta";

	else {
	return FormaDecorator::desenha();
}
}

void OpacidadeDecorator::setOpacidade(double opacidade) {
this->_opacidade = opacidade;
}

double OpacidadeDecorator::getOpacidade() {
return this->_opacidade;
}
