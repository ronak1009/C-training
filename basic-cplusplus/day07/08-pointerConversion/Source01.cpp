void f(void *pv);
int main() {
	int a = 1;
	f(&a);
}

void f(void *v) {
	//type casting a void * to int * 
	int *pn = static_cast<int *>(v);
	*pn = 5;
}

/*
float f = 0.4;
double d = f; //implicit type conversion

//explicit type conversion
f = (float) d; - C-style explicity type conversion
f = static_cast <float> d; - C++ style explicity type conversion

*/