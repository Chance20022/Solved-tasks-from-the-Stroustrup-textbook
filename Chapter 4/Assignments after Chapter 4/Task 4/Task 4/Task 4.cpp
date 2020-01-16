#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // exercise 4 on page 169

    setlocale(LC_ALL, "Russian");

    int min = 1, max = 100, guess;

    for (int i = 0; i < 7; i++) {

        guess = (min + max) / 2;

        cout << "Ваше число больше " << guess << "?  (y/n)" << endl;

        char answer = ' ';

        cin >> answer;

        if (answer == 'y') {
            min = guess;
        }
        else if (answer == 'n') {
            max = guess +1;
        }

    }
    cout << "Ваше число - " << guess;

    return 0;
}
