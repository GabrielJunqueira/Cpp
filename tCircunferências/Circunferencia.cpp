#include "Circunferencia.hpp"
#define M_PI 3.14
#define CIRCUNFERENCIA_H

#include <cmath>


Circunferencia::Circunferencia(double x, double y, double raio){
	_xc = x;
	_yc = y;
	_raio = raio;
}

double Circunferencia::	calcularArea(){
	return pow(_raio, 2)*M_PI;
}

bool Circunferencia:: possuiIntersecao(Circunferencia* c){
	double distCentros = sqrt(pow(c ->_xc - this ->_xc, 2) + pow(c ->_yc - this->_yc, 2));
	if (distCentros >  c ->_raio + this -> _raio){
		 return false;
	}
	else{
		return true;
	}

}
