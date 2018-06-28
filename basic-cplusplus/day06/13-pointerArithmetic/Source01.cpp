#include <iostream>

int main() {
	int a[] = { 7,8,9,10 };
	int *pa = &a[1]; //pointer initialization
	//pa is pointing of 2nd element of array

	std::cout << "a[1] : " << *pa << std::endl;

	pa = pa + 1;
	std::cout << "pa + 1 : " << *pa << std::endl;
	pa = pa + 3;
	std::cout << "pa + 3 : " << *pa << std::endl;

	pa = pa - 2;
	std::cout << "pa - 2 : " << *pa << std::endl;

	int *pb = &a[3];
	std::cout << "pb - 2 : " << *pb << std::endl;

	if (pa == pb)
		std::cout << "The point to same mem location" << std::endl;
	else
		std::cout << "The point to different mem location" << std::endl;
	for (pa = &a[0], pb = &a[3]; pa <= pb; pa++) {
		std::cout << *pa << std::endl;
	}
}





/*
with pa = pointer variable, you can perform the following arthmetic operations
 +  -> asking pointer to store the value of next memory location
 -  -> asking pointer to store the value of previous mem location

 / , * -> not allowed

 pointer comparison is allowed
 pointer initialization
 pointer assignment
*/