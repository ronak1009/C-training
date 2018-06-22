#define N 4
#define MIN(i,j) (i < j ? i : j)
void main() {
	int a = N;
	int b = 3;
	int c = MIN(a, b);
}

/*
Macros and Macros function
Macro functions does not look similar to the C++ methods/function
The entire expression of the macro is replaced by the pre-processor

for check the pre-processor output
Project -> Properties -> C/C++ -> commandline -> additional arguments -> /EP
Compile the file.
for the output to be in some seperate file /EP /P

spaces in the macro definition is not allowed else it throws compilation error

*/