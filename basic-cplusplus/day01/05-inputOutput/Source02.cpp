#include "stdio.h"
#include<iostream>
void main() {
	int a = 0;
	printf("a = ");
	//scanf_s -> MS visual studio compilers new format
	scanf_s("%d", &a);
	printf("User entered a = %d\n", a);

	int b = 0;
	std::cout << "b = ";
	std::cin >> b;

	std::cout << "User entered b = " << b << std::endl;

}
/*
	>> extraction operator
*/