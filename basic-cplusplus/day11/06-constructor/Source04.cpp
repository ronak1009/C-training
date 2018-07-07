#include <iostream>

class Circle {
private:
	int m_radius;

public: //===== constructor section =====

	Circle(int r = 0) {
		m_radius = r;
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

	Circle *pc = &a;

	Circle &ra = a;
}
/*
another tricks developer use to use same definition for constructor definition
	Circle (int r = 0) {m_radius = r;}
	This will represent as default constructor and parametric constructor

constructors are not called when pointers & references are created for an object.
 - passing arguments as pointers & references improves the performance of the application

*/