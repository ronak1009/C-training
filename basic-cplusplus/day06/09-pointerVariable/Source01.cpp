#include <iostream>

int main() {
	int a = 5;
	int* pa = &a;
	std::cout << &a << std::endl;
	std::cout << pa << std::endl;
}