#include<iostream>
using namespace std;

template<typename T>

void Swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

void main()
{
	int a = 5, b = 7;
	cout << a << " - " << b << endl;
	Swap(a, b);
	cout << a << " - " << b << endl;
	
	char c = 'c', d = 'd';
	cout << c << " - " << d << endl;
	swap(c, d);
	cout << c << " - " << d << endl;

	string cd = "Ovesh", dc = "Sheldon";
	cout << cd << " - " << dc << endl;
	swap(cd, dc);
	cout << cd << " - " << dc << endl;

	system("pause>0");
}