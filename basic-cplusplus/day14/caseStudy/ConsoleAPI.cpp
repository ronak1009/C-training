#include <Windows.h>
#include "consoleAPI.h"

void ConsoleAPI::GotoXY(int x, int y) {
	HANDLE houtputWnd = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD xy = { x, y };
	SetConsoleCursorPosition(houtputWnd, xy);
}