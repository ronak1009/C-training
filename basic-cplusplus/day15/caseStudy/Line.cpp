#include "Line.h"
#include <stdio.h>
#include "consoleAPI.h"

Line::Line(int x1, int y1, int x2, int y2)
	: Shape(x1, y1, x2, y2) {};

void Line::Draw() const {
	ConsoleAPI::GotoXY(GetX1(), GetY1());
	putchar('*');
	ConsoleAPI::GotoXY(GetX2(), GetY2());
	putchar('*');
}
void Line::Release() {
	delete this;
}
