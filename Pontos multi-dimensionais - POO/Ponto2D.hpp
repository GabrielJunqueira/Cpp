#ifndef PONTO_2D
#define PONTO_2D

#include <cmath>

#include "../Pontos multi-dimensionais - POO/Ponto.hpp"
/**
 * \Um ponto bidimensional.
 */
class Ponto2D: public Ponto {
public:
	Ponto2D(double x, double y) :
			_x(x), _y(y) {
	}
	virtual double getY() const {
		return _y;
	}
	virtual double getX() const {
		return _x;
	}

	virtual std::string to_string() const override;

	/**
	 * A dist�ncia entre pontos de duas dimens�es � calculada da seguinte forma
	 * que �: sqrt((x1 - x2)^2 + (y1 - y2)^2).
	 * Onde x1 � a coordenada x do primeiro ponto, e x2 � a coordenada x do segundo ponto
	 * E y1 � a coordenada y do primeiro ponto, e y2 � a coordenada y do segundo ponto
	 */
	virtual double distancia(Ponto *p) const override;
	virtual int getDimensao() const override {
		return 2;
	}
	;

	/**
	 * Converte as coordenadas _x e _y para uma representa��o polar de duas coordenadas ( r e theta )
	 * O r � calculado da seguinte forma sqrt((x)^2 + (y)^2).
	 * O theta � calculado da seguinte forma atan(y/x)
	 * Ap�s a convers�o o m�todo atualiza x como sendo r, e y como sendo theta
	 */
	void converteParaPolar();

protected:
	double _x; ///< A primeira coordenada do ponto.
	double _y; ///< A segunda coordenada do ponto.
};

#endif
