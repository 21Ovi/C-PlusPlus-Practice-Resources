#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int b = 10;
    
    cout << "Before Swap a = " << a << " , b = " << b << endl;

    //int temp = a;
    //a = b;
    //b = temp;

    //cout << "After Swap a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After Swap a = " << a << ", b = " << b << endl;


    system("pause>0");
}