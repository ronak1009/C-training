#include <stdio.h>
struct Point {
	int m_x;
	int m_y;
};

void f(Point x);

int main() {
	Point a = { 3,4 };
	f(a);
	
}
void f(Point x) {
	printf("x.m_x = %d\n", x.m_x);
	printf("x.m_y = %d", x.m_y);
}
/*

*/