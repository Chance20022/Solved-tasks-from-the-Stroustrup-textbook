#include <iostream>

using namespace std;

int main()
{
    float a = 0, b = 0, sum = 0;
    char operation = ' ';

    cout << "Enter the expression to be counted(Separated by spaces) - " << endl;
    cout << "Your the first number - ", cin >> a;
    cout << endl;
    cout << "Your the second number - ", cin >> b;
    cout << endl;
    cout << "Your operation - ", cin >> operation;

    if (operation == '+') {
        sum = a + b;
        cout << "Sum " << a << " and " << b << " equals " << sum << endl;
    }
    else if (operation == '-') {
        sum = a - b;
        cout << "Difference " << a << " and " << b << " equals " << sum << endl;
    }
    else if (operation == '*') {
        sum = a * b;
        cout << "Product " << a << " and " << b << " equals " << sum << endl;
    }
    else if (operation == '/') {
        sum = a / b;
        cout << "Dvision " << a << " and " << b << " equals " << sum << endl;
    }

    return 0;
}
