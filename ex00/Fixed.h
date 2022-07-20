#ifndef FIXED_H
#define FIXED_H


class Fixed {
private:
	int val;
	static const int w = 8;
public:
	Fixed();
	Fixed(Fixed const &fixed);
	Fixed& operator=( Fixed const &fixed);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits ( int const raw);
};


#endif
