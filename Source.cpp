#include <iostream>
#include<array>
using namespace std;

int main(){

	int i, j;
	const int n = 12;
	int array[n];
	cout << "Please, enter the values of each month for 12 months: " << endl;

	for (int i = 0; i < n; i++) {

	cin >> array[i];
	
	}
	
	int startRange, endRange;
	
	cout << "Please, enter start of the range: ";
	cin >> startRange;
	
	cout << "Please, enter end of the range: ";
	cin >> endRange;

	int min = array[startRange];
	int max = array[endRange];

	for (i = startRange - 1; i <= endRange - 1; i++) {

		if (array[i] > array[i + 1])
		{
			max = array[i];
		}
		if (array[i] < array[i + 1])
		{
			min = array[i];
		}

	}
	
	cout << endl << "MIN salary from range= " << min << "\t" << "MAX salary from range= " << max << endl << endl;


	return 0;
}