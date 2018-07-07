class Integer {
	int m_n;
public:
	Integer(int a) : m_n(a) {};
	int GetInteger() const;
	void SetInteger(int a);
	Integer operator+ (const Integer &b);

};
int Integer::GetInteger() const {
	return m_n;
}
void Integer::SetInteger(int a) {
	m_n = a;
}
Integer Integer::operator+ (const Integer &b) {
	//creating anyonymous object of class Integer
	return Integer(m_n + b.m_n);
}
int main() {
	Integer a(1), b(2), c(0);
	c = a + b;
}

/*
'+' operator is unknown for the compiler wrt 'Integer' class (i.e custom data type)

'operator' is C++ keyword.

scope of anyomymous object is very limited. It gets destroyed as soon as we its value
is returned to return object carrier or LHS of the operation.

Pirvate data Members can be accessed directly inside a member functions if:
1.	trying to access data member of object on which the mem function is called
2.	same class object is passed as arguments to the member function
	(this is commonly visible in operator overloading functions)

Most of the c++ operators can be overloaded except for some:
	. (dot)
	?: (ternary)
	:: (scope resolution)
	sizeof (calculation of size of datatype/variable)

Operator overloading does not permit introduction of new operators to C++
Operator overloading does not change the precedence of operators and associativity rules
certain operators such as (cast), [], () have to be implemented as member functions.
*/