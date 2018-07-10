class Base {
public:
	virtual void f() {};
};

class Derived : public Base {
public:
	void f() {};
};

int main() {
	Base base;
	base.f(); //calls base

	Derived derived;
	derived.f(); //calls derived

	Base *pbase = &base;
	pbase->f(); //calls base

	Base *pbase2 = &derived;
	pbase2->f();	//calls derived

	Base &rBase = base;
	rBase.f(); //calls base

	Base &r2Base = derived;
	r2Base.f(); //calls derived

	Derived &rDerived = derived;
	rDerived.f(); //calls derived

	Derived *pDerived = &derived;
	pDerived->f();//calls derived

	Base base2 = base;
	base2.f(); //calls base

	Base base3 = derived;
	base3.f(); //calls base - object slicing scenario

	Derived derived2 = derived;
	derived2.f(); //calls derived
}

/*
making base class methods to virtual will provide a mechanism to point call the method base on object, 
the pointer is pointing.
*/