#include "Line.h"
#include "Rectangle.h"

int main() {
	Line l(5, 5, 15, 10);
	Rectangle r(20, 5, 35, 10);

	l.Draw();
	r.Draw();
}

/*
copy constructor, destructor and assignment operator are provided by compiler if not provided explicitly by developer.
*/