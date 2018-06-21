#include <iostream>

/*
	test case data; - this is called whitebox testing
*/
const int a[4] = { 3,2,1,1 };
const int b[4] = { 2,1,3,2 };
const int c[4] = { 1,3,2,3 };
int FindMax(int a1, int b1, int c1) {
	if (a1 > b1 && a1 > c1)
		return a1;
	else if (b1 > a1 && b1 > c1)
		return b1;
	else
		return c1;
}

void main() {
	bool isTest = false;
	std::cout << "Want to run automated tests ? (1=Yes/0=No)[=0] ::";
	std::cin >> isTest;

	int a1, b1, c1, max;
	if (isTest) {
		int testCounter = 0;
		for (int count = 0; count < 4; count++) {
			a1 = a[count];
			b1 = b[count];
			c1 = c[count];
			int max = FindMax(a1, b1, c1);
			switch (count) {
			case 0:
				if (a[0] == max)
					++testCounter;
				break;
			case 1:
				if (c[3] == max)
					++testCounter;
				break;
			case 2:
				if (b[2] == max)
					++testCounter;
				break;
			default:
				if (c[3] == max)
					++testCounter;
			}
		}
		if (testCounter == 4)
			std::cout << "----- All Tests have Passed ----" << std::endl;
		else 
			std::cout << "----- Test(s) have failed ----" << std::endl;
	}
	else {
		std::cout << "Enter 3 values " << std::endl;
		std::cin >> a1;
		std::cin >> b1;
		std::cin >> c1;
		max = FindMax(a1, b1, c1);
		std::cout << "Max of " << a1 << " ," << b1 << " ," << c1 << " = " << max << std::endl;
	}
}

/*
limitation of using switch - case:
1. can be used only with integral datatypes -> int, char
2. for float, double, string .. cannot work

*/