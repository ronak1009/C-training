/*unconditional jump == GOTO */
#include <iostream>
using namespace std;
void main() {
	int a, b, c;
	cout << "a ?";
	cin >> a;
	cout << "b ?";
	cin >> b;
	char opr = ' ';
	cout << "Enter the operator (+, -, *, /) ?";
	cin >> opr;

	switch (opr)
	{
	case '+':
		c = a + b;
		break;
	case '-':
		c = a - b;
		break;
	case '*':
	case 'x':
	case 'X':
		c = a * b;
		break;
	case '/':
		c = a / b;
		break;
	default:
		cout << "Invalid Operator !" << endl;
		goto FINAL;
	}
	cout << "a " << opr << " b = " << c << endl;
FINAL:
	cout << "End of Program" << endl;
}

/*
	when we use GOTO, the label used should also have atleast one executable statement
*/