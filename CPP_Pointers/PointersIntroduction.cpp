#include <iostream>
using namespace std;

//Pointer is also a container but instead of value , it stores address.

int main()
{
	int n = 5;
	cout << n << endl;
	cout << "Physical location of n using &" << &n << endl;
	// Creation of pointer
	int* ptr = &n; //Pointer is holding the address of n
	cout << "Address access using pointer "<<ptr << endl;// Same as &n.
	// How to access the value stored in the ptr. Dereference the pointer.
	cout << "Dereference the pointer"<< * ptr << endl;
	*ptr = 10;
	cout << "Physical location of n using &" << &n << endl;
	cout << "Address access using pointer " << ptr << endl;// Same as &n.
	cout << n << endl;
	cout << "Dereference the pointer" << *ptr << endl;

	// Pointer and the variable it is pointing to should be of same type.

	//Beginner mistake ,pointer is accessed without address.
	int v;
	int* ptr1 = &v;
	*ptr1 = 7;
	cout << "v = " << v << endl;
	system("pause>0");
	return 0;

	// Major problems pointers will solve.
	//- We can use pointers to pass values by a reference to a function and then you can use them to return multiple values.
	//- In combination with Arrays.
	// - Dynamic Memory Allocation -> Pointer of base class to access the object of the derived class.
	// Smart Pointers.

}