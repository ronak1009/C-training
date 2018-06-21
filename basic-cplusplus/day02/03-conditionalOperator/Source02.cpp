#include <iostream>
const double PI = 3.14287;
void main() {

	double r = 0;
	std::cout << "Radius = ";
	std::cin >> r;
	if (r >= 0) {
		std::cout << "Area of Circle = " << PI * r * r << std::endl;
	}
	else {
		std::cout << "Incorrect Radius. Radius should be greater than 0" << std::endl;
	}

}