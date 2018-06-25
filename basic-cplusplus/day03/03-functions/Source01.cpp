#include <iostream>
void add() {
	int a, b;
	std::cout << "a ?";
	std::cin >> a;
	std::cout << "b ?";
	std::cin >> b;
	std::cout << "a + b = " << a + b << std::endl;
}

void main() {
	add();
	add();
	add();
}


/*
functions is a named reusable code
W.r.t. call to add function, main is the caller, add is a callee
*/