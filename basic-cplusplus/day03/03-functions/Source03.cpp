#include <iostream>
//for the paramters, the datatype is required to be mentioned in the function definition/declaration
int add(int a, int b) {
	return a + b;
}

void main() {
	int i, j;
	std::cout << "i ?";
	std::cin >> i;
	std::cout << "j ?";
	std::cin >> j;

	int ans = add(i, j);

}

/*function returns a value*/