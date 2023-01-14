#include <iostream>
using namespace std;

void printNumber(int *numberPtr)
{
	cout << *numberPtr << endl;

}

void printLetter(char* charPtr)
{
	cout << *charPtr << endl;

}

void print(void* ptr,char type)
{
	switch (type) {
	case 'i':cout << *((int*)ptr) << endl; break;//handle int* -> type cast to integer pointer and then dereference .
	case 'c':cout << *((char*)ptr) << endl; break;//handle char *
	case 'f':cout << *((float*)ptr) << endl; break;//handle char *//handle float *
	}
}

int main() {
	//A void pointer can hold the address of any other variable.
	// We can not dereference void pointer
	int number = 5;
	char letter = 'a';
	//printNumber(&number);
	//printLetter(&letter);
	print(&number, 'i');
	print(&letter, 'c');
	system("pause>0");
	return 0;
}
//Very careful when using Void pointer....Compiler doesn't know if we are making error or not.
// Logical errors are much harder to find .