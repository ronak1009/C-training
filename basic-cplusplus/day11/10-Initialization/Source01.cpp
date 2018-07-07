class Integer {
public: 
	Integer(int n);
	int GetInteger();
private :
	int m_n;
};
//Constructor's initialization list
Integer::Integer(int n) : m_n(n){
	//m_n = n;
}
int Integer::GetInteger() {
	return m_n;
}

int main() {
	Integer a(1);
	int n = a.GetInteger();
}
/*
With this style of writing, m_n is initialized with value n.
if a value is given within the body of the constructor, it is technically assignment operation
as the data member is already declared.

for multiple data members initialization, you seperate the initialization list by , (comma) as follows:
Integer(int m, int n, int p) : m_m(m), m_n(n), m_p(p) {}

*/