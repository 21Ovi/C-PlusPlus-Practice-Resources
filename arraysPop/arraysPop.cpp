#include<iostream>
using namespace std;

int main() {

	cout << "Enter Size of Array :";
	int size;
	cin >> size;
	size--;
	int* array = new int[size];
	int* array2 = new int[size];
	for (int i = 0;i <= size;i++) {
		cout << "Enter Number :";
		cin >> array[i];
	}
	for (int i = 0;i <= size;i++) {
		cout << "First Array :" << array[i];
	}
	for (int i = 0;i <= size;i++) {
		cout << "Enter Number :";
		cin >> array2[i];
	
		cout << "Second Array :";
	for (int i = 0;i <= size;i++) {
		cout << "Second Array :" << array2[i];
	}

	system("pause>0");
	return 0;
}