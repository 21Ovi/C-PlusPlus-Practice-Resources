#include <iostream>
using namespace std;

int main()
{
    float annualSalary;
    cout << "Please Enter your Annual Salary : ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary << endl;
    cout << "In 10 years You will earn " << annualSalary * 10;

    char character = 'a';

    system("pause>0");
}