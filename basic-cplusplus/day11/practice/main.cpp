#include "Counter.h"

int main() {
	Counter obj_1;
	int count = obj_1.getCount();
	obj_1.SetCount(2);
	count = obj_1.getCount();

	Counter obj_2(3);
	count = obj_2.getCount();

	obj_1.Reset();
	count = obj_1.getCount();
	obj_2.Reset();
	count = obj_2.getCount();
}