int main() {
	int *pa = new int;
	*pa = 1;
	int * pb = pa;
	delete pa;
	pa = nullptr;
}
/*
pb is the dangling pointer
this is another example of bad programming practice.

*/