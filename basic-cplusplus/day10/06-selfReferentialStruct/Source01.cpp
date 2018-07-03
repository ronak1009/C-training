struct Point {
	int m_x;
	int m_y;
	Point *m_pPoint;
};

int main() {
	Point *p = new Point;
	p->m_x = -1;
	p->m_y = 1;
	
	p->m_pPoint = new Point;
	p->m_pPoint->m_x = 0;
	p->m_pPoint->m_y = 0;
	
	delete p->m_pPoint;
	p->m_pPoint = nullptr;
	delete p;
	p = nullptr;

	
}
/*
Struct 'Point' has a member of same type.
This kind of struct has no end and its a infinite chain.

before releasing parent, we have to be sure that the connect child struct are released.
If this is not considered, there is good chance of having memory leakages.

self-referential struct are useful in representing the collection of object.
>> Linked List is example of data structure that is created using this pattern.
*/