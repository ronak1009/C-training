/*Passing array as an argument*/

#include <iostream>
#define N 5
#define S 6
#define L 3
void print(int value[], int size);
void print(int value[]);

int main() {
	int a[N] = { 1,2,3,4,5 };
	int len = 0;
	len = sizeof(a) / sizeof(int);
	print(a, len);
//	print(a);
	int b[S] = { 10,20,30,40,50,60 };
	len = sizeof(b) / sizeof(int);
	print(b, len);
//	print(b);
	int c[L] = { 100,200,300 };
	len = sizeof(c) / sizeof(int);
	print(c, len);
//	print(c);
}

void print(int n[], int size) {
	for (int i = 0; i < size; i++)
		std::cout << n[i] << std::endl;
}

void print(int n[]) {
	//here the array is passed by using pointers
	//int len = sizeof(n) / sizeof(int); -> cannot give the correct value, as the n is reference to the array
	for (int i = 0; i < N; i++)
		std::cout << n[i] << std::endl;
}
/*
C++ arrays are not length bound.
if your program accesses the element which is out the scope of array, it will access the particular memory location

sizeof is an operator & argument is the datatype/variable -returns size in bytes
*/
