class Base {
public:
	void f() {};
	void f(int n) {};
};

class Derived : public Base
{
public:
	void f() {
		Base::f();//calls Base::f
		Base::f(6);//calls Base::f
	};
	void g() {
		f(); //calls Derived::f
		Base::f(); //calls Base::f
	}

};

int main() {
	Derived d;
	d.Base::f(); //call the base::f directly from the object
	d.f();
	d.g();

}