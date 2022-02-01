#include<iostream>
using namespace std;

void main()
{
	int number;
	cout << "Number: ";
	cin >> number;

	bool isPrimeFlag = true;

	for (int i = 2;i < number;i++) {
		if (number % i == 0) {
			isPrimeFlag = false;
			break;
		}
	}

	if (isPrimeFlag)
		cout << "Prime Number" << endl;
	else
		cout << "Not Prime Number" << endl;

	system("pause>0");
}