#include <iostream>

void main() {
	int num;
	std::cout << "Enter a no > ";
	std::cin >> num;
	int count = 0;
	while (count < num) {
		std::cout << count + 1 << std::endl;
		count++;
	}
	for (int a = 0; a < 3; a++) {
		std::cout << "a = " << a << std::endl;
	}
	//you cannot execute the below statement - as the scope of a is within for loop
	//std::cout << "a = " << a << std::endl;
}

/*
while
do-while
for
*/