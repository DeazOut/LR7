#include <iostream>
#include "display.h"

int main() {
	setlocale(0, "russian");
	std::string manufacturer;
	double inch;
	std::string res;
	std::cout << "Введите произ-ля, соотношение сторон и дюймовку: \n";
	std::getline(std::cin, manufacturer);
	std::getline(std::cin, res);
	std::cin >> inch;
	

	Display monik(manufacturer, inch, res);
	
	monik.info();
	monik.leniwid();

	return 0;
}
