#include <iostream>

struct Circle {
	int m_radius; //data member
	//accessor
	int GetRadius() {
		return m_radius;
	}
	//mutator
	void SetRadius(int r) {
		m_radius = r;
	}

	//member function - > method
	void Print() {
		std::cout << "Radius = " << m_radius << std::endl;
	}
};

int main() {
	Circle a = { 5 };
	a.Print();
	a.SetRadius(10);
	a.Print();

	std::cout << "Radius = " << a.GetRadius() << std::endl;
}