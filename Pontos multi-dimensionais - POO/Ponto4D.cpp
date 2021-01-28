#include "../Pontos multi-dimensionais - POO/Ponto4D.hpp"
using namespace std;
#include <cmath>

string Ponto4D::to_string() const {
	return std::to_string(_x) + " " + std::to_string(_y) + std::to_string(_z) + std::to_string(_w);
}

double Ponto4D::distancia(Ponto *p) const {
	if (p->getDimensao() == 4) {
		Ponto4D *pq = dynamic_cast<Ponto4D*>(p);
		pq->to_string();
		return sqrt(
				pow((pq->_x - this->_x), 2) + pow((pq->_y - this->_y), 2) + pow((pq->_z - this->_z), 2)
						+ pow((pq->_w - this->_w), 2));
	}
}
