#include <iostream>
void main() {
	int a = 10,
		b = -7,
		c = 0;
	//if-else
	if (a) {
		c = a;
		std::cout << "Learning C++" << std::endl;
	}
	else
		c = b;

	//ternary operator => expression ? true_value : false_value
	c = a > b ? a : b;

	// switch - case  :: its advance version of if- else if - else
	a = 5;
	switch (a)
	{
	case 1:
		b = 1;
		break;
	case 2:
		b = 2;
		break;
	default:
		b = 0;
		break;
	}
}