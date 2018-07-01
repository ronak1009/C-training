#include <crtdbg.h>
void f() {
	static int counter = 0;
	counter++;
	int *pn = new int[4000];
	//there will not be able to memory leak here. if you remove this statement, mem leak will happen
	delete[] pn;
}

int main() {

	for (int i = 0; i <20; i ++)
	{
		f();
	}
	//in the output window, shows whether the program has mem leak or not.
	_CrtDumpMemoryLeaks();
}