//no type safety for the parameters
#define MIN(i,j) (i < j ? i : j)

//you get type safety for the parameters of the function
inline int min(int i, int j);

int main() {
	int a = 9,
		b = 4,
		mini = 0;
	//expansion happens by the pre-processor
	/*expansion == ++a < ++b ? ++a : ++b */
	mini = MIN(++a, ++b);

	//expansion happens by the compilation
	mini = min(++a, ++b);
}

inline int min(int i, int  j) {
	return i < j ? i : j;
}
/*
Compiler will choose not to inline a function in following scenarios even though it is marked as inline by developer:
 - function is length
 - virtual functions
 - recurssive functions

 Too much inlining results into slow code. - swap-in swap-out

*/