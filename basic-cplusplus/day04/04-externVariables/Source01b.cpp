//asking linker to use a from the global space which would be defined in some another file.
extern int a; //allowed
void g();
void f1() {	
	a += 3;
	g();
}

void g() {
	//this a is available only in g function because global a from source01a.cpp can be used only in g();
	//we are defining a locally to use global a;
	extern int a;
	extern int b;
	a = 10;
	b += 2;
}