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
		Point p1(2, 3);
		Point p2(5, 6);

		cout << p1 + p2;
		cout << p1 - p2;
		cout << p1 * p2;
		cout << p1 / p2;
	}
	catch(const std::runtime_error& e) {
		std::cout << "Îøèáêà: " << e.what() << std::endl;
	}

	return 0;
}
