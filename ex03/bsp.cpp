#include "Point.hpp"

bool pointOnLine(Point const loc, Point const p1, Point const p2) {
	if (loc == p1 || loc == p2)
		return true;
	float dxc = loc.getXFloat() - p1.getXFloat();
	float dyc = loc.getYFloat() - p1.getYFloat();
	float dxl = p2.getXFloat() - p1.getXFloat();
	float dyl = p2.getYFloat() - p1.getYFloat();
	float cross = dxc * dyl - dyc * dxl;
	if (cross != 0)
		return true;
	return false;
}

float pointInside(Point const loc, Point const p1, Point const p2)
{
	if (pointOnLine(loc, p1, p2))
		return -1;
	return (loc.getXFloat() - p2.getXFloat()) *
			(p1.getYFloat() - p2.getYFloat()) -
			(p1.getXFloat() - p2.getXFloat()) *
			(loc.getYFloat() - p2.getYFloat());
}

//TODO VERIFY THIS PLS TY
bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float A1 = pointInside(point, a, b);
	float A2 = pointInside(point, b, c);
	float A3 = pointInside(point, c, a);

	return A1 == 0 && A2 == 0 && A3 == 0;
}