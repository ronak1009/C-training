#include <malloc.h>

int main() {
	
	int *pn = (int *)malloc(sizeof(int));
	*pn = 1;
	free(pn);
	pn = nullptr;
}
/*
malloc , free are the C-functions
in C++, using of malloc and free is discouraged due to some limitations.

because, we are using c functions, we have to use c style type casting for void * to int *
i.e (int *) malloc (sizeof(int));

input to malloc, is the no of bytes required to store the memory.

if malloc is able to reserve the mem location, then the address of that mem is returned , else it returns the NULL value
*/