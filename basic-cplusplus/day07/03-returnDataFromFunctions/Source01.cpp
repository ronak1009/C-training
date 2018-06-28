int g = 1;
//return address of a variable
int* f() {
	return &g;
}
//return value of a variable
int f1() {
	return g;
}

int main() {
	int *i = f();
	int a = f1();
}
/*
address is always stored to a pointer variable
datavalue is always stored to a scalar variable
*/