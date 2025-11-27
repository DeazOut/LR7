#pragma once
#include <string>
#include <cmath>

class Display {
private:
	std::string manufacturer;
	double inch;
	std::string res;

public:
	Display(std::string man, double in, std::string r) {
		manufacturer = man;
		inch = in;
		res = r;
	}

	void info() {
		std::cout << "Производитель: " << manufacturer << "\n" << "Дьюймы: " << inch << '\n' << "Соотношение: " << res << std::endl;
	}

	void leniwid() {
		int pos, x, y;

		pos = res.find(":", 1);
		x = std::stoi(res.substr(0, pos));
		y = std::stoi(res.substr(pos + 1));

		double length, width;
		length = (x * (inch * 2.54)) / (sqrt(x * x + y * y));
		width = (y * (inch * 2.54)) / (sqrt(x * x + y * y));
		std::cout << "Длина: " << length << ' ' << "Ширина: " << width << std::endl;
	}

};
