// compound assignment operators
void main() {
	int a = 10, b = 7;
	a += b; //a = a + (b); = 17
	a -= b; // 17-7 = 10
	a *= b; // 10* 7 = 70
	a /= b; // 70/7 = 10
	a %= b; // 10/7 = 3

	a *= a + b; // 3 * (3 + 7) = 30

	a = 10; b = 20;
	int c = 0;
	c += 90 + 2 % 5 - -6 / 10;
	// the above expression is will be evaluated as following
	// c = c + (90 + (2 % 5 )- (-6 / 10)) = 0 + (90 + 2 + 0) = 92

	a = 42, b = 31;
	a -= b++ + ++b; //-22
}