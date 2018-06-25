#include <iostream>
#include "math.h"

void main() {
	int a, b;
	std::cout << "a ?";
	std::cin >> a;
	std::cout << "b ?";
	std::cin >> b;
	int result = add(a, b);
	std::cout << "result = " << std::endl;
}

//function definition
int add(int a, int b) {
	return a + b ;
}

/*
<iostream> = vender supplied standard.
"math.h" = header file in the same folder of Source01.cpp
"C:\\temp\\add.h" == header file from different folder.
*/