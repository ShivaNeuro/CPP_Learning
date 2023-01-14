#include <iostream>
using namespace std;


class Instrument {
public:
	virtual void MakeSound() = 0; //Pure Virtual function - Ensure every derived class has their own makesound function.
	//The class has now become Abstract class.
};

class Accordian : public Instrument {
public: 
	void MakeSound() {
		cout << " Playing Accordian \n" << endl;
	}
};

class Piano : public Instrument {
public:
	void MakeSound() {
		cout << " Playing Piano\n" << endl;
	}
};

int main() {
	Instrument* p = new Accordian(); //Using base class pointer -> It implements most derived function with virtual key word.
	p->MakeSound();
	Instrument* p2 = new Piano(); //Using base class pointer -> It implements most derived function with virtual key word.
	p2->MakeSound();

	//Polymorphism - Polymorphic Behavior 
	Instrument* instruments[2] = { p,p2 };
	for (int i = 0; i < 2; i++)
		instruments[i]->MakeSound();
	
	//Accordian* p1 = new Accordian; //Using derived class pointer
	//p1->MakeSound();
	//Instrument* p2 = new Instrument; 
	//p2->MakeSound();
	system("pause>0");
}

