#ifndef FIXED_H
#define FIXED_H

#include <ostream>

class Fixed {
private:
	int val;
	static const int b = 8;
public:
	Fixed();
	Fixed(Fixed const &fixed);
	Fixed(const int val);
	Fixed(const float val);
	Fixed& operator=( Fixed const &fixed);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits ( int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;

	static Fixed& min(Fixed& f1, Fixed& f2);
	static const Fixed& min(const Fixed& f1, const Fixed& f2);
	static Fixed& max(Fixed& f1, Fixed& f2);
	static const Fixed& max(const Fixed& f1, const Fixed& f2);

	bool operator>(Fixed const &fixed) const;
	bool operator<(Fixed const &fixed) const;
	bool operator>=(Fixed const &fixed) const;
	bool operator<=(Fixed const &fixed) const;
	bool operator==(Fixed const &fixed) const;
	bool operator!=(Fixed const &fixed) const;

	Fixed operator+(Fixed const &fixed) const;
	Fixed operator-(Fixed const &fixed) const;
	Fixed operator*(Fixed const &fixed) const;
	Fixed operator/(Fixed const &fixed) const;

	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
};

std::ostream& operator<<(std::ostream& o, Fixed const& fixed);

#endif
