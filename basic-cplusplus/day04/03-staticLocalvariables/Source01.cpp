int global;
void f();
void g();

int main() {
	int l = 0;
	f();
	f();
	f();
	
	global = 8;
}

void f() {
	//everytime the function is called, a is created freshly and initialized to some value
	//int a = 0;
	static	int a = 8;
	a += 1;
	g();
}
void g() {
	//here a, is another local variable defined as static. Thus a new memory location is created in static memory which can be accessible
	//only by g() function.
	static int a = 0;
	a++;
}
/*
static modifiers - the variables are not destoryed after the function call.
the variables with static modifiers, are not present in the stake frame. It is created in static memory / global space.
the scope of static variables are limited to the block in which it is defined.
*/