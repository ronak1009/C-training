#include <crtdbg.h>
void f(int *pn) {
	pn = new int;
}

int main() {
	int *pa = nullptr;
	f(pa);
	delete pa;
	pa = nullptr;
	_CrtDumpMemoryLeaks();
}

/*
Another example of poor programming practice.
The mem reserved in the heap is not deleted.

to solve:
1. delete pn in the function scope of 'f';
2. change the f to return the address of newly reserved mem location and in the main, use delete on the address returned.

*/