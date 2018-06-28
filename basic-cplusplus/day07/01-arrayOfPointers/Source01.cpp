#include <iostream>
#define N 3
int main() {
	int a[N] = { 10,20,0 };
	//creating array of pointers which points to integer type data values
	int *pa[N];
	for (int i = 0; i < N; i++)
		pa[i] = &a[i];
	for (int i = 0; i < N; i++)
		std::cout << pa[i] << " :: " << *pa[i] << std::endl;

	int *pn[N] = { &a[0], &a[2] };
	*pn[1] = 5;

}
/*
pn[1] = address of location of a[1]
any pointer having value = 0 is called NULL POINTER
NULL pointer cannot be dereferenced -> null pointer exception

NULL value is most chosen value when there is nothing pointer should point to.
*/
