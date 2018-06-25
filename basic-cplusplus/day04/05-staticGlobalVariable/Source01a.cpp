//global variable definition
static int a = 0;
int b = 0;
//function declaration
void f();
void g();
void f1();

int main() {
	f();
	f1(); //defined in source1b.cpp;
	a += 5;
	g();
	b += 1;
}

void f() {
	a += 2;
}

/*
if the global variable is defined as static, then its scope is file wide, and not to all the files of the application
=============================================================
				|	scope	|	lifetime	|	location
=============================================================
non-static		|	block	|	block		|	stack		|
local variable	|			|				|				|
-------------------------------------------------------------
static			|	block	|	app			|	global		|
local variable	|			|				|				|
-------------------------------------------------------------
non-static		|	app		|	app			|	global		|
global variable	|			|				|				|
-------------------------------------------------------------
static			|	src		|	app			|	global		|
global variable	|			|				|				|
-------------------------------------------------------------

non-static local variables are also known as automatic variables.

*/
