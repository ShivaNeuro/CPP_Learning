#include <iostream>
using namespace std;

int main()
{
	int rows, columns;
	cout << "rows, cols:";
	cin >> rows >> columns;

	int** table = new int*[rows]; // Integer array of pointers
	for (int i = 0; i < rows; i++) {
		table[i] = new int[columns];
	}
	
	// Deallocating
	for (int i = 0; i < rows; i++) {
		delete[] table[i];
	}
	delete[] table;
	table = NULL;
	system("pause>0");
	return 0;
}