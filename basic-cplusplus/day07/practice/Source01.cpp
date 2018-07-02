/*
Write a function that performs matrix multiplication.
Do not assume specific dimensions. That is function should be open to compute multiplication of matrices of any dimension, 
with basic matrix multiplication rule i.e a(i, j), b(m,n) => j = m.
*/

#define I 3
#define J 3
#define M 3
#define N 3

int main() {
	int a[I][J] = { 0 };
	int b[M][N] = { 0 };

	int result[I][N] = { 0 };

}

int* matrixMultiply(const int *a, const int i, const int j, const int *b, const int m, const int n) {
	if (j != m) //matrix multiplication is not allowed
		return nullptr;
	
	for (int row = 0; row < i; row++) {
	
		for (int colm = 0; colm < n; colm++) {

		}
	}
	
}