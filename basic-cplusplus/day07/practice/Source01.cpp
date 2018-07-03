/*
Write a function that performs matrix multiplication.
Do not assume specific dimensions. That is function should be open to compute multiplication of matrices of any dimension, 
with basic matrix multiplication rule i.e a(i, j), b(m,n) => j = m.
*/

#define I 3
#define J 3
#define M 3
#define N 3

int** matrixMultiply(int *a, const int i, const int j, const int *b[], const int m, const int n);

int main() {
	//input 2-D arrays
	int **a;
	int **b;
	int **result = matrixMultiply(a[0], I, J, &b, M ,N);

}

int** matrixMultiply(int *a, const int i, const int j, const int *b[], const int m, const int n) {
	if (j != m) //matrix multiplication is not allowed
		return nullptr;
	int **result = new int*[i];
	for (int row = 0; row < i; row++) {
	
		for (int colm = 0; colm < n; colm++) {

		}
	}
	
}
/*
difficulties:
1. you cannot pass multi-dimension array as int a[][]. You need to give no of columns.
 To 
*/