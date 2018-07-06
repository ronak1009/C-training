#include <iostream>

class Circle {

public:
	Circle(int r);
	void SetRadius(int r);

private:
	int m_radius;
};

Circle::Circle(int r) : SetRadius(radius){
	//SetRadius(r);
}
void Circle::SetRadius(int r) {
	if (r < 0)
		throw 101; //exception is thrown
	m_radius = r;
}

int main() {
	try
	{
		Circle a = 5;
		a.SetRadius(-5);
	}
	catch (int error)
	{
		std::cout << "Error:: " << error << std::endl;
		std::cout << "Error. Provide valid input" << std::endl;
	}

}
/*
Initialization list must be used for initialization of data members and not for making
function calls.
 - very useful when the data members have constant values.

But you can update it as:
checkRadius(int r) {return r};

Circle(int r): m_radius(checkRadius(r)){};
*/