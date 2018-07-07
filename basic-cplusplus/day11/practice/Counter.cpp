/*
Write a class called 'Counter' the object of which can be used to count things.
Define unsigned unsignedeger data member 'm_count' to keep count of things already counted.
Provide accessor that return the existing count.
A 'reset' member function to reset count to 0.
A non-parametric and parametric constructor to set initial count to 0 or to sepcific value respectively.

note: no user unsignederaction should be done from within any member function
*/

#include "Counter.h"

Counter::Counter() {
	m_count = 0;
}

Counter::Counter(unsigned c) {
	m_count = c;
}
unsigned Counter::getCount() {
	return m_count;
}

void Counter::Reset() {
	m_count = 0;
}
void Counter::SetCount(unsigned c) {
	m_count = c;
}