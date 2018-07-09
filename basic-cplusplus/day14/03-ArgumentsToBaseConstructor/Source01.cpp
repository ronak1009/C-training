#include <iostream>
class Base {
public:
	Base(int n) {
		std::cout << "Base const" << std::endl;
	};
	~Base() {
		std::cout << "Base destructor" << std::endl;
	};
};

class Derived : public Base {
public:
	//forcing dervied class constructor to initialize the base class using specific constructor of base class
	Derived() : Base(4){
		std::cout << "Derived constructor" << std::endl;
	};
	Derived(int n) : Base(n) {
		std::cout << "Derived's Parametric constructor" << std::endl;
	};
	~Derived() {
		std::cout << "Derived destructor" << std::endl;
	};
};

int main() {
	Derived d;
}
/*
Base has parametric constructor and dervied class has default constructor

Default constructor always calls the default constructor of base class.

to make your dervied class call a specific constructor - then this specification happens
by the use of initialization list in the constructor defintion of dervied class constructor


*/