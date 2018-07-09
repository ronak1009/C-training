class A {
public: void f() {};
};

class B {
public:
	void g();
};

class C: public A {};

int main() {
	A a;
	B b;
	C c;
	A *pa = nullptr;
	B *pb = nullptr;
	C *pc = nullptr;
	
	pa = &a;
	pb = &b;
	pa = &b;	//bad
	pa->f();
	pb = &a;	//bad

	pc = &c;
	pc = &a;
	pa = &c; //&c location has data members of A class and pa pointer is of A class type and A can access members functions of A 
	//such that member functions can access all data members of A class.

}
/*
the method call happens by just checking what is the datatype of the pointer or object and allows the function call to happen
 - there is no type safety whether the pointer is pointing to correct object space or not.
 - thus assignment needs to be blocked for the pointer to point wrong object.

 assignment of pointers to an object space is allowed only when:
  pointer calls the member functions of its type
  if the pointing location, contains the data members of pointer type then assignment is allowed


-----------------------------------------------
				Base class		Derived class
-----------------------------------------------
Baseclass		Yes				Yes
Pointer
-----------------------------------------------
Derviedclass	-				Yes
Pointer
-----------------------------------------------
*/