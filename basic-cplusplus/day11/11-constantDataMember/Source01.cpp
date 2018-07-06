class Math {
private:
//	const double m_pi = 3.14;   => not allowed on older C++ compiler
	const double m_pi;
public:
	Math();
};

Math::Math() : m_pi(3.14) {
//m_pi = 3.14;  => this is also not allowed as this is assignment operation.
}
int main() {
	Math m1;
}

/*
Initializing a constant data member at class definition is allowed in modern c++.
 - if you have compilation error, then you have to initialize your constant data member
 using constructor initialization list.

 Initialization list is truely initializing the data members and not assignment operation.
*/