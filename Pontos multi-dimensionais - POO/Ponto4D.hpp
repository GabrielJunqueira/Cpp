#ifndef PONTO_4D
#define PONTO_4D

#include <cmath>
#include "../Pontos multi-dimensionais - POO/Ponto.hpp"
#include "../Pontos multi-dimensionais - POO/Ponto3D.hpp"

/**
 * \Um ponto quadimensional.
 */
class Ponto4D: public Ponto3D {
public:
	Ponto4D(double x, double y, double z, double w) :
			Ponto3D(x, y, z), _w(w) {
	}
	virtual double getW() const {
		return _w;
	}
	virtual std::string to_string() const override;

	/**
	 * A dist�ncia entre pontos de duas dimens�es � calculada da seguinte forma
	 * que �: sqrt((x1 - x2)^2 + (y1 - y2)^2 + (z1 - z2)^2).
	 * Onde x1 � a coordenada x do primeiro ponto, e x2 � a coordenada x do segundo ponto,
	 * y1 � a coordenada y do primeiro ponto, e y2 � a coordenada y do segundo ,
	 * z1 � a coordenada z do primeiro ponto, e z2 � a coordenada z do segundo ponto.
	 * w1 � a coordenada w do primeiro ponto, e w2 � a coordenada w do segundo ponto.
	 */
	virtual double distancia(Ponto *p) const override;
	virtual int getDimensao() const override {
		return 4;
	}
	;
protected:
	double _w; ///< A quarta coordenada do ponto.
};

#endif
