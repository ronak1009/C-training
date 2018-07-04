#include <iostream>

class Circle {
private:
	int m_radius;

public: //constructor section
		//non-parametric, default constructor
	Circle() {
		m_radius = 0;
	}
	Circle(int r) {
		SetRadius(r);
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
/*
all member functions behave like inline by default.
 - here constructor and mutator behave like inline  function
 - step into is not allowed for inline functions definition

IDE settings to experience inline nature:
project settings -> c/C++ -> general:: c7 compatible debugger
project settings -> c/C++ -> optimization:: inline only for inline functions


 */