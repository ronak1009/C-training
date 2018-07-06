

class Assembly {
public:
	Assembly():m_part(new Part(1)) {};
	~Assembly() {
		delete m_part;
	};
	void foo() {
		m_part->f();
	}
	class Part {
	public:
		Part(int n) {};
		~Part() {};
		void f() {};
	private:
		void g() {};
	};
private:
	Part *m_part;
};

int main() {
	Assembly a;
}
 /*
 Part-Assembly are in containment relationship

 The declaration/definition of part object is within the scope of Assmebly class.
 direct access to Part is not allowed.
 if public access for Part object -> then with scope resolution you can instantiate part object outside assembly class.
 if private access of Part object-> part object can be instantiated only within assembly class scope.

 access to members of both the objects are governed by their public/private access modifiers.

 */