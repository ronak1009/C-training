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
	Assembly():m_part(new Part(1)) {};
	~Assembly() {
		delete m_part;
	};
private:
	Part *m_part;
};

int main() {
	Assembly a;
}
 /*

 Part object is not reserving the memory in the object space of assembly.
 Assembly-Part are in composite relationship.

 When Assembly object is created, following are the lifecycle steps happening:
 there is no constraint on the constructor/destructor calls mechanism for the object.

 This is because the two objects are independent and thus they can be created individually
 and later connection can be established.
 */