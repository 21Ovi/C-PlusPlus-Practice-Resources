#include <iostream>
using namespace std;

int main()
{
    int year, month;
    cout << "Year, Month : ";
    cin >> year >> month;

    switch (month)
    {
    case 2:(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
        cout << "29 Days Month" : cout << "28 Days Month";
        break;
    case 4:
    case 6:
    case 9:
    case 11:cout << "30 Days Month";
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:cout << "31 Days Month";
        break;
    default:cout << "Not Valid!";
    }

    system("pause>0");
}