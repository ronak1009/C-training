class Base {
public:
	Base() {};
	~Base() {};
};

class Derived:public Base
{
public:
	Derived() {};
	~Derived() {};

private:

};
int main() {
	Base *pbase = new Base;
	delete pbase;
	pbase = nullptr;

	Derived *pderived = new Derived;
	delete pderived;
	pderived = nullptr;

	Base *pbase2 = new Derived;
	delete pbase2;
	pbase2 = nullptr;
}
/*
when the base class is not defined with virtual destructor, then if we attempt to delete the derived object using base class pointer
the destructor of derived class is skipped. destructor is called only for the base class.

this is incorrect behavior and thus cause memory leakages.
*/