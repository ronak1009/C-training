#include <string.h>
#include <iostream>
struct Student {
	int m_empId;
	char *m_pname;
	int m_marks[10]; //this should also be a pointer
};

int main() {
	Student s = { 50032, nullptr, {19, 18, 17} };
	int len = strnlen_s("Rahul", 1028);
	s.m_pname = new char[len];
	strcpy_s(s.m_pname, len, "Rahul");

	std::cout << "Name::" << s.m_pname << std::endl;
	std::cout << "Emp ID: " << s.m_empId << std::endl;

	//only releasing the mem blocked in the heap.
	//mem created on stack is released by compiler at the scope end
	delete[] s.m_pname;
	s.m_pname = nullptr;
}

/*
This program is better than the previous one.
Here we can further improve this by using pointer to an array instead of using static array.
*/