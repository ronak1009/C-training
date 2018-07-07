#pragma once
class List
{
public:
	List();
	~List();

private:
	struct Node
	{
		int m_data;
		Node *m_pNext;
	};
private:
	Node *m_pHead;
	Node *m_pTail;
	unsigned m_size;
	void List::swap(Node *node1, Node *node2);
public:
	void push_front(int data);
	void push_back(int data);
	void pop_front();
	void pop_back();
	void clear_list();
	void sort();
	void merge(List l);
	unsigned size() const;
	bool empty() const;

};
