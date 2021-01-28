#include "../Pontos multi-dimensionais - POO/Ponto2D.hpp"
using namespace std;
#include <cmath>

string Ponto2D::to_string() const {
	return std::to_string(_x) + " " + std::to_string(_y);
}

double Ponto2D::distancia(Ponto *p) const {
	if (p->getDimensao() == 2) {
		Ponto2D *pd = dynamic_cast<Ponto2D*>(p);
		pd->to_string();
		return sqrt(pow((pd->_x - this->_x), 2) + pow((pd->_y - this->_y), 2));
	}
}

void Ponto2D::converteParaPolar() {
	double r = 0;
	double t = 0;
	r = sqrt((pow(_x,2))+(pow(_y,2)));
	t = atan(_y/_x);
	cout << "(" << r << "," << t << ")";

}

//sqrt((x1 - x2)^2 + (y1 - y2)^2)

