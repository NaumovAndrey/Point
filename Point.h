#pragma once
#include <iosfwd>
#include <ostream>

class Point
{
public:
	double pointX;
	double pointY;

public:
	Point(double x, double y) : pointX(x), pointY(y) {}
	~Point();

	double getPointX() const;
	double getPointY() const;
	void setPointX(double x);
	void setPointY(double y);

	Point operator+(const Point& other) const;
	Point operator-(const Point& other) const;
	Point operator*(const Point& other) const;
	Point operator/(const Point& other) const;
	
	friend std::ostream& operator<<(std::ostream &out, const Point &p);
};