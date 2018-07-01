/*
Write a random function such that it produces random int on every call and returns same as its return value.
Use mid sqaured for the generation of random integers.
*/
#include <stdio.h>
#include <string>

#define N 3

int midSquareRandom();
int obtainMiddle(int input);
int digitCounter(int number);

int main() {
	int a[N] = { 0 };
	for (int i = 0; i < N; i++) {
		a[i] = midSquareRandom();
		printf("a[%d] = %d\n", i, a[i]);
	}

}

int midSquareRandom() {
	static int previousNo = -1;
	int seedValue = previousNo > 0 ? previousNo : 1234;
	int square = seedValue * seedValue;

	//obtain middle 4 digits
	int random = obtainMiddle(square);
	if (random == previousNo)
		return 0;
	else {
		previousNo = random;
		return random;
	}
}


int obtainMiddle(int input) {
	//compute the no of digits
	int noOfDigits = digitCounter(input);
	int returnValue = input;
	returnValue /= 100;
	returnValue %= 10000;
	return returnValue;
}

int digitCounter(int number) {
	int noOfDigits = 0;
	int fract = number;
	while (fract > 0) {
		noOfDigits++;
		fract /= 10;
	}
	return noOfDigits;
}