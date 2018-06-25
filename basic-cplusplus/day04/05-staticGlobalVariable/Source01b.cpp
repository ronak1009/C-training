//global variable declaration
extern int a;

//function definition
void g();

void f1() {	
	a += 3;
	g();
}

void g() {
	
	extern int b;
	a = 10;
	b += 2;
}