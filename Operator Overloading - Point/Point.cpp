#include <iostream>

#include "Point.h"

std::ostream& operator <<(std::ostream &out, const Point &p) {
	// TODO: implement this operator.
	out << "(" << p.x << "," << p.y << ")";
}

std::istream& operator >>(std::istream &in, Point &p) {
	// TODO: implement this operator.
	in >> p.x >> p.y;
	return in;
}

Point Point::operator +(const Point &p) {
	// TODO: implement this operator.
	Point p2;
	p2.x = this->x + p.x;
	p2.y = this->y + p.y;
	return p2;
}

Point& Point::operator +=(const Point &p) {
	// TODO: implement this operator.
	double newX = this->x + p.x;
	double newY = this->y + p.y;
	this->x = newX;
	this->y = newY;
	return *this;
}
