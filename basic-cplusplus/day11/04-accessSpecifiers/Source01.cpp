#include <iostream>

struct Circle {
private:
	int m_radius;

public:
	int GetRadius() {
		return m_radius;
	}
	void SetRadius(int r) {
		m_radius = r;
	}
	void Print() {
		std::cout << "Radius = " << m_radius << std::endl;
	}
};

int main() {
	Circle a ;
	a.Print();
	a.SetRadius(10);
	a.Print();

	std::cout << "Radius = " << a.GetRadius() << std::endl;
}
/*
when a data member is set to private, it is not directly accessible using object.
the access specifier gets applied througout the scope unless it encounters another access specifier

*/