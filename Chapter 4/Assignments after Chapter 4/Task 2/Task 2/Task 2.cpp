#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<float> temps; // A vector that will hold the temperature
    float result = 0; //To avoid non-integer numbers when calculating the median
    for (float temp; cin >> temp;)
        temps.push_back(temp);

    cout << endl;

    if (temps.size() / 2 % 2)// To get rid of the remainder when dividing by odd numbers
        result = temps[temps.size() / 2] + 1; // all even numbers divisible by 2 have no remainder. And if when divided by 2 there is a remainder
                                              //Then add 1 to avoid the remainder (on assignment allowed)
    else result = temps[temps.size() / 2];

    cout << "Temperature median - " << result << endl;
}
