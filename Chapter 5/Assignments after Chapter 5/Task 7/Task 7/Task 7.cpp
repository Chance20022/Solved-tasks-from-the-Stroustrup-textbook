#include <iostream>

using namespace std;

double eee(double a, double b, double c) {
    double x1 = 0;
    double x2 = 0;

    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << x1 << " " << x2;
    
    return 0;
}

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    cout << "Input a - ", cin >> a;
    cout << endl;
    cout << "Input b - ", cin >> b;
    cout << endl;
    cout << "Input c - ", cin >> c;
    cout << endl;

    double k = eee(a, b, c);

    return 0;
}
