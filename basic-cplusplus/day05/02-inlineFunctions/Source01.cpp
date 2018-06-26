int sum(int n1, int n2);
inline int add(int n1, int n2);
int main() {
	int a = 0, b = 1, result = 0;
	//expression -> repeatitive and prone to multiple typos
	result = a + b;
	//normal function call -> less efficient
	result = sum(a, b);
	//inline function -> change the project setting to enable inline functions in debug/release configuration.
	result = add(a, b);
}

int sum(int n1, int n2) {
	return n1 + n2;
}

inline int add(int n1, int n2)
{
	return n1 +n2;
}
