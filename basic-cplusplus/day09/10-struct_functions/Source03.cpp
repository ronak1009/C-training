struct Point {
	int m_x;
	int m_y;
};
Point Offset(const Point &p, int x, int y);

int main() {
	Point p1 = { 3,4 };
	Point p2 = Offset(p1, 2, 2);
}
Point Offset(const Point &p, int x, int y) {
	Point t = { 0,0 };
	t.m_x = p.m_x + x;
	t.m_y = p.m_y + y;
	return t;
}

/*
return by reference/address is not valid
 - t will be destroyed after the function scope
 - in main () it is likely that we would refer to invalid mem location

 pass by value is the only option to be used.
*/