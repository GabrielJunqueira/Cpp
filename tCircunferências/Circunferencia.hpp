#define M_PI 3.14
#define CIRCUNFERENCIA_H

#include <cmath>


struct Circunferencia {
	double _xc;
	double _yc;
	double _raio;

	Circunferencia(double, double, double);
	double calcularArea();
	bool possuiIntersecao(Circunferencia* c);
};
