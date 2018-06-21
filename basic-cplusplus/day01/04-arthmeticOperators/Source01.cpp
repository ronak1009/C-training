void main() {
	int a = 10, b = 5, c = 0;
	//basic mathematical operators
	c = a + b;
	c = a - b;
	c = a * b;
	c = a / b;
	c = a % b;

	//increment & decremental operators
	c = 0;
	//pre-incremental operator
	c = ++a; //a = 11, c = 11
	//post-incremental operator
	c = a++; //c = 11, a = 11
	//a is incremented after the assignment happens or the execution moves to next line.
	c = a; // c = 12, a = 12
	
	a = 10;
	b = 0;
	b = --a; // a = 9, b = 9
	
}