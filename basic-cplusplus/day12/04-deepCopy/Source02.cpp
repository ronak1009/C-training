#include <crtdbg.h>
class Integer {
	int* m_pn;
public:
	Integer(int a);
	Integer(const Integer &a); //copy constructor
	int GetInteger() const;
	void SetInteger(int a);
	Integer& operator= (const Integer&a);
	Integer operator+ (const Integer &b);
	~Integer(); //destructor
};
Integer::Integer(int a) {
	m_pn = new int(a);
}
Integer::Integer(const Integer &a) {
	//copy constructor implementing deep copy mechanism
	m_pn = new int(*(a.m_pn));
}
int Integer::GetInteger() const {
	return *m_pn;
}
void Integer::SetInteger(int a) {
	*m_pn = a;
}
Integer& Integer::operator=(const Integer &b) {
	*this->m_pn = *b.m_pn;
	return *this;
}

Integer Integer::operator+ (const Integer &b) {
	//creating anyonymous object of class Integer
	return Integer(*m_pn + *(b.m_pn));
}
Integer::~Integer() {
	delete m_pn;
	m_pn = nullptr;
}
int main() {
	{
		Integer a(1);
		Integer b(2);
		b = a;
	}
	_CrtDumpMemoryLeaks();
}

/*
solution is: overloading '=' assignment operator

return type can be reference when the referent's life is more than the scope of the function call.
*/