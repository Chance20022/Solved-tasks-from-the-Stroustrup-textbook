#include <iostream>

using namespace std;

int main()
{
    double d = 0;
    while (cin >> d) {

        int i = d;
        char c = i;
        cout << "d == " << d
            << " i == " << i
            << " i2 == " << i + 2
            << " char (" << c << ")\n";

    }
}
