void f(int *&pn) {
	pn = new int;
}
void swap(int &, int &);

int main() {
	int *pa = nullptr;
	f(pa);
	delete pa;
	pa = nullptr;

	int a = 9, b = 7;
	swap(a, b);
}

//swaping using parameters to be pass by reference
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}