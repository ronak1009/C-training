#include <cstdio>
//importing the function from the dll
_declspec(dllimport) int add(int, int);
int main() {
	int a = 1, b = 2;
	printf_s("a + b = %d\n", add(a, b));
}

