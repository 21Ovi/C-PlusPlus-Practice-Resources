#include <iostream>
using namespace std;

int main()
{
    int hostUserNum, guestUserNum;
    cout << "Host : ";
    cin >> hostUserNum;
    system("cls");
    cout << "Guest : ";
    cin >> guestUserNum;

    (hostUserNum == guestUserNum)? cout << "Correct!": cout << "Wrong";

   /* if (hostUserNum == guestUserNum)
        cout << "Correct!";
    else
        cout << "Wrong";*/

    system("pause>0");
}

