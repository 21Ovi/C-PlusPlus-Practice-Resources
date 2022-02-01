#include <iostream>
using namespace std;

int main()
{
    //User enters integer number
    //Program weite out if number is odd or even

    int number;
    cout << "Please Enetr a Whole Number : ";
    cin >> number;
    if (number % 2 == 0) 
    {
        cout << "You have Entered Even Number" << endl;
    }
    else
    {
        cout << "You have Entered Odd Number" << endl;
    }
    cout << "Thanks";

    system("pause>0");
}