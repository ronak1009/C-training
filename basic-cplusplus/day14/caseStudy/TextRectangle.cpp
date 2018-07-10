#include "TextRectangle.h"
#include "consoleAPI.h"

TextRectangle::TextRectangle(int x1, int y1, int x2, int y2, std::string text) 
	: Rectangle(x1, y1, x2, y2) , m_text(text){};

void TextRectangle::Draw() const {
	int x1 = GetX1();
	int x2 = GetX2();
	int y1 = GetY1();
	int y2 = GetY2();
	int deltaX = (x2+x1-m_text.length())/2;
	int deltaY = (y2+y1)/2;
	Rectangle::Draw();
	ConsoleAPI::GotoXY(deltaX , deltaY );
	puts(m_text.c_str());
	
}