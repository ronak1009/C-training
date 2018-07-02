#include <stdio.h>
struct Point {
	int m_x;
	int m_y;
};

void f(Point x);
void f1(const Point &x);
void f2(Point *p);
int main() {
	Point a = { 3,4 };
	f(a);
	f1(a);
	f2(&a);
}
void f(Point x) {
	printf("x.m_x = %d\n", x.m_x);
	printf("x.m_y = %d\n", x.m_y);
}
//x is not modifyable in the scope
void f1(const Point &x) {
	printf("x.m_x = %d\n", x.m_x);
	printf("x.m_y = %d\n", x.m_y);
}
//p is modifyable
void f2(Point * p) {
	p->m_x = 6;
	p->m_y = -20;
	f1(*p);
}

/*
f - passing by value
here, data redundancy happens
performance hit as copy of data members is required.
'f' function is not a good practice of programming. This is to be avoid when the function takes custom data types.

use pass by pointer, pass by reference as the parameters.

When passing the struct as ref or pointer, we need to keep in mind whether the function shall alter the parameter or not ?
This is requried because direct mem location is accessed and value change can impact everywhere in the application where 
the paramter is used.

using const for a parameter in the function declaration ensures that in the function scope, the paramter
shall not be altered.

Also, it helps to convey other developers using your function in some other file that the method shall be only reading
the value of the paramter and not change them.

*/