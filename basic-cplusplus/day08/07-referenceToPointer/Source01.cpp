int main() {
	int *ptr = nullptr;
	int *&rptr = ptr;
	rptr = new int(1);
	delete rptr;
	rptr = nullptr;
}
/*
reference to pointer
 - giving another name to the pointer variable using reference.
*/