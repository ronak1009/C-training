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

	Mobile rMobile = nokia;
	SmartPhone rSmartPhone = iphone;

	rMobile = iphone; //object slicing
	rSmartPhone = nokia;
	
}
