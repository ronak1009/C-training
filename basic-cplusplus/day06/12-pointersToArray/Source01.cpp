#include <iostream>
int main() {
	int a[] = { 1,2,3 };
	int *pa = a;

	std::cout << "Dereferencing pointer to array returns first element of array : " << *pa << std::endl;

}
/*
when we are defining a variable to be representing an array,
then the address of the first element in the array is stored in the variable.

a[] = [1,2,3] => [100][101][102]
a = 100
pa = 100
&a[0] = 100

dereferencing always returns the value stored at the memory location it is referening.
thus *pa = a  => stores the value of mem. location of the first element in the array

*/