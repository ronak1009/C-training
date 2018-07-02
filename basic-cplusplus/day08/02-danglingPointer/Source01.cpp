int main() {
	int *pa = new int;
	*pa = 1;
	int * pb = pa;	 //pass by value i.e. address stored in pa is copied as value to pb, pb now becomes pointer to same mem location
	delete pa;
	pa = nullptr;
}
/*
pb is the dangling pointer
this is another example of bad programming practice.

*/