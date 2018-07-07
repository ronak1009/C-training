#include <crtdbg.h>
class Integer {
	int* m_pn;
public:
	Integer(int a);
	int GetInteger() const;
	void SetInteger(int a);
	Integer operator+ (const Integer &b);
	~Integer(); //destructor
};
Integer::Integer(int a) {
	m_pn = new int(a);
}

int Integer::GetInteger() const {
	return *m_pn;
}
void Integer::SetInteger(int a) {
	*m_pn = a;
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
		Integer b = a;
		//here you shall get memory access violation error due to shallow copy
	}
	_CrtDumpMemoryLeaks();
}

/*
memory reserved on heap is considered as the resource consumed by the object.
resource can be:
1. opening a file
2. opened socket connection to another process
3. opened transaction with database
4. connection with a server

This is classical example of shallow copy.
In shallow copy, the data members are copied bit by bit.

== thought ==
1. _crtDumpMemoryLeaks() will show mem leak when the code of main is not inside a dummy block
this is because destructor will be called after crtDumpMemoryLeaks() is called and just before the 
closing '}' brace of main.

*/