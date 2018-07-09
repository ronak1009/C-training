#include "List.h"
//default constructor
List::List()
	: m_pHead(nullptr), m_pTail(nullptr), m_size(0) {};

//destructor
List::~List() {
	clear_list();
}

void List::clear_list() {
	Node *pIterator = nullptr;
	while (m_pHead == nullptr)
	{
		pIterator = m_pHead;
		m_pHead = m_pHead->m_pNext;
		delete pIterator;
		pIterator = nullptr;
	}
	m_pTail = nullptr;
	m_size = 0;
}

void List::push_front(int data) {
	List::Node *pn = new List::Node(); //create new node
	pn->m_data = data; 	//populate with correct data
	pn->m_pNext = m_pHead; 	//push it at the top of the list
	m_pHead = pn;
	if (m_size == 0)	//populating the tail
		m_pTail = m_pHead;
	++m_size;	//update the size
}

void List::push_back(int data) {
	Node *pn = new Node();
	pn->m_data = data;
	pn->m_pNext = nullptr;
	if (0 == m_size)
		m_pHead = m_pTail;
	else
		m_pTail->m_pNext = pn; //make the tail element point to the new node created
	m_pTail = pn;
	++m_size;
}

void List::pop_back() {
	if (m_size == 0)
		return;
	Node *secondLast = m_pHead;
	while (secondLast == m_pTail) {
		secondLast = secondLast->m_pNext;
	}
	delete m_pTail;
	m_pTail = secondLast;
	secondLast->m_pNext = nullptr;
	--m_size;
}

void List::pop_front() {
	if (m_size == 0)
		return;
	Node *firstNode = m_pHead;
	m_pHead = m_pHead->m_pNext;
	delete firstNode;
	firstNode = nullptr;
	--m_size;
}

unsigned List::size() const {
	return m_size;
}

bool List::empty() const {
	return m_size == 0;
}
void List::sort() {
	//create a dyamic array of node objects
	Node **nodeList = new Node*[m_size];
	Node *iterator = m_pHead;
	//populate the nodeList array with addresses of all the nodes present in the list
	for (int index = 0; index < m_size; index++) {
		*(nodeList + index) = iterator;
		iterator = iterator->m_pNext;
	}
	//sorting the nodeList
	for (int i = 0; i < m_size-1; i++) {
		for (int j = i; j < m_size; i++) {
			if (nodeList[i]->m_data < nodeList[j]->m_data)
			{
				//swap as the nodes
				Node *temp = nodeList[i];
				nodeList[i] = nodeList[j];
				nodeList[j] = temp;
			}
		}//inner for
	}//outer for
	
	//Nodelist array is now sorted, so re-establish the links correctly
	m_pHead = nodeList[0];
	for (int i = 1; i < m_size-1; i++) {
		nodeList[i]->m_pNext = nodeList[i + 1];
	}
	nodeList[m_size-1]->m_pNext = nullptr;
	m_pTail = nodeList[m_size-1];
}