#include <iostream>

class Circle {
private:
	int m_radius;

public: //===== constructor section =====
		//non-parametric, default constructor
	Circle() {
		m_radius = 0;
	}
	Circle(int r) {
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
	//parametric constructor - object creation
	Circle b(5);
	b.Print();

	Circle c = 10; //this works only with single parametric constructor
	c.Print();

	//default constructor - object creation
	Circle a;
	a.Print();
}

/*
here, you can observe constructor overloading.
i.e. multiple constructors definitions are present, differentiated by the parameters they accept.

this is typical example of function overloading.

*/