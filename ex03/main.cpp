#include <iostream>
#include "Point.hpp"

bool bsp(Point const &a, Point const &b, Point const &c, Point const &point);

int main() {
	Point a = Point(0, 0);
	Point b = Point(3, 0);
	Point c = Point(0, -3);
	Point loc = Point(1, -1);
	Point loc2 = Point(5, 5);
	Point loc3 = Point(-1, 0);
	std::cout << "Creating triangle..." << std::endl;
	std::cout << "\tPoint a: " << a << std::endl;
	std::cout << "\tPoint b: " << b << std::endl;
	std::cout << "\tPoint c: " << c << std::endl;
	std::cout << "\tLocation 1: " << loc << std::endl;
	std::cout << "\tLocation 2: " << loc2 << std::endl;
	std::cout << "\tLocation 3: " << loc3 << std::endl;
	std::cout << "Location is " << (bsp(a, b, c, loc) ? "inside" : "not inside")
			  << " the triangle!" << std::endl;
	std::cout << "Location is " << (bsp(a, b, c, loc2) ? "inside" : "not inside")
			  << " the triangle!" << std::endl;
	std::cout << "Location is " << (bsp(a, b, c, loc3) ? "inside" : "not inside")
			  << " the triangle!" << std::endl;
	return 0;
}