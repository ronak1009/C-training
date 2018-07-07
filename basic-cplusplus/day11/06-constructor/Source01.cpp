#include <iostream>

class Circle {
private:
	int m_radius;

public: //constructor section
	//non-parametric, default constructor
	Circle() {
		m_radius = 0;
	}
public:
	int GetRadius() {
		return m_radius;
	}
	void SetRadius(int r) {
		m_radius = r;
	}
public:
	void Print() {
		std::cout << "Radius = " << m_radius << std::endl;
	}
};

int main() {
	Circle a;
	a.Print();
}
/*
1. Constructor is a special member function of a class with no return type specified and name same as classname
2. constructors are called automatically, when the object of a class is allocated memory
3. specifying return type to constructor leads to compilation error

4. when a class is written without any constructor, compiler provides a default constructor. It does not do anything.
5. when a constructor is explicity defined in class definition, compiler does not create default constructor
on its own.
6. there are different types of constructor - non-parametric, parametric, copy
7. constructors are used to initialize an object i.e. just after the allocation of memory, you get control of initializing your object
and prevent it from containing random/garbage value.
8. for constructor to come into existence, it should be defined with public access.

*/