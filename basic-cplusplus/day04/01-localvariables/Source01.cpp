void f() {
	//a is local variable to this function
	// scope and lifetime of local variable is limited to the block where it's defined.
	//location of local variable is stack frame of stack.                             
	int a = 5;
}

int main() {
	f();
	a = 6; //-> a is not defined because it is not in the scope of main function.
}

/*
Variables are associated with 3 terms:
1. Scope - Accessibility of a variable
2. Lifetime - existence of a variable in memory
3. Location - where the variable is present in memory (global, stack, heap, static)

stack frame is created for every function that is getting executed in an Application and not for block.
stack frame contains local variables and return value.


Scope <= Lifetime
Stack memory is of fixed size.
*/