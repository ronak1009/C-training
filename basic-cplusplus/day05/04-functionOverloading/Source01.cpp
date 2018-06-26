
int add_int(int u, int v) {
	return u + v;
}

int add_dbl(double u, double v) {
	return u + v;
}

int add(int u, int v) {
	return u + v;
}

double add(double u, double v) {
	return u + v;
}
//the parameters signature is same, thus function overloading cannot work,
double add(int u, int v) {
	return u + v;
}

//check a scearnio
void f(int i) {}
void f(int i, int j =1) {}


int main() {
	int a = 1, b = 4, rslt_int = 0;
	double a1 = 1, b1 = 4, rslt_dbl = 0;
	//normal scenario
	rslt_int = add_int(a, b);
	rslt_dbl = add_dbl(a1, b1);


	//function overloading -  name of the function is same, signature is different performing some tasks
	rslt_int = add(a, b);
	rslt_dbl = add(a1, b1);
	//creation of ambiguity as the function syntax for the overloaded function 'f' matches
	f(5);
}

