#include <iostream>
//for the paramters, the datatype is required to be mentioned in the function definition/declaration
void add(int a, int j) {
	std::cout << "a + j = " << a + j << std::endl;
}

void main() {
	int i, j;
	std::cout << "i ?";
	std::cin >> i;
	std::cout << "j ?";
	std::cin >> j;

	add(i, j);

}



/*
function with parameters
the callee function has arguments and the function definition has parameters.
This is just terminology difference however logically they mean that the function is getting some input(s).
*/