#include<iostream>
using namespace std;

bool isPrimeNumber(int number) {
	for (int i = 2;i < number;i++) {
		if (number % i == 0) 
			return false;
	}
	return true;
}

void main()
{
	int count=0;
	int num;
	cout << "Enter Number :";
	cin >> num;

	for (int i = 1;i <= num;i++) {
		bool isPrime = isPrimeNumber(i);
		if (isPrime) {
			cout << i << " is Prime Number\n";
			count++;
		}
	}
	cout << "There are total :" << count << " Prime Numbers from 1 to " << num;
	system("pause>0");
}