#include <iostream>
#include "Point.h"

Point::Point() {
//	std::cout << "Default constructor called" << std::endl;
}

Point::Point(float xf, float yf) : x(xf), y(yf) {
//	std::cout << "Full constructor called" << std::endl;
}

Point::Point(const Point &point) : x(point.x), y(point.y){
//	std::cout << "Copy constructor called" << std::endl;
}

const Fixed &Point::getX() const {
	return x;
}

const Fixed &Point::getY() const {
	return y;
}

Point Point::operator=(const Point &point) {
//	std::cout << "Assignment overwrite called" << std::endl;
	return Point(point.x.toFloat(), point.y.toFloat());
}

Point::~Point() {
//	std::cout << "Destructor called" << std::endl;
}

float Point::getXFloat() const {
	return getX().toFloat();
}

float Point::getYFloat() const {
	return getY().toFloat();
}

bool Point::operator==(const Point &point) const {
	return (this->getX() == point.getX() && this->getY() == point.getY());
}

std::ostream &operator<<(std::ostream &o, const Point &point) {
	o << "X: " << point.getX().toFloat() << " Y: " << point.getY().toFloat();
	return o;
}
