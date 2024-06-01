#include "Circle.h"

#include "Point.h"
#include <cmath>

double Circle::area() const
{
	return PI * radius * radius;
}

double Circle::perimeter() const
{
	return 2 * PI * radius;
}

double Circle::contains(Point point) const
{
	double dx = point.pointX - pointX;
	double dy = point.pointY - pointY;

	return sqrt(dx * dx + dy * dy);
}
