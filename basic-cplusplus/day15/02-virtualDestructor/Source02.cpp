class Base {
public:
	Base() {};
	virtual	~Base() {};
};

class Derived :public Base
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
	delete pbase2; //destructor of derived -&- then destructor of base will be called
	pbase2 = nullptr;
}
/*
base class destructor is marked virtual
thus the destructor call for all the objects pointed by base class constructor will pass through the derived class

*/