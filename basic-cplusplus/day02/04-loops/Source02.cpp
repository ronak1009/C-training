#include <iostream>

void main() {
	int a, b;
	char op;
	std::cout << "a > ";
	std::cin >> a;
	std::cout << "b > ";
	std::cin >> b;
	do {
		std::cout << "Operator [+ - * / %] > ";
		std::cin >> op;
		if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') {
			std::cout << "Invalid Operator. Try Again";
		}
	} while (1);
	switch (op)
	{
	case '+':
		std::cout << "a + b = " << a + b << std::endl;
		break;
	case '-':
		std::cout << "a - b = " << a - b << std::endl;
		break;
	case '/':
		std::cout << "a / b = " << a / b << std::endl;
		break;
	case '*':
		std::cout << "a * b = " << a * b << std::endl;
		break;
	case '%':
		std::cout << "a % b = " << a % b << std::endl;
		break;
	default:
		break;
	}
}