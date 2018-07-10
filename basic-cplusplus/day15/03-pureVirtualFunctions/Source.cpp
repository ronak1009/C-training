class Base {
public:
	virtual void f() = 0; //pure virtual
	virtual void g() = 0;
public:
	virtual void h() {}; //partly virtually
};

class Derived : public Base {
public:
	void f() {};
	void g() {};
};

int main() {
	Base base;
	Derived derived;
	Base *pbase = &derived;

}
/*
When any class has pure virtual member function, then we cannot create objects of that class.
The derived class should implment them compulsorily.

Such a class is called - Abstract class
Abstract class cannot be initialized.

Only those derived class can be instantiated, which has implemented all the pure virtual member functions of its parent class chain.
Such a class is called concrete class.
*/