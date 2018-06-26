//providing values to the function paramters, means that the default values are provided to the parameters
int sum(int n1, int n2 = 0);

int main() {
	int a, b, res;
	a = 7, b = 9;
	//this is normal use of function
	res = sum(a, b);

	//when you want to specify few arguments and your function call is successful.
	res = sum(a);
}

int sum(int n1, int n2)
{
	return n1 + n2;
}
/*
A default argument is a value provided in function declaration that is automatically assigned by the compiler to the parameter in case the caller
does not provide an argument for the respective parameter.

Providing default value to the paramter(s) make them optional arguments.
If the parameter does not have default value specified, they are mandatory.

Correct practice: Default arguments should be provided in the function declaration

Redefinition error appears if the default values are present in both definition & declaration

*/
