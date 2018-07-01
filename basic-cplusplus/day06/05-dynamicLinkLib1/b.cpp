
_declspec(dllexport) int add(int a, int b) {
	return a + b ;
}

/*
exported symbols of this dll are avaiable to other dll(s) or application.
These symbols can only be accessed outside the dll.

private symbols of this dll are not available to other dll(s) or application.

Application cannot export symbols. It can only import.

A dll can import as well as export symbols.

===============
compiling & preparing dll
===============
cl /c b.cpp  	--> b.obj
link /DLL b.obj --> b.dll, b.exp, b.lib


*.lib == import library which contains the list of all symbols which are exported
from .dll

*.exp == exported symbols which contains the list of exported symbols.
This is essential while resolving cyclic dependencies issue. When one
dll is dependent on another dll and another dll is dependent on former.

*.dll = dynamic link library which contains the actual complied code of the functions.
While linking it is import library (.lib) which is linked to application and not .dll.
dll files are not linked in the library linking phase.

which files should be shared with the colleague & client ?
colleague: 
.h (header files) - they contain the declarations
.lib (import files) - essential to build the executable
.dll (dynamic lib) - contains the actual code or definitions in compiled form which is required to run the application.

 
client:: .dll & .exe

*/
