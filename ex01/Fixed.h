#ifndef FIXED_H
#define FIXED_H


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
};

std::ostream& operator<<(std::ostream& o, Fixed const& fixed);

#endif
