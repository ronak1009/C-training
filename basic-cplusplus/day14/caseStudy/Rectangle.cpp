#include <Windows.h>
#include "consoleAPI.h"
#include <stdio.h>
#include "Rectangle.h"

Rectangle::Rectangle(int x1, int y1, int x2, int y2)
	: Shape(x1, y1, x2, y2) {};



void Rectangle::Draw() const {
	//corners
	int x1 = GetX1(), 
		x2 = GetX2(), 
		y1 = GetY1(), 
		y2 = GetY2();
	ConsoleAPI::GotoXY(x1, y1);
	putchar(218);
	ConsoleAPI::GotoXY(x1, y2);
	putchar(192);
	ConsoleAPI::GotoXY(x2, y1);
	putchar(191);
	ConsoleAPI::GotoXY(x2, y2);
	putchar(217);
	//horizontal line
	for (int x = x1+1; x < x2; x++) {
		ConsoleAPI::GotoXY(x, y1);
		putchar(196);
		ConsoleAPI::GotoXY(x, y2);
		putchar(196);
	}
	for (int y = y1+1; y < y2; y++) {
		ConsoleAPI::GotoXY(x1, y);
		putchar(179);
		ConsoleAPI::GotoXY(x2, y);
		putchar(179);
	}

};