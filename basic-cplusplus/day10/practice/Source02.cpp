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
struct Vector {
	int m_index;
	int m_size;
	int m_capacity;
	Node *m_pNodes;
};

void push_back(Vector &v, int data);

// don't delete the last element, the size is reduced and so the last element is allowed for over-writing
void pop_back(Vector &v);

void clearVector(Vector &v);

int main() {
	int data;
	char yn;
	Vector v = {0, 0, 5, nullptr};
	do {
		//clear the screen. system executes the command string.
		//if it launches new process, then it waits till the process is complete
		system("cls");
		
		std::cout << "Enter Number :: ";
		std::cin >> data;
		//Write code which stores data in the array.
		push_back(v, data);
		std::cout << "Do you wish to Continue ? (Y/N) ";
		std::cin >> yn;
	} while (yn == 'y' || yn == 'Y');
	std::cout << "Size of Vector = " << v.m_size << std::endl;
	pop_back(v);
	pop_back(v);
	std::cout << "Size of Vector = " << v.m_size << std::endl;
	clearVector(v);
	
	_CrtDumpMemoryLeaks();
}

void push_back(Vector &v, int data) {
	if (v.m_size == 0)
		v.m_pNodes = new Node[v.m_capacity];

	if (v.m_size < v.m_capacity) {
		(v.m_pNodes + v.m_index)->m_data = data;
	}
	else {
		v.m_capacity *= 2;
		Node *ptemp = v.m_pNodes;
		v.m_pNodes = new Node[v.m_capacity];
		for (int i = 0; i < v.m_size; i++) {
			v.m_pNodes[i] = ptemp[i];			
		}
		//delete the old location
		delete[] ptemp;
		ptemp = nullptr;
	}
	v.m_size++;
	v.m_index++;
}

void pop_back(Vector & v)
{
	//here we will just reduce the size and index of the vector
	--v.m_index;
	--v.m_size;
	//the last element is not actually deleted else we would have to re-allocate array
}

void clearVector(Vector & v)
{
	v.m_size = 0;
	v.m_index = 0;
	delete[] v.m_pNodes;
	v.m_pNodes = nullptr;
}

/*
Here we are using batch operation of reallocation
Not on every insertion, we are reallocating. Instead we are doubling the size of array everytime we reallocate.

Thus saving the expensive operation of reallocation and member wise copy of object on every iteration.
*/