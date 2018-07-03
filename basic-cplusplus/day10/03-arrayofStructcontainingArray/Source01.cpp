struct Student {
	int m_empId;
	char m_name[20];
	int m_marks[10];
};

int main() {
	Student s[] = {{20112, "Ronak", {18, 19, 17, 19, 20}},
					{ 23142, "Tushar",{ 18, 19, 17, 19, 20 }},
					{ 12114, "Rohan",{ 20, 20, 17, 19, 20 } },
					{ 52642, "Anup",{ 18, 19, 20, 20} }
	};
	s[0].m_marks[7] = 10;
}
/*
This is poor struct design.
Reasons:
1. char[] has fixed size 20. - Can cause under utilization or when more char(s) are to be used, it become invalid
2. the structure size is large.
	4 + (20 * 1) + (10 * 4) = 64 bytes
3. The struct variables that get initialized during the application, the 64 bytes are required on stack everytime
4. Stack mem is limited and thus very limited space will be stored
5. because of aligment of mem for struct in mem, some more padding space will be used due to array. Thus cause more
mem wastage.

>>  for improvement check:: 05-structContainingPointer/Source01.cpp

*/