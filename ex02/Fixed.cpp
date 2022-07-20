#include <iostream>
#include <cmath>
#include "Fixed.h"

Fixed::Fixed() : val(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val) : val(val << b) {
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val) : val((int)roundf(val * (1 << b))) {
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : val(fixed.val) {
	//std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
	//std::cout << "Copy assignment operator called" << std::endl;
	val = fixed.val;
	return *this;
}

int Fixed::getRawBits( void ) const {
	//std::cout << "getRawBits member function called" << std::endl;
	return val;
}

void Fixed::setRawBits(const int raw) {
	//std::cout << "setRawBits member function called" << std::endl;
	val = raw;
}

float Fixed::toFloat( void ) const {
	return ((float) val / (float) (1 << b));
}

int Fixed::toInt( void ) const {
	return val >> b;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
	return f1 < f2 ? f1 : f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) {
	return f1 < f2 ? f1 : f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
	return f1 > f2 ? f1 : f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) {
	return f1 > f2 ? f1 : f2;
}

bool Fixed::operator>(const Fixed &fixed) const {
	return (this->getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const {
	return (this->getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const {
	return (this->getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const {
	return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const {
	return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const {
	return (this->getRawBits() != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fixed) const {
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const {
	return Fixed(this->toFloat()/ fixed.toFloat());
}

Fixed &Fixed::operator++() {
	val++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed old = *this;
	operator++();
	return old;
}

Fixed &Fixed::operator--() {
	val--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed old = *this;
	operator--();
	return old;
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed) {
	o << fixed.toFloat();
	return o;
}
