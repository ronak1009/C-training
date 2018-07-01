#include <string.h>

int main() {
	char s[] = "Hello";
	//string length computation
	int len = 0;
	wchar_t ws[] = L"World";
	len = wcslen(ws);
	len = strlen(s);
	
	//string copy - length of the array cannot be obtained dynamically because the array here are of static nature.
	char sc1[8];
	strcpy_s(sc1,6, s);
	//des, size, src
	strcpy_s(sc1,7, "HELLOW");

	//string concatenation
	char scat[12];
	strcpy_s(scat, strlen(s) + 1, s);
	strcat_s(scat, 12, sc1);

	int res = strcmp("RONAK", "SACHIN"); //1
	res = strcmp("SACHIN", "RONAK"); //-1
	res = strcmp("RONAK", "RONAK"); //0
}