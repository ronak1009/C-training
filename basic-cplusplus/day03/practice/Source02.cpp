/*
Write a program that sorts integers in an array in ascending order.
*/

//comparison sort
#include <cstdio>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

void comparisonSort(int arr[]) {
	int temp;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 1; j < SIZE; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
		
	}
	for (int i = 0; i < SIZE; printf("%d ", arr[i]), i++);
}


int main() {
	srand(time_t(NULL));
	int a[SIZE] = { 0 };
	//initializing array to some random values
	for (int i = 0; i < SIZE; a[i] = rand() % 100, i++);
	//printing original arr
	for (int i = 0; i < SIZE; printf("%d ", a[i]), i++);
	printf("\n");
	comparisonSort(a);

}