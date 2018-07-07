int main() {
	struct Point {
		int m_x;
		int m_y;
	};
	//a == object of Point type
	Point a = { 3,4 };
	//pointer to object
	Point *ptr = &a;
	int x = (*ptr).m_x;
	int y = (*ptr).m_y;

	int x1 = ptr->m_x;
}

/*
*ptr.m_x ==> this will be evaluated as *(ptr.m_x) which is invalid as m_x is scalar and dereference * operator
cannot be applied on the scalar value.

to access the data members of a pointer to struct/object :
(*ptr).m_x
ptr -> m_x
*/