void swap(int a, int b);
void swap1(int *a, int *b);

int main() {
	int u = 5, v = 10;
	swap(u, v);
	swap1(&u, &v);
}

//passing arguments by value
void swap(int a, int b)
{
	int c = a;
	a = b;
	b = c;
}

//passing arguments by pointers variables
void swap1(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}
/*
pointers enable to modify/access the values of a variable by another function/location which are not accessible at that scope.

this is achieved by passing the arguments by address or pointer variables
*/