#if !defined(COUNTER_H)
#define COUNTER_H

class Counter {
private:
	unsigned m_count;
public:
	Counter();
	Counter(unsigned c);
	void Reset();
	unsigned getCount();
	void SetCount(unsigned c);
};
#endif