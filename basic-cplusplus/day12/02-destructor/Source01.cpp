class Integer {
	int m_n;
public:
	Integer(int a) : m_n(a) {};
	int GetInteger() const;
	void SetInteger(int a);
	Integer operator+ (const Integer &b);
	~Integer();
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
Integer::~Integer() {

}
int main() {
	Integer a(1);
	int n = a.GetInteger();
}
/*
constructor is called just after the object has come into existence and destructor is called
just before the object goes out of existence.

constructor - never involves in reserving the object space.
it comes into existence just after memory is getting reserved.

destructor - not involved in releasing the memory of the object space.
it is used to release any resources that you have used so that that mem can be used at later stage.

destructor provides us control before the stack frame is to be 
released or object space is released by compiler.

~ destructor overloading is not possible.
~ destructor function does not take arguments.
~ destructor function cannot be called explicitly any time during the code execution. Compiler calls it implicitly.

if developer does not provide destructor explicitly, complier creates a default destructor for you.

*/
