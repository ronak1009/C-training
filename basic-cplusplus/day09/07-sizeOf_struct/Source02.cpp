int main() {
	struct X {
		char m_ch;
		int m_n;
		double m_b;
	};

	int size = sizeof(X);
}
/*
size of structure can vary from what you calculate manually.

always use sizeof() to compute the value of struct size.
The extra size is usually larger, because there will be padding bytes added for alignment purpose
this is done by compiler for the efficiency purpose.
*/