/*
Write function 'factorial' to calculate factorial of give number.
factorial function should be given number through parameter.
the computed factorial of the number should be returned as return value of the function. Use recursive method.
*/

#include <cstdio>
int computeFactorial(int n);

int main() {
	int N = 5;
	int fact = computeFactorial(N);
	printf("Factorial of %d = %d", N, fact);
}

int computeFactorial(int n) {
	int val = 0;
	if (n == 0)
		return 1;
	val = n * computeFactorial(n - 1);
	return val;
};