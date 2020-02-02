#include <iostream>

using namespace std;

int main()
{
    double a = 0, b = 0, c = 0, answer = 0, x1 = 0, x2 = 0;

    cout << "Input number of a - ", cin >> a;
    cout << endl;
    cout << "Input number of b - ", cin >> b;
    cout << endl;
    cout << "Input number of c - ", cin >> c;
    cout << endl;
    cout << "You have - " << a << "x^2 + " << b << "x + " << c << endl;

    answer = (b * b) - (4 * a * c);
    x1 = (-b + sqrt(answer)) / (2 * a);
    x2 = (-b - sqrt(answer)) / (2 * a);

    cout << "X1 = " << x1 << ", X2 = " << x2 << endl;
}
