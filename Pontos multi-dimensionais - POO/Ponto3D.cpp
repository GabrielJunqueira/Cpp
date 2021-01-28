#include "../Pontos multi-dimensionais - POO/Ponto3D.hpp"
using namespace std;
#include <cmath>

string Ponto3D::to_string() const {
	return std::to_string(_x) + " " + std::to_string(_y) + std::to_string(_z);
}

double Ponto3D::distancia(Ponto *p) const {
	if (p->getDimensao() == 3) {
		Ponto3D *pt = dynamic_cast<Ponto3D*>(p);
		pt->to_string();
		return sqrt(pow((pt->_x - this->_x), 2) + pow((pt->_y - this->_y), 2) + pow((pt->_z - this->_z), 2));
	}
}
