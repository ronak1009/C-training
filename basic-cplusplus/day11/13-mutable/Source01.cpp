#include <iostream>

class Circle {

public:
	Circle(int r);
	void SetRadius(int r);
	double GetArea() const;
private:
	int m_radius;
	mutable double m_area;
};

Circle::Circle(int r) {
	SetRadius(r);
}
void Circle::SetRadius(int r) {
	if (r < 0)
		throw 101;
	m_radius = r;
	m_area = -1;
}
double Circle::GetArea() const {
	if (m_area < 0)
		m_area = 3.14 * m_radius * m_radius;
	return m_area;
}

int main() {
	Circle a = 10;
	double area = a.GetArea();
	const Circle b(1);
	area = b.GetArea();
}
/*
1.	'mutable' is a keyword
2.	allows permission to mutate or change the value of a data member in a const function
3.	mutable data members helps in caching the value to prevent multiple operations/calc. to happen\
	when there is no change to the object.
*/