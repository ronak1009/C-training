#include <cstdio>
int add(int, int);
int subtract(int, int);
int main() {
	int a = 1, b = 2;
	printf_s("a + b = %d\n", add(a, b));
	printf_s("a - b = %d\n", subtract(a, b));
}

/*
cl /c a.cpp
link a.obj b.lib
*/