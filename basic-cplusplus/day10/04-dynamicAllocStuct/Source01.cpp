struct Point {
	int m_x;
	int m_y;
};

int main() {
	Point *p_point = new Point;
	p_point->m_x = 1;
	p_point->m_y = 5;

	p_point = new Point;

	delete p_point;
	p_point = nullptr;
}
/*
This is poor programming.
The mem location of heap is not released completely.
before re-using any pointer to point to another location, make sure that if 
the mem location is of heap and not refered by any other pointer then you have to clear it

here, before 11, delete should be called.
*/
