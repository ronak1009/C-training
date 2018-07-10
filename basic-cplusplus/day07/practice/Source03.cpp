/*
Write a program that accepts three command line arguments.
First = /? /add /sub (can be any one of the following)
Second, Third must be the int.
For simplicity assume user will always input the second and third args.
on /? option, program should display the help what options are supported by the program.

on /add or /sub option, the program should perform respective operations with the integers and display the output.

Incase user mentions wrong option, the program should come up with the message that the respective option is not supported by the program.

Note: though you specify integers on command line, they act as strings. Hence it is necessary to convert them into integers. Use 'atoi' function to do this.

*/
#include <iostream>
int add(int n1, int n2) {
	return n1 + n2;
}
int sub(int n1, int n2) {
	return n1 - n2;
}


void operationFunc(char * argv[], int(*operation)(int n1, int n2)) {
	int n1 = atoi(argv[2]);
	int n2 = atoi(argv[3]);
	int result = operation(n1, n2);
	std::cout << "result = " << result << std::endl;
}

void main(int argc, char* argv[]) {
	char *operation = argv[1];
	if (strcmp(operation, "/?") == 0) {
		std::cout << "\t ---Command Line Args Options---\n" << std::endl;
		std::cout << "/FUNCTION ARG1 ARG2" << std::endl;
		std::cout << "FUNCTION -- \n" << std::endl;
		std::cout << "/add : adds the ARG1, ARG2" << std::endl;
		std::cout << "/sub : subtracts the ARG1, ARG2" << std::endl;
		std::cout << "ARG1 ARG2 -- \n" << std::endl;
		std::cout << "Integers for add/sub function" << std::endl;
	}
	else if (strcmp(operation, "/add") == 0) {
		operationFunc(argv, add);
	}
	else if (strcmp(operation, "/sub") == 0) {
		operationFunc(argv, sub);
	}
	else {
		std::cout << "Invalid Argument : " << argv[0] << std::endl;
	}
}