#include <iostream>
using namespace std;

int main() {
	int LuckyNumbers[5]; //= { 2,3,4,5,6 };
	//cout << LuckyNumbers << endl; // Name of array is equal to address of first array
	//cout << &LuckyNumbers[0] << endl; // Address of the first array.
	//cout << LuckyNumbers[2] << endl;
	//cout << *(LuckyNumbers + 2) << endl; // Add 2 more address spaces of type int.
	for (int i = 0; i <= 4; i++) {
		cout << "Number :";
		cin >> LuckyNumbers[i];
	}
	for (int i = 0; i <= 5; i++) {
		cout << *(LuckyNumbers+i)<<" "; // Memory leak..
	}
	system("pause>0");
	return 0;
}