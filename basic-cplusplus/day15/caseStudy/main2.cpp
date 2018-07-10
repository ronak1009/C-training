#include <stdlib.h>
#include <crtdbg.h>
#include "TextRectangle.h"

int main() {
	{
		/*TextRectangle t(40, 5, 60, 10, "Hello");
		t.Draw();
		system("cls");
		Rectangle *pRect = &t;
		pRect->Draw();
		system("cls");*/

		Rectangle *pRect2 = new TextRectangle (40, 5, 60, 10, "Hello, World");
		pRect2->Draw();
		delete pRect2;
		pRect2 = nullptr;

	}
	_CrtDumpMemoryLeaks();
	
	

}
/*
The Base class pointer is pointing to Derived class object and thus
when we are attempting to delete the Derived class object using base class pointer, we are calling the base class destructor

Thus we need to have virtual destructor in the base class.


*/