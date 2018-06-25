// a is called non-static global variable here, as it is declared outside all the functions without static modifier.
//it is also available in the other src files of the same project.
//the variable shall not be seen in the locals window during debugging.

int a = 1;
void f() {
	                    
	a = 5;
}

int main() {
	f();
	a = 6;
}

/*
Global variables come into existence at the begining of the application and remains in existence till the end of the application.
They are located in global data space i.e. static memory, data-segment
*/