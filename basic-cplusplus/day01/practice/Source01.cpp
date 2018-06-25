/*
Write a program that defines two int variables 'a' and 'b'.
Initialize them with values of your choice.
Write the program such that the values of a and b are swapped.
*/
#include <cstdio>
void main() {
	int a, b, temp;
	a = 5;
	b = 7;
	printf("a = %d, b = %d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("a = %d, b = %d\n", a, b);
}