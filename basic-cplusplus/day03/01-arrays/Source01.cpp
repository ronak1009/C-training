#define LEN 3
#define COLUMNS 3
#define ROWS 3
void  main() {
	//array declaration
	int a[3];		//single dimension array
	int b[2][3];	//double dimension array
	const int length = 5;
	
	//array initialization
	int _a[length] = {1,2,3};
	int points[ROWS][COLUMNS] = { {1,2,3}, {3,4} };
	int points_1[ROWS][COLUMNS] = { 1,2,3 ,3,4,5 ,4,5,6  };

	//array creation using the array initializers
	int arr1[] = {1,2,3,4,4};
	int arr2[][3] = {1,2,3,4,4,5}; //only 1st dimension is allowed to be allocated dynamically using initializers


}

/*
a = [][][]
sizeof(a) = sizeof(datatype)*noOfElements = 4*3 = 12 
b = [][][]
	[][][]

for static arrays,
non-constant variables cannot be used to specify the dimension of the array,
constant variable can be used to specify the dimension of the array.
MACROS can be used to create the dimension of the array.
if the no of initializers are less, then the compilation is successful and the unavailable data is initialized to zero.
if the no of initializers are more, then the compiler is in trouble and thus throws compilation error. Compiler is not able to 
consider which data is to be discarded.

*/