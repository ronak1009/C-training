class T {
public :
	void f() {};
	static void g() {};

	void h() {
		f(); //non-static functions can call non-static , static functions
		g();
	}
	static void k() {
		f();
		g();
		h();
	}
	double u;
	static double v;
};
//initialization of static data member
double T::v = 1;



/*
1.	non-static member functions are also known as 'instance methods' b'coz to execute them,
	instance of a class is required.
2. static member functions are also known as 'class methods' b'coz to execute them, specification of
	class is required.
3. non-static data members are also known as 'instance variables' b'coz they are located in object space.
4. static data members are also known as 'class variables'.
5. Unlike non-static data member, static data member need to be defined outside the class definition.
*/