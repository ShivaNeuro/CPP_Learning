#include <iostream>
using namespace std;

class EquilateralTriange {
private:
	float a;
	float circumference;
	float area;
public:
	void setA(float length) {
		a = length;
		circumference = a * 3;
		area = (1.73 * a * a) / 4;
	}
	//friend void PrintResult(EquilateralTriange); // Friend function.
	// A class can have multiple friend functions.
	friend class Homework;
	// Use it sparingly, If you use too many friends - Idea of Encapsulation is broken.
	//Friendship in programming is not mutual.
	//Friendship is not inherited.
	// Friend functions are used , when we are overloading operators.
};

class Homework {
public:
	void PrintResult(EquilateralTriange et) {
		cout << "Circumference = " << et.circumference << endl;
		cout << "Area = " << et.area << endl;

	}
};



int main()
{
	EquilateralTriange et;
	Homework h;
	et.setA(3);
	h.PrintResult(et);
	system("pause>0");
	
}