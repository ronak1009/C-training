#include <stdio.h>
#include "List.h"

int main() {
	int nums[5] = { 1,3,5,7,8 };
	int nums2[3] = { 7, 10, 56 };
	List list1;
	List list2;
	for (int i = 0; i < 5; i++) {
		list1.push_front(nums[i]);
	}
	list1.PrintList();
	for (int i = 0; i < 3; i++) {
		list2.push_back(nums2[i]);
	}
	list2.PrintList();

	printf("Sorting list 1--- \n");
	list1.sort();
	list1.PrintList();
	list1.merge(list2);
	list1.PrintList();
	list1.clear_list();
	list1.PrintList();
}