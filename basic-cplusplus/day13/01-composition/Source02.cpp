class Part {
public:
	Part(int n) {};
	~Part() {};
	void f() {};
private:
	void g() {};
};

class Assembly {
public:
	Assembly() :m_part(1) {};
	~Assembly() {};
	void k() {
		m_part.f();
		m_part.g();
	}
private:
	Part m_part;
};

int main() {
	Assembly a;
	
}
/*
Assembly class is composite of Part class object
Assembly-Part are in composite relationship.

Private members of Part class are not accessible in assembly class member functions
Only public members of the Part class are accessible to the Assembly class members.


*/