class Math
{
public:
	static int Max(int n1, int n2);
	static const double PI;
	Math() {};

};
const double Math::PI = 3.14;

int Math::Max(int n1, int n2) {
	return n1 > n2 ? n1 : n2;
}


int main() {
	int result = Math::Max(1, 2);
	double pi_value = Math::PI;
}

/*
static data members are not stored in object space.
thus constructors cannot initialize static data members;
Again, because its static data members, they can be accessed directly using the classname and scope resolution
*/