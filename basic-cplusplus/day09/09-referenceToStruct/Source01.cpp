int main() {
	struct Point {
		int m_x;
		int m_y;
	};
	//a == object of Point type
	Point a = { 3,4 };
	Point &b = a;

	int x = b.m_x;
	int y = b.m_y;
	b.m_x = 9;
	b.m_y = 11;
}

/*

*/