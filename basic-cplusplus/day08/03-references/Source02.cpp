// characteristics of references

int main() {
	int &s;
	int &r = 3;
	const int &r2 = 8;
}

/*
1.  References cannot be null.
2.	Once a reference is associated with referent, the association cannot be broken until reference ceast to exist.
3.	A non const l-value reference is a reference that cannot refer to constant literal (for ex. 'r' in above).
*/