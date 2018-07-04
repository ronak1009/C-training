#include <iostream>

struct Circle {
	int m_radius; //data member

	
	//member function - > method
	void Print() {
		std::cout << "Radius = " << this->m_radius << std::endl;
	}
};



int main() {
	Circle a = { 5 };
	a.Print();

	Circle b = { 10 };
	b.Print();
}

/*
Advantages of using pointers/references while passing data to a function
1. No data redundancy
2. Memory saving
3. Avoiding calls to constructor/destructor
4. when pass by value happens, the entire data is to be re-created which is a big performance hit.

in C++
1. functions can be part of a structure definition.
2. 'this' pointer is exist in the scope of member function.
3. 'this' pointer behaves like local member created on stack.
4. 'this' pointer provides us access to the data members of the object who's member function is called
5. 'this' is not a part of Object space.
6. 'this' pointer is created by compiler.
7. 'this' pointer holds the address of object on which the member function is called i.e. current object
8. 'this' is a keyword.
9. member functions are not stored in the object space. they are stored in code segment.
*/