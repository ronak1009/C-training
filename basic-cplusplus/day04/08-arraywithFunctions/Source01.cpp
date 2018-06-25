/*Passing array element as an argument*/

#include <iostream>
#define N 5

void print(int value);

int main() {
	int a[N] = { 1,2,3,4,5 };
	for (int i = 0; i < N; i++)
		print(a[i]);
}

void print(int n) {
	std::cout << n << std::endl;
}