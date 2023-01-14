#include <iostream>
using namespace std;


//Abstraction : In Programming , Abstraction means showing and displaying important information while hiding complex and unimportant information..
//Ex: Coffee , button etc but not the internal working complex process - Process is abstracted for us.
//Abstract class in C++ is a class which has atleast 1 pure virtual function.


// This has become abstract class.
// 1. We can not create instances of Abstract class but we can create pointers of Abstract class.
//2. Inherited class should provide implementation of virtual function.

class SmartPhone {
public: 
	virtual void TakeSelfie() = 0;
	virtual void MakeaCall() = 0;
};


class Android : public SmartPhone {
public:
	void TakeSelfie() {
		cout << "Selfie from Android..\n" << endl;
	}
	void MakeaCall() {
		cout << "Calling from Android..\n" << endl;
	}
};

class Iphone : public SmartPhone {
public:
	void TakeSelfie() {
		cout << "Selfie from Iphone..\n" << endl;
	}
	void MakeaCall() {
		cout << "Calling from Iphone..\n" << endl;
	}
};

int main()
{
	SmartPhone* p = new Android(); //Using base class pointer point to derived class.
	p->TakeSelfie();
	p->MakeaCall();
	SmartPhone* p1 = new Iphone();
	p1->TakeSelfie();
	p1->MakeaCall();

	//Developer working on Android class doesn't need to know anything about IPhone class.Only thing developer needs to know is he needs to provide implementaiton of the function TakeSelfie()

	system("pause>0");
}