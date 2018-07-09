class Mobile {
public: void dail() {};
};

class SmartPhone : public Mobile {
public:
	void playMusic();
};



int main() {
	Mobile nokia;
	SmartPhone iphone;

	Mobile &rMobile = nokia;
	SmartPhone &rSmartPhone = iphone;

	rMobile = iphone;
	rSmartPhone = nokia;
	
}
/*

-----------------------------------------------
Base class		Derived class
-----------------------------------------------
Baseclass		Yes				Yes
reference
-----------------------------------------------
Derviedclass	-				Yes
reference
-----------------------------------------------
*/