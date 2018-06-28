int main() {
	//"HELLO WORLD" is in CONSTACT MEM
	//mem is reserved of s in STACK MEM of size(String literal) and char by char, data is copied from constant mem to stack mem.
	char s[] = "Hello World";
	//ps is storing the address of CONSTANT MEM where the string literal "HELLO WORLD" is stored as string pool
	char *ps = "Hello World";
	//ps2 is also pointing to the same MEM location as of ps, as there is no duplication of string literal.
	char *ps2 = "Hello, World";
	s[7] = 'w';
	
	//ps is referencing the constant mem location and it is not writable. Thus following operation is not allowed.
	//CONST MEM BLOCK is immutable. i.e. WRITE access is not provided.
	ps[7] = 'w';
}