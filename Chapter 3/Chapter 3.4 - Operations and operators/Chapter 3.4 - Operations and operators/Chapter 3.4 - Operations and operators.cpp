#include <iostream>

using namespace std;

int main()
{
    cout << "Please, enter floating point values:";
    int n = 0;
    cin >> n;
    cout << "n == " << n
        << "\nn+1 == " << n + 1
        << "\nThree times in n == " << 3 * n
        << "\ntwo times in n == " << n + n
        << "\nn squared == " << n * n
        << "\nhalf n == " << n / 2
        << "\nSquare root of n == " << sqrt(n)
        << '\n';
    // The type int, when divided by 2, rounds to an integer. And with the function sqrt () it shows floating-point numbers, 
    // but we specified the int type.
}
