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
constructors are called only once per an object.
they are called for every object.
constructors cannot be called explicitly. They are implicitly called by compiler.
attempting to call constructors explicitly results into compilation error.
*/