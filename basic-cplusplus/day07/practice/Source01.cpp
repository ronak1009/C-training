/*
Write a function that performs matrix multiplication.
Do not assume specific dimensions. That is function should be open to compute multiplication of matrices of any dimension, 
with basic matrix multiplication rule i.e a(i, j), b(m,n) => j = m.
*/
#include <crtdbg.h>

#define I 2
#define J 2
#define N 1


int** matrixMultiplication(int** a, int i, int j, int **b, int m, int n) {
	if (j != m)
		return nullptr;
	int ** result = new int*[i];
	for (int row = 0; row < i; row++) {
		result[row] = new int[n];
		for (int column = 0; column < n; column++) {
			int sum = 0;
			for (int jm = 0; jm < j; jm++) {
				sum += a[row][jm] * b[jm][column];
			}
			result[row][column] = sum;
		}
	}
	return result;
}
void fillData(int **a, int row, int col, int data) {
	
	for (int i = 0; i < row; i++) {
		*(a+i) = new int[col];
		for (int j = 0; j < col; j++) {
			a[i][j] = data;
		}
	}
}

void releaseArrays(int **a, int rows) {
	for (int i = 0; i < rows; i++) {
		delete *(a + i);
	}
	delete a;
}
int main() {
	int **a = new int *[I];
	int **b = new int *[J];

	fillData(a, I, J , 1);
	fillData(b, J, N, 1);

	int **result = matrixMultiplication(a, I, J, b, J, N);
	releaseArrays(a, I);
	releaseArrays(b, J);
	releaseArrays(result, I);

	_CrtDumpMemoryLeaks();
}