class Base {
public:
	void f() {};
	void f(int n) {};
};

class Derived : public Base
{
public:
	void f() {};
	void g() {
		f(); //calls Derived::f
		Base::f(); //calls Base::f
	}

};

int main() {
	Derived d;
	d.f();
	d.g();

}
/*
function over-riding
derived class function is overriding base class function.

here the 'f' method of derived class dominates the 'f' method of Base class.
It also hides the Base class all 'f' function signatures.

*/