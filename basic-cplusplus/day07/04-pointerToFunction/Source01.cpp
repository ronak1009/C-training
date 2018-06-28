int add(int, int);
int subtract(int, int);
int subtract1(int, int);
double divide(int, int);


int main() {
	//obtain address of a function
	int (*add_ptr)(int, int ) = nullptr;
	add_ptr = add;
	int result = add_ptr(3, 5);

	//as subtract1 is not defined, it will provide LINK error
	int(*sub_ptr)(int, int) = subtract1;

	double(*div_ptr)(int, int) = divide;

}

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

double divide(int a, int b) {
	return static_cast<double>(a) / b;
}

/*
the syntax of function pointer is
RETURN_TYPE(*<PTR_NAME>)(PARAM_LIST)
*/