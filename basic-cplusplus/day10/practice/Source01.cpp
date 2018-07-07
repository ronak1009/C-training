/*
/* 
Re-allocation of the array.
complete the following program. The program should accept an integer from user and store in dynamic array.
your program may need to reallocate array in case overflow taks place.
The program should keep accepting inputs until user wishes to input.
*/
#include <iostream>
#include <crtdbg.h>

struct Node {
	int m_data;
};

void updateNodes(Node *&pNodes, int currentIdx);


int main() {
	int data;
	char yn;
	Node *pnodes = nullptr;
	int counter = 0;
	do {
		std::cout << "Enter Number :: ";
		std::cin >> data;
		//Write code which stores data in the array.
		updateNodes(pnodes, counter);
		(pnodes + counter)->m_data = data;
		++counter;
		std::cout << "Do you wish to Continue ? (Y/N) ";
		std::cin >> yn;
	} while (yn == 'y' || yn == 'Y');
	delete[] pnodes;
	pnodes = nullptr;
	_CrtDumpMemoryLeaks();
}

void updateNodes(Node *&pNodes, int currentIdx) {
	Node *refNodes = pNodes;
	pNodes = new Node[currentIdx + 1];
	if (currentIdx != 0) {
		for (int i = 0; i < currentIdx; i++) {
			*(pNodes + i) = *(refNodes + i);
		}
	}
	
	delete[] refNodes;
	refNodes = nullptr;
}
/*
This code can further be improved upon.
reallocation can happen in batch operation.
*/