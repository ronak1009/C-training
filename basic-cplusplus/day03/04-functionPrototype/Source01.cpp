#include <iostream>
//function declaration/prototype
void add(int a, int b);

void main() {
	int a, b;
	std::cout << "a ?";
	std::cin >> a;
	std::cout << "b ?";
	std::cin >> b;
	add(a, b);
}

//function definition
void add(int a, int b) {
	std::cout << "a + b = " << a + b << std::endl;
}

/*
For C++ compiler to compile the code successfully, it is essential that we specify the declaration of a symbol.
Compiler always looks for the declaration of the symbol.
At times, definition can subsitute declaration; however declaration cannot substitute definition.
*/