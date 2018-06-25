#define N 5
void main () {
	int a[N] = { 0 };
	//initialize all the elements to 1
	int index = 0;
	while (index < N) {
		a[index] = 1;
		index++;
	}
	//shorthand using for
	for (int i = 0; i < N; a[i] = 2, i++);
}