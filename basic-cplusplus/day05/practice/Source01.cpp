/*
Compute summation of first n terms of the following series.
1/1 + 1/2 + 1/3 + 1/4 + .... using recursive function
*/

#include<cstdio>


double computeSummation(unsigned int n) {
	static unsigned input = n;
	double count = 1.0;
	if (n == 1)
		return 1;
	double sum = 0;
	sum = (1.0 / n) + computeSummation(n - 1);
	printf("n: %lf\n", sum);
	return sum;
	
}

int main() {
	unsigned N = 5;
	double sum = computeSummation(N);
	printf("%lf", sum);
}