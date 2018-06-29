#include <malloc.h>

int main() {
	int * p1 = (int *)malloc(sizeof(int) * 4);
	*(p1 + 1) = 5;
	int * p2 = (int *)malloc(sizeof(int) * 4);
	realloc(p1, sizeof(int) * 30);

	int *n1 = new int[4];
	delete[] n1;
	n1 = new int[5];
}