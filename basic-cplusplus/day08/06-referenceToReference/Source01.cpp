int main() {
	int a = 3;
	int &ref = a;
	int &ref2 = ref; //reference to reference
	ref += 3;
	ref2 = 9;
	a = 8;
}

