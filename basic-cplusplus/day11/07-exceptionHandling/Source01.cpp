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
		if (r < 0)
			throw 101; //exception is thrown
		m_radius = r;
	}
public:
	void Print() {
		std::cout << "Radius = " << m_radius << std::endl;
	}
};

int main() {
	try
	{
		Circle a = 5;
		a.Print();
		a.SetRadius(-5);
	}
	catch (int error)
	{
		std::cout << "Error:: " << error << std::endl;
		std::cout << "Error. Provide valid input" << std::endl;
	}
	
}
/*
1. member function can call another member function
2. throwing exception will prevent corruption of your data
3. throwing exception will hault the execution of flow immediately
4. if no try-catch block is available, the application crashes - abort
5. try-catch helps to prevent the application to abort and provide an opportunity to communicate
the exception reason/error message.
*/