#include <stdio.h>
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
		m_pHead = pn;
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
	//swap the data member. Here there is only one data member so its simple
	int temp;
	Node *pIterator = m_pHead;
	while (pIterator->m_pNext) {
		Node *nextNode = pIterator->m_pNext;
		//bubble sort implementation
		while (nextNode) {
			if (pIterator->m_data > nextNode->m_data) {
				temp = pIterator->m_data;
				pIterator->m_data = nextNode->m_data;
				nextNode->m_data = temp;
			}
			nextNode = nextNode->m_pNext;
		}
		pIterator = pIterator->m_pNext;
	}
}

void List::merge(List l) {
	m_pTail->m_pNext = l.m_pHead;
	m_pTail = l.m_pTail;
}

void List::PrintList() const {
	Node *pIterator = m_pHead;
	while (pIterator)
	{
		printf("%d  ", pIterator->m_data);
		pIterator = pIterator->m_pNext;
	}
	printf("\n");
}