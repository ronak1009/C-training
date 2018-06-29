int main() {
	int *pn = new int;
	*pn = 1;
	delete pn;
	pn = nullptr;
}

/*
=====================================================
	malloc									new
=====================================================
1.	function								operator
------------------------------------------------------
2.	not a keyword, function name			its a C++ keyword
------------------------------------------------------
3.	need to specify the size to reserve		calculates the size it requires to reserve
	(no of bytes to be reserved				(number of bytes to be reserved is passed 
	is to be specified by developer)		automatically to new by compiler)
------------------------------------------------------
4.	explicit type casting is required		type casting happens implicity
------------------------------------------------------
5. reserved mem should be freed using		reserved mem is freed using delete operator
	free() function
------------------------------------------------------
6. "malloc.h" is to be included				no header file inclusion required for new, delete
------------------------------------------------------
7.	malloc, free can be invoked in C/C++	new, delete can be invoked only in C++
------------------------------------------------------
8.	malloc doesn't invoke constructor		new invokes constructor
	free doesn't invoke destructor			delete invokes destructor
------------------------------------------------------



*/