#include <crtdbg.h>
#include "IShape.h"
#include "Line.h"
#include "Rectangle.h"
#include "TextRectangle.h"

int main() {
	IShape *pShape[3] = {
	new Line(5,5, 15,10),
	new Rectangle(20,5, 35, 10),
	new TextRectangle(20,5, 35, 10, "Hello, World")
	};
	for (int i = 0; i < 3; i++) {
		pShape[i]->Draw();
	}

	for (int i = 0; i < 3; i++) {
		pShape[i]->Release();
	}
	_CrtDumpMemoryLeaks();

}