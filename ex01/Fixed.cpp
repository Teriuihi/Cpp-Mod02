#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : val(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val) : val(val << b) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val) : val((int)roundf(val * (1 << b))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : val(fixed.val) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	val = fixed.val;
	return *this;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return val;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	val = raw;
}

float Fixed::toFloat( void ) const {
	return ((float) val / (float) (1 << b));
}

int Fixed::toInt( void ) const {
	return val >> b;
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed) {
	o << fixed.toFloat();
	return o;
}
