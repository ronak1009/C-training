/*
Write a program that will define an array 'a' of dimension  3 x 3.
Write program such that intefer 1 to 9 are distributed randomly across the elements without repetition.
*/
#include <cstdio>
#include <stdlib.h>
#include <time.h>
#define COLM 3
#define ROW 3

bool isPresent(const int inp[], const int size, const int num) {
	for (int i = 0; i < size; i++) {
		if (inp[i] == num)
			return true;
	}
	return false;
}

int generateUniqueRand(int inp[], const int size, const int count) {
	
	int rand_No = rand() % 10 ; //include 0-10
	if (isPresent(inp, size, rand_No))
		rand_No = generateUniqueRand(inp, size, count);
	else
		inp[count] = rand_No;
	return rand_No;
}

void main() {
	//initializing random function
	srand(time_t(NULL)); //initialize random function with new starting point
	int elementCoutner = 0;
	int arr[ROW][COLM] = { 0 };
	const int totalElement = ROW * COLM;
	int randArr[totalElement] = { 0 };
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLM; elementCoutner++, j++) {
			arr[i][j] = generateUniqueRand(randArr, totalElement, elementCoutner);
			randArr[elementCoutner] = arr[i][j];
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}