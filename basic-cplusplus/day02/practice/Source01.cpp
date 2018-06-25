/*
Write a program that defines two variable 'a' & 'b'.
Exchange values b/w a & b nonly if the values in a & b are in descending order. 
*/
#include <cstdio>
void main() {
	int a, b, temp;
	//get the data from users
	printf("enter 2 numbers\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	
	if (a > b) {
		//swap
		int temp = b;
		b = a;
		a = temp;
	}
	printf("a = %d, b = %d", a, b);
}