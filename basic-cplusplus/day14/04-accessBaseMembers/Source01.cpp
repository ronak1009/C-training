class Base {
public:
	void f() {};
};

class Derived : public Base
{
public:
	void g() {
		f(); // calls Base::f
	}

};

int main() {
	Derived d;
	d.f();
	d.g();

}

/*
'g' -> function of derived class
'f' -> function of base class

g calls f too.
derived class object can directly call the public methods of base class.
*/

