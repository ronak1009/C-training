/*
Write function 'strlen' that compute the length of a given string.
The string is to be passed to strlen as argument.
The length should not include null character. Lenggth is in term of count of characters and not bytes. The string passed to the function
can be narrow or wide character string.
*/

int strlen(char str[]);
int strlen(wchar_t str[]);

int main() {
	wchar_t myStr[] = L"Dassault";
	int strLength = strlen(myStr);
}

int strlen(char str[]) {
	int length = 0;
	while (str[length])
		length++;
	return length;
};

int strlen(wchar_t str[]) {
	int length = 0;
	while (str[length])
		length++;
	return length;
};