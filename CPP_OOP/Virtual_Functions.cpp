#include <iostream>
using namespace std;

// Virtual allow us to execute , the most derived version of the function, when invoked using base class pointer or reference.
// Derived class has its own implementation , it will be executed.
// If derived class has no implmentation, then base class will be executed

class Instrument {
public:
	virtual void MakeSound() {
		cout << "Instrument Playing \n" << endl;
	}
};

class Accordian : public Instrument {
public: 
	void MakeSound() {
		cout << " Playing Accordian \n" << endl;
	}
};

int main() {
	Instrument* p = new Accordian; //Using base class pointer -> It implements most derived function with virtual key word.
	p->MakeSound();
	//Accordian* p1 = new Accordian; //Using derived class pointer
	//p1->MakeSound();
	//Instrument* p2 = new Instrument; 
	//p2->MakeSound();
	system("pause>0");
}

