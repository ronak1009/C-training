class MobilePhone {
public:
	void Dial(int phoneNo) {};
	void sendSMS(int phoneNo, char*message) {};
	void receiveSMS(int phoneNo, char*message) {};
};

class SmartPhone : public MobilePhone {
public:
	void PlayMusic() {};
	void PlayVideo() {};
};
int main() {
	MobilePhone nokia;
	nokia.Dial(123456789);
	nokia.sendSMS(334455667, "Bonjour !");

	SmartPhone iphone;
	iphone.Dial(10098756);
	iphone.receiveSMS(334567543, "Bonjour !");
	iphone.PlayMusic();
}

/*
Inheritenance is also known as "Is A" or "General-Special" relationship.
here, 'MobilePhone' class is called - Base/Parent/Super/General class.
'SmartPhone' class can be called as - Derived/child/Sub/Special class.


*/