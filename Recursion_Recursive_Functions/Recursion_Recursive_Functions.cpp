#include<iostream>
using namespace std;

int recursive_sum(int m, int n) {
	if (m == n)
		return m;
	return m + recursive_sum(m + 1, n);
}

// Sum Numbers between m-n
void main()
{
	int m, n;
	cout << "Enter Number : ";
	cin >> m;
	cout << "Enter Number Greater than " << m << " : " ;
	cin >> n;

	if(n>m)
		cout << "Sum = " << recursive_sum(m, n);
	else {
		cout << "Sum = " << recursive_sum(n,m);
	}

	system("pause>0");
}