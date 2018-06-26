/*
Write a program that demonstrates linear search.
*/
//comparison sort
#include <cstdio>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int linearSearch(int arr[], int query) {
	int index = -1;
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] == query)
		{
			index = i;
			break;
		}
	}
	return index;
}


int main() {
	srand(time_t(NULL));
	int a[SIZE] = { 0 };
	//initializing array to some random values
	for (int i = 0; i < SIZE; a[i] = rand() % 100, i++);
	//printing original arr
	for (int i = 0; i < SIZE; printf("%d ", a[i]), i++);
	printf("\n");
	int query = rand() % 100;
	int index = linearSearch(a, query);
	if (index == -1)
		printf("Element not present in array");
	else
		printf_s("Query is present at index: %d", index);
}