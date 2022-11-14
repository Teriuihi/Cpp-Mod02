#ifndef FIXED_HPP
#define FIXED_HPP


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
