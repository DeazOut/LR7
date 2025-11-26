#include <iostream>
#include "display.h"

int main() {
	setlocale(0, "russian");
	std::string manufacturer;
	double inch;
	std::string res;
	std::cout << "¬ведите произ-л€, соотношение сторон и дюймовку: \n";
	std::getline(std::cin, manufacturer);
	std::getline(std::cin, res);
	std::cin >> inch;
	

	Display monik(manufacturer, inch, res);
	
	monik.info();
	monik.leniwid(inch, res);

	return 0;
}