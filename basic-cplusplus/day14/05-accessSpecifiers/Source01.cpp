class Base {
public: 
	void f() {}
private:
	int m_n;
protected:
	double m_double;
};

class Derived : public Base {
public: 
	void g() {
		f();
		m_n = 9; //private members
		m_double = 8.5;
	}
private: 
	int m_u;
};

int main() {
	Derived d;
	d.f();
	d.m_n; //private members
	d.m_double;
}


/*
derived class can access all the public members of base class.
derived class cannot access private members of base class.

-----				Base class			-----
Derived class	Public		Pirvate		Protected
(defintion)		Yes			-			Yes

Derived class	Yes			-			-
non-members

*/
