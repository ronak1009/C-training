/*
Write set_seed function with following signature::
void set_seed (unsigned int seed);
the function is to be used to initialize seed value used in the random function.
*/
#include <stdlib.h>
#include <stdio.h>

#define N 3
void set_seed(unsigned int const seed) {
	srand(seed);
}

void populateArray(int * a, int size);
void printArray(int * a, int size);

int main() {
	int a[N] = { 0 };
	//iteration 1 :: seed = 100
	printf("-- Seed: 100\n");
	set_seed(100);
	populateArray(a, N);
	printArray(a, N);

	//iteration 2:: seed = 500
	printf("-- Seed: 500\n");
	set_seed(500);
	populateArray(a, N);
	printArray(a, N);

	//iteration 3 :: seed = 9856
	printf("-- Seed: 9856\n");
	set_seed(9856);
	populateArray(a, N);
	printArray(a, N);
}

void populateArray(int *a, int size) {
	for (int i = 0; i < size; i++) {
		*(a + i) = rand() % 100;
	}
}

void printArray(int *a, int size) {
	for (int i = 0; i < size; i++)
		printf("a[%d] = %d\n", i, *(a + i));
}
