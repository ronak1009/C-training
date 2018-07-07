#include <iostream>

struct Circle {
	int radius;

	int GetRadius() {
		return radius;
	}

	void SetRadius(int radius) {
		Circle::radius = radius;
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
using the scope resolution operator in-case of conflicting situation.
*/