#include <iostream>

using namespace std;

int main()
{
    string previous = "cat";
    string current;

    while (cin >> current) {
        if (previous == current) {
            cout << "Duplicate word: " << current << endl;
            previous = current;
        }
    }
}
