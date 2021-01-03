#include <iostream>
using namespace std;

int main(){

	int p, i, j;
	int array[12];
	cout << "Please, enter the values of each month for 12 months: " << endl;
	
	for (i = 1; i <= 12; i++) {

	cin >> array[i];
	
	}
	
	int startRange, endRange;
	
	cout << "Please, enter start of the range: ";
	cin >> startRange;
	
	cout << "Please, enter end of the range: ";
	cin >> endRange;

	int min = array[startRange];
	int max = array[endRange];

	for (i = startRange; i <= endRange; i++) {

		if (array[i] > max)
		{
			max = array[i];
		}
		if (array[i] < min)
		{
			min = array[i];
		}

	}
	
	cout << endl << "MIN salary from range= " << min << "\t" << "MAX salary from range= " << max << endl << endl;

	system("pause");
	return 0;
}