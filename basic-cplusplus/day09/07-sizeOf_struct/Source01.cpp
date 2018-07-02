int main() {
	struct Point {
		int m_x;
		int m_y;
	};
	
	Point p1 = { 1,-1 };
	int size = sizeof(Point);
	int size2 = sizeof(p1);
}
/*
member by member copy takes place when the assignment is done.

*/