int main() {
	int a = 1;
	a = a + 1;
	int  * const p = &a;
	*p = *p + 2;
	a += 2;
	int b = 2;
	p = &b;
}
/*
1. to point a constant variable  = constant pointer declaration is required
	i.e. const int *p = &a
2. a constant pointer delaration can be used to make a non-const variable to temporarily behave as const.
	i.e. const int *p = &a (p considers a to be a constant, which is not the case)
3. A constant pointer cannot change its declaration.
	i.e. int * const p = &a; p != &b;
*/