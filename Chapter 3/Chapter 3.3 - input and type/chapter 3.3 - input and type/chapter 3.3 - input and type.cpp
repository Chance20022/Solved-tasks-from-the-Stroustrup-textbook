#include <iostream>

using namespace std;

int main()
{
    double age = 0;

    cout << "Enter your age - ", cin >> age;
    cout << endl;
    cout << "Your age in month - " << age * 12 << endl;
}