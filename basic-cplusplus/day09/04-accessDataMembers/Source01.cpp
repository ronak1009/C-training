int main() {
	struct Point {
		int m_x;
		int m_y;
	};
	Point p1 = { 1,-1 };
	Point p2 , p3 ;
	//assign value to struct members
	p1.m_x = 12;
	//access value of struct members
	int x = p1.m_x;
	p2.m_x = x;
}
/*

*/