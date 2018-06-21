void main() {
	bool res = true;
	int a = 5,
		b = 6,
		c = 7;
	
	res = (a < b) && (b < c);
	res = (a > b) || (b < c);
	res = !a;
}
/*
AND	&&
OR	||
NOT !

** &&, || are smart operators.

*/