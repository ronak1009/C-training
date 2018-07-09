#include <iostream>
class Base {
public:
	Base() {
		std::cout << "Base const" << std::endl;
	};
	~Base() {
		std::cout << "Base destructor" << std::endl;
	};
};

class Derived : public Base {
public:
	Derived() {
		std::cout << "Derived constructor" << std::endl;
	};
	~Derived() {
		std::cout << "Derived destructor" << std::endl;
	};
};

int main() {
	Derived d;
}
/*
constructor/destruction order:
Base class is fully created
Dervied class is created

Derived is destroyed
Base is destroyed

Note: the sequence of destructor call is in reverse order of constructor calls sequence.
Destructor works on LIFO == FILO

*/