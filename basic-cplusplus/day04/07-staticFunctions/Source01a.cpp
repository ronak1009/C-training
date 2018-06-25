static void f();

int main() {
	f();
}

void f() {

}

/*
using static keyword, we are restricting the scope of a memory accessibility
while their life is throughout the application

thus, f() is only available to source01a.cpp and not in source01b.cpp -> provides linking error

*/