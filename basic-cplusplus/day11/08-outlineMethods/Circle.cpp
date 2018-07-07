#include <iostream>
#include "Circle.h"

Circle::Circle() {
	m_radius = 0;
}
Circle::Circle(int r) {
	SetRadius(r);
}
int Circle::GetRadius() {
	return m_radius;
}
void Circle::SetRadius(int r) {
	if (r < 0)
		throw 101; //exception is thrown
	m_radius = r;
}
void Circle::Print() {
	std::cout << "Radius = " << m_radius << std::endl;
}
/*
here, we are outlining the member functions, constructors of the class
 - thus the step into is allowed while debugging.

another visual inspection:
	the definition of the member functions / constructors are outside the class declaration
	class declaration contains the declarations only.
*/