/*Passing array as an argument*/

#include <iostream>

//void print(int value[], int size);
void print(int value[]);

int main() {
	//considering 23 as the terminating value of the array
	int a[] = { 1,2,3,4,5, 23 };
	
	//print(a, len);
	print(a);

	int b[] = { 10,20,30,40,50,60, 23 };
	
	//print(b, len);
	print(b);

	int c[] = { 100,200,300, 23 };
	
	//print(c, len);
	print(c);
}

void print(int n[], int size) {
	for (int i = 0; i < size; i++)
		std::cout << n[i] << std::endl;
}

void print(int n[]) {
	int i = 0;
	while (n[i] != 23) {
		std::cout << n[i] << std::endl;
		i++;
	}
}
/*
C++ arrays are not length bound.
if your program accesses the element which is out the scope of array, it will access the particular memory location

sizeof is an operator & argument is the datatype/variable -returns size in bytes
*/
