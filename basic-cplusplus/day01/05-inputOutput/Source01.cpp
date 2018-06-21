#include "stdio.h"
//#include <cstdio>
#include <iostream>
void main() {
	//\n - escape sequence for newline
	printf("Hello World\n");
	int a = 5;
	wchar_t ch = 'F';
	/*
	--------------------------------------------
	LIST OF PLACEHOLDER FOR DIFFERENT DATATYPES
	--------------------------------------------
	char		%c	(character)
	wchar_t		%C	(wide character)
	int			%d	(decimal)
	float		%f	(float)
	double		%lf	(long float)

	*/
	printf("a = %d\n", a);
	printf("ch = %C\n", ch);

	std::cout << "Hello \nWorld" << std::endl;
	//placeholders don't work with the cout, they are desgined to work with printf
	std::cout << "a = %d" << a << std::endl;
	std::cout << "a = " << a << std::endl;

	/*
	<< insertion operator
	
	std::endl is a function that flush output buffer and moves the cursor to newline in std::output
	buffers help in performing batch operations

	C++ compilers can compile C files i.e. downward compatibility
	C compiler cannot compile C++ files

	*/
}