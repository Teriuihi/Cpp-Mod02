#include <iostream>
#include "Point.h"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point a = Point(0, 0);
	Point b = Point(3, 0);
	Point c = Point(0, -3);
	Point loc = Point(1, 0);
	std::cout << "Creating triangle..." << std::endl;
	std::cout << "\tPoint a: " << a << std::endl;
	std::cout << "\tPoint b: " << b << std::endl;
	std::cout << "\tPoint c: " << c << std::endl;
	std::cout << "\tLocation: " << loc << std::endl;
	std::cout << "Location is " << (bsp(a, b, c, loc) ? "inside" : "not inside")
		<< " the triangle!" << std::endl;
	return 0;
}