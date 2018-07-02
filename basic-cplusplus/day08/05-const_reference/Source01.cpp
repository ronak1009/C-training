int main() {
	int a = 7;
	const int b = 5;

	int &c = a;
	int &d = b;

	const int &e = a;
	const int &f = b;
}

/*
					|	const ref	|	non-const ref
------------------------------------------------------
const referent		|	Yes			|	-
non-const referent	|	Yes			|	Yes

*/