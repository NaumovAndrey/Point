#include "Point.h"
#include <iosfwd>
#include <stdexcept>

Point::~Point(){}

double Point::getPointX() const
{
	return pointX;
}

double Point::getPointY() const
{
	return pointY;
}

void Point::setPointX(double x)
{
	pointX = x;
}

void Point::setPointY(double y)
{
	pointY = y;
}


Point Point::operator+(const Point& other) const
{
	return Point(getPointX() + other.getPointX(), getPointY() + other.getPointY());
}

Point Point::operator-(const Point& other) const
{
	return Point(getPointX() - other.getPointX(), getPointY() - other.getPointY());
}

Point Point::operator*(const Point& other) const
{
	return Point(getPointX() * other.getPointX(), getPointY() * other.getPointY());
}

Point Point::operator/(const Point & other) const
{
	if(other.pointY == 0)
	{
		throw std::runtime_error("Деление на 0");
	}

	return Point(getPointX() / other.getPointX(), getPointY() / other.getPointY());
}

std::ostream & operator<<(std::ostream & out, const Point & p)
{
	out << "x: " << p.pointX << " ";
	out << "y: " << p.pointY << "\n";
	return out;
}


