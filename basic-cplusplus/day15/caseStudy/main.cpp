#include "Line.h"
#include "Rectangle.h"
#include "TextRectangle.h"

int main() {
	Line l(5, 5, 15, 10);
	Rectangle r(20, 5, 35, 10);

	l.Draw();
	r.Draw();

	TextRectangle t(40, 5, 60, 10, "Hello");
	t.Draw();
}
