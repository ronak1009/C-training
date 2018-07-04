#include <iostream>

struct Circle {
	int radius;
	
	int GetRadius() {
		return radius;
	}

	void SetRadius(int radius) {
		this->radius = radius;
	}

	void Print() {
		std::cout << "Radius = " << radius << std::endl;
	}
};

int main() {
	Circle a = { 5 };
	a.Print();
	a.SetRadius(10);
	a.Print();

	std::cout << "Radius = " << a.GetRadius() << std::endl;
}

/*
when the variable name conflict happens, parameter takes precedence over data members.
note:
the variable having less scope is of high precedence than the variable having large scope.

if explicit writing or accessing value from a data member is required, use this pointer.
have a consistent naming convention like m_* or _* for the data members naming.
*/