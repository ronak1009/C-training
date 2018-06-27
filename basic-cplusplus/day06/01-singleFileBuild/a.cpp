#include <cstdio>
int add(int, int);

int main() {
	int a = 1, b = 2;
	printf_s("a + b = %d", add(a, b));
}

int add(int a, int b) {
	return a + b;
}

/*
cl /c a.cpp -> a.obj
link a.obj -> a.exe
*/