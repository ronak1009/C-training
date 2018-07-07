class Math
{
public:
	static int Max(int n1, int n2);

private:

};

int Math::Max(int n1, int n2) {
	return n1 > n2 ? n1 : n2;
}

int main() {
	int result = Math::Max(1, 2);
}

/*
Static member function : not using any data members
to use static member function, we don't have to create an object of class
use it directly using the classname and scope resolution operator.

Static member functions should not use this* Pointers. 
'this' pointer is not available as no object is present.

*/