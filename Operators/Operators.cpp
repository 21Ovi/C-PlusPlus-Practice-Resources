#include <iostream>
using namespace std;

int main()
{
    //Arethmetic Operators -- First Priority

    cout << 22 + 21 << endl;
    cout << 5 / 2 << endl;
    cout << 5.0 / 2.0 << endl;
    cout << 5 % 2 << endl;
    cout << 22 * 21 << endl;

    //Incremental,decremental Operators

    int counter = 7;
    counter++;
    cout << counter << endl;
    counter--;
    cout << counter << endl;

    int counter2 = 7;
    cout << ++counter2 << endl;
    cout << --counter2 << endl;

    system("cls");
    
    //Relational Operational

    int a = 5, b = 8;
    cout << (a != b);

    system("cls");
    
    //Logical Operators -- Least Priority

    cout << (a == 5 && b == 5) << endl;
    cout << (a == 5 || b == 5) <<endl;
    cout << !(a == 5 || b == 5);
    
    system("cls");

    cout << (a == 5 && b == 5+3);

    system("cls");

    int x = 1;
    x += 10;
    x = x + 10;
    cout << x;


    system("pause>0");
}