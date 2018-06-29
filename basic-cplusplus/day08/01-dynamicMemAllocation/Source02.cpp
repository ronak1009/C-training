#include <malloc.h>

int main() {
	int count = 20;
	//storing the continous mem block having size ( 4 x 2 = 8 bytes) --> dynamic array
	int *pn = (int *)malloc(sizeof(int) * count);
	pn[0] = 10;
	pn[1] = -10;

	for (int i = 0; i < count; i++)
		*(pn + i) = i;
	free(pn);
	pn = nullptr;
}

/*
freeing memory and making the pointer to NULL is compulsary.
This will release the memory ,else the memory will never be released.

You might need to reboot your system  or stop the application to free that memory.

Also, memory in heap is limited so need to use it wisely.

Pointer and Array notations can be used interchangably with each other.
Array is underhood a pointer.
All pointers can also be treated as array of continous mem location with a precaution that you are not accessing invalid mem location.

*/