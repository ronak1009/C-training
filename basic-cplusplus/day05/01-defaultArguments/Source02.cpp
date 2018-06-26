int sum(int n1 = 0, int n2 = 0);

int main() {
	int a, b, res;
	a = 7, b = 9;
	res = sum(a, b);

	res = sum(a);
	res = sum();
}


int sum(int n1, int n2)
{
	return n1 + n2;
}
/*
there is no restriction on how many parameters can be marked default
Ideally, you should keep the optional parameters to be trailing ones because you cannot have syntax like: sum (, 9);
you will have to provide default value to the all parameters manually like = sum (0, 9)
*/
