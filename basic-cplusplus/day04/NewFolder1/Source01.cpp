#include <iostream>

int a = 8;
void main() {
	int a = 2;
	std::cout << "local a = " << a << std::endl;
	std::cout << "global a = " << ::a << std::endl;
}

/*
:: is called scope resolution operator
*/