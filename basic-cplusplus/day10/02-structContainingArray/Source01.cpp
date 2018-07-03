struct Point {
	int m_x;
	int m_y;
};
struct Locus {
	Point points[3];
};
int main() {
	Locus l1 = { { { 1,1 },{ 2,2 },{ 3,3 } } };
	int x = l1.points[1].m_x;
	int y = l1.points[1].m_y;
}
/*
Note: here struct Locus has a struct member as array of Points
Points is another struct

*/
