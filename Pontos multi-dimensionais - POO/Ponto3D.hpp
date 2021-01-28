#ifndef PONTO_3D
#define PONTO_3D

#include <cmath>
#include "../Pontos multi-dimensionais - POO/Ponto.hpp"
#include "../Pontos multi-dimensionais - POO/Ponto2D.hpp"

/**
 * \Um ponto tridimensional.
 */
class Ponto3D: public Ponto2D {
public:
	Ponto3D(double x, double y, double z) :
			Ponto2D(x, y), _z(z) {
	}
	virtual double getZ() const {
		return _z;
	}
	virtual std::string to_string() const override;

	/**
	 * A dist�ncia entre pontos de duas dimens�es � calculada da seguinte forma
	 * que �: sqrt((x1 - x2)^2 + (y1 - y2)^2 + (z1 - z2)^2).
	 * Onde x1 � a coordenada x do primeiro ponto, e x2 � a coordenada x do segundo ponto,
	 * y1 � a coordenada y do primeiro ponto, e y2 � a coordenada y do segundo ,
	 * z1 � a coordenada z do primeiro ponto, e z2 � a coordenada z do segundo ponto.
	 */
	virtual double distancia(Ponto *p) const override;
	virtual int getDimensao() const override {
		return 3;
	}
	;
protected:
	double _z; ///< A terceira coordenada do ponto.
};

#endif
