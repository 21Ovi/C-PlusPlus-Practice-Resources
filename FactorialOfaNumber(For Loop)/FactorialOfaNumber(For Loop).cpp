#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Number: ";
    cin >> number;
    int factorial = 1;

    /*for (int i = 1;i <= number;i++) {
        factorial *= i;
    }*/

    for (int i = number;i >=1 ;i--) {
        factorial *= i;
    }

    cout <<number << "!=" << factorial;
    system("pause>0");
}