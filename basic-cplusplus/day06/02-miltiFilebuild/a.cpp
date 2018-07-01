#include <cstdio>
int add(int, int);

int main() {
	int a = 1, b = 2;
	printf_s("a + b = %d", add(a, b));
}

/*
cl /c a.cpp
link a.obj b.obj /out:a.exe

*/