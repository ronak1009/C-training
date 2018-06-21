void main() {
	
	//integer constants
	38; // in decimal
	0x26; // in hexadecimal
	046; // in octal

	//real constants
	3.142857; //double precision
	3.142857f; //single precision

	//character constants - in single quotes
	'c'; //narrow character - 2^8 bits of mem. available.
	L'c'; //wide character - 2^16 bits of mem. available
	'\t'; //escape sequence
	/*
	\a bell				\b backspace	\n newline
	\r carriage return	\f form feed	\v vertical tab
	\t	horizontal tab	\' '			\" "
	*/

	//string literal - in double quotes
	"c++"; //narrow character string;
	L"c++"; //wide narrow character string;
	//strings end with NULL \0 character

	//boolean constants
	true;
	false;

	char a = 100;
	int b = a;
	wchar_t c = 10000000000;
	int d = c;
}