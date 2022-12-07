#include "Point.hpp"
#include <cmath>

/**
 * @param a, b, c Corners of the triangle
 * @return the area of a triangle from its 3 corners
 */
double triangle_area(const Point &a, const Point &b, const Point &c) {
	return std::abs((a.getXFloat() * (b.getYFloat() - c.getYFloat())
					 + b.getXFloat() * (c.getYFloat() - a.getYFloat()) +
					 c.getXFloat() * (a.getYFloat() - b.getYFloat())) / 2.0);
}

/**
 * @param one, two, three Corners of the triangle
 * @param point The point that we're checking the location for
 * @return True if the point is inside the triangle, false if not
 */
bool bsp(const Point &one, const Point &two, const Point &three, const Point &point) {
	// Calculate the total area of the triangle
	double total_area = triangle_area(one, two, three);

	// Calculate the areas of the three smaller triangles formed by
	// two points of the triangle and the point we're checking
	double area1 = triangle_area(point, two, three);
	double area2 = triangle_area(one, point, three);
	double area3 = triangle_area(one, two, point);

	// If the sum of the areas of the three small triangles is equal to
	// the area of the original triangle, then the point is inside
	// the triangle. Otherwise, it is outside. We use 1e-9 to account for small rounding errors
	return std::abs(total_area - (area1 + area2 + area3)) < 1e-9;
}