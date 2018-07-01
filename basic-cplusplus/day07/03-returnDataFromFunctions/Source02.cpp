
//return address of a variable
int* f() {
	int g = 1;
	//the address of local variable is returned.
	//this mem location will be released from the stack, thus can be emptied - contain junk value
	//this mem location becomes invalid
	return &g;
}


int main() {
	int *i = f();
	
}
/*
address is always stored to a pointer variable
datavalue is always stored to a scalar variable

Pointer can hold
1. Valid address -> compiler has not explicity reserved the mem location
2. Invalid address -> mem location is present but not reserved by compiler == DANGLING POINTER
3. NULL -> not pointing to any mem location

Avoid returning address of local variable
*/