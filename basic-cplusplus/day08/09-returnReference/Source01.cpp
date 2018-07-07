int g = 1;

//returning a reference
int& f() {
	int &r = g;
	return r;
}
int main() {
	//'i' is independent variable wrt 'g'
	int i = f();
	i++;
	// 'j' is reference to a reference returned by 'f' i.e. reference to 'g'
	int &j = f();
	j++;
}