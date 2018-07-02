
int main() {
	struct Point {
		int m_x;
		int m_y;
	};
	struct Point3D {
		int m_x;
		int m_y;
		int m_z;
	};

	Point a = { 3,4 };
	Point3D b = { 4, 5, 6 };
	
	// b = a; -> this shall not work as the struct are different

	a.m_x = b.m_x;
	a.m_y = b.m_y;


}
/*
assignment cannot happen when the struct of a variable is different, 
	here a = b is invalid
you can access the member of a struct and then assign its value to member of another struct.
	a.m_x = b.m-x

*/