#include <iostream>

struct Circle {
	int m_radius; //data member

	//member function - > method
	void Print() {
		std::cout << "Radius = " << m_radius << std::endl;
	}
};

int main() {
	Circle a = { 5 };
	a.Print();
}
/*
compiler refers to the data member inside data members as this->data_member wherever possible.
*/