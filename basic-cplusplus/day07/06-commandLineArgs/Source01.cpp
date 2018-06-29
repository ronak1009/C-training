/*command line arguments*/
#include <iostream>
int main(int argc, char *argv[]) {
	//argv = array of pointers
	//argc = total no of arguments that are passed

	for (int i = 0; i < argc; i++)
		std::cout << argv[i] << std::endl;
}