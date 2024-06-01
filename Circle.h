#pragma once
#include "Point.h"

class Circle : public Point
{
private:
	double PI = 3.1415926535;
	double radius;
public:
	Circle(double x, double y, double r = 1) : Point(x, y), radius(r) {};

	double getRadius() const { return radius; }
	void setRadius(double r) { radius = r; }

	double area() const; //площадь pi*r*r
	double perimeter() const; // 2*pi*r 
	double contains(Point point) const;
};