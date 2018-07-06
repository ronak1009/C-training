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
	Assembly():m_part(1) {};
	~Assembly() {};
private:
	Part m_part;
};

int main() {
	Assembly a;
}
 /*
 Assembly class is composite of Part class object
 Assembly-Part are in composite relationship.

 When Assembly object is created, following are the lifecycle steps happening:
 1. Part is created
 2. Assembly is created
 3. Assembly is destroyed
 4. Part is destroyed

 composite/aggregation relationships are also known as 'has-a' or 'Whole/Part' relationship

 */