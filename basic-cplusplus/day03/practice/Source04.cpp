//Write a program that demonstrates probability search.

#include <stdlib.h>
#include <stdio.h>

#define N 5
int probSearch(int inputArr[], int size, int searchNo);

int main() {
	srand(time_t(NULL));
	int a[N] = { 0 };
	for (int i = 0; i < N; i++)
		a[i] = rand() % 100;

	int searchQuery = 12;
	int search = probSearch(a, N, searchQuery);
	if (search >= 0)
		printf("Searched Index:: %d", a[search]);
	else
		printf("Item not found");

}

int probSearch(int inputArr[], int size, int searchNo) {
	int returnIndex = -1;
	for (int i = 0; i < size; i++) {
		if (searchNo == inputArr[i] && i > 0) {
			//swapping the queried item of the array
			int temp = inputArr[i - 1];
			inputArr[i - 1] = inputArr[i];
			inputArr[i] = temp;
			returnIndex = i-1;
			break;
		}
		else if (searchNo == inputArr[i]) {
			returnIndex = i;
			break;
		}
	}
	return returnIndex;
}