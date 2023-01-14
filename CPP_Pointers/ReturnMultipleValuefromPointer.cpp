#include <iostream>
using namespace std;


void minmaxval(int array[], int size, int* min, int* max)
{
	for (int i = 1; i < size; i++) {
		if (array[i] < *min)
			*min = array[i];
		if (array[i] > *max)
			*max = array[i];
	}
		
}

int main()
{	
	int array[5] = { 2,3,4,0,8 };
	int min = array[0];
	int max = array[0];
	minmaxval(array, 5, &min, &max);
	cout << "min" << min << endl;
	cout << "max" << max << endl;

	system("pause>0");
}