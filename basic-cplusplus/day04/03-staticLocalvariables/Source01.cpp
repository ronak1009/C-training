int global;
void f();

int main() {
	int l = 0;
	f();
	f();
	f();
	global = 8;
}

void f() {
	//everytime the function is called, a is created freshly and initialized to some value
	int a = 8;
	a += 1;
}