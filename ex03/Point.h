#ifndef POINT_H
#define POINT_H

#include "Fixed.h"
class Point {
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	Point(float xf, float yf);
	Point(Point const &point);
	Point operator=(Point const &point);
	~Point();
	bool operator==(const Point &point) const;

	const Fixed &getX() const;
	const Fixed &getY() const;
	float getXFloat() const;
	float getYFloat() const;
};

std::ostream& operator<<(std::ostream& o, Point const& point);

#endif
