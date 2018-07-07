#include <iostream>

class Circle {

public:
	Circle(int r);
	void SetRadius(int r);
	double GetArea() const;
private:
	int m_radius;
};

Circle::Circle(int r) {
	SetRadius(r);
}
void Circle::SetRadius(int r) {
	if (r < 0)
		throw 101; //exception is thrown
	m_radius = r;
}
double Circle::GetArea() const {
	return 3.14 * m_radius * m_radius;
}

int main() {
	Circle a = 10;
	double area = a.GetArea();
	const Circle b(1);
	area = b.GetArea();
}
/*
1. when your member function is not going to alter the data member,
them you declare your member function to be const.

2. for the const function, the behavior of 'this' pointer is like:
	const Circle * const this;

3. thus, the pointer is visualizing the object space as constant in the scope of const mem functions
 - we can also conclude that functions can be marked const, only where this * is available.

4. mutation to local variable is allowed within the const mem function,
as they are placed outside the object space.

5. const member functions cannot be called on non constant variable. 
const member functions can call other constant member functions
*/