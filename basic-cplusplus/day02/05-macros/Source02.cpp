#include <iostream>

#define INPUT(message, inputVar) std::cout << message; \
									std::cin >> inputVar;

#define PRINT_RESULT(message, result) std::cout << message << result << std::endl;

void main() {
	int a, b;
	char op;
	INPUT("a > ", a)
	INPUT("b > ", b)
	
	do {
		INPUT("Operator [+ - * / %] > ", op)
		
		if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') {
			PRINT_RESULT("Invalid Operator. Try Again", "")
		}
		else
			break;

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
		PRINT_RESULT("a % b = ", a % b)
		break;
	default:
		break;
	}
}