#include <iostream>

int main() {
	int a = 5;
	int* pa = &a;
	std::cout << *pa << std::endl;
}

/*
address -> value of memory location
pointer -> variable used to store the memory location

&a -> returns the MSB of the memory location where the datavalue is stored

* -> is a pointer operator indicating unsigned int datatype which helps compiler to reserve 32bytes foe storing the value of MSB of the memory

* -> is a deferencing operator which is used to traverse back to the actual memory location & obtain the actual datatype stored
in the memory
*/