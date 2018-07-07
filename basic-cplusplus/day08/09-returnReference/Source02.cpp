
//returning a reference
int& f() {
	int g = 1;
	return g;
}
int main() {
	//'i' is independent variable wrt 'g'
	int i = f();
	i++;
	// 'j' is reference to a reference returned by 'f' i.e. reference to 'g'
	int &j = f();
	j++;
}
/*
this is a bad program. returning of a referent who's life is out of the scope of reference
here, life of 'g' is limited to the block of function 'f' and so reference to 'g' cannot be returned.
This makes returned reference to be invalid.
*/