#include "Circle.h"
#include "main.h"
#include "Point.h"
#include <clocale>
#include <iostream>
#include <ostream>
#include <stdexcept>


int main()
{
	setlocale(LC_ALL, "rus");

	try{
		Point p1(1, 2);
		Point p2(3, 4);

		cout << p1 + p2;
		cout << p1 - p2;
		cout << p1 * p2;
		cout << p1 / p2;

		cout << "---" << endl;

		Circle circle(0, 0, 1);
		cout << circle.area() << endl;
		cout << circle.perimeter() << endl;
		cout << circle.contains(p1) << " ";
		if(circle.contains(p1) <= circle.getRadius()){
			cout << "Точка принадлежит области" << endl;
		}
		else {
			cout << "Точка не принадлежит области" << endl;
		}
	}
	catch(const std::runtime_error& e) {
		std::cout << "Ошибка: " << e.what() << std::endl;
	}

	return 0;
}
