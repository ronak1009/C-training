int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}
int f(int a, int b, int(*callback)(int, int)) {
	return callback(a, b);
 }


int main() {
	//obtain address of a function
	int(*add_ptr)(int, int) = nullptr;
	add_ptr = add;
	int result = f(3, 4, add);
	result = f(4, 5, subtract);
	
	//passing function address as a parameter value to the callee function


}