int a = 0;
int b = 0;
void f();
void g();
void f1();

int main() {
	f();
	f1(); //defined in source1b.cpp;
	a += 5;
	g();
	b += 1;

	int b = 1; //local variable definition has higher precedence over global variables
	//thus linker creates memory for local variable and that is used within main for 'b'
	b += 1;
}

void f() {
	a += 2;
	int b = 0;
}

/*
While working with global variable and multiple source files, we define global variable in one source and declare in other source files.
define = allocation of memory
declare = telling the variable type and its symbol (variable name).

declaration of global variable is done by extern.
note: only global variables can be declared extern.
if the local variables are declared extern, then the linker shall provide error because it is not able to allocate mem to local variable.

//local variable declared extern will not create linking error if we dont use that symbol.

*/