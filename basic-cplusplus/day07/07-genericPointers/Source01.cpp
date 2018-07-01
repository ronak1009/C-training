#include <cstdio>
int main()
{
	int a = 1;
	double b = 5.6;
	//implicit conversion of int * to void *
	void *ptr = &a;
	ptr = &b;
	
	//following dereferencing is not allowed
	*ptr = 0.887;
	*ptr = 44;
}

/*
ptr = generic pointer
cannot be dereferenced
you can just hold the address value in it.

Treat it as a transport medium to transfer the information from one-function to another.
Conversion from specific to generic happens implicity.
However from generic to specific conversion has to be done explicity using type cast.
*/