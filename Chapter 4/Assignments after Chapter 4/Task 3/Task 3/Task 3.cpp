#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<double> temps;
    for (double i; cin >> i;) {
        temps.push_back(i);
    }

    float sum = 0;
    for (float s : temps) sum += s;
    cout << "Sum of all distances - " << sum << endl;

    float min = 0;
    float max = 0;

    sort(temps.begin(), temps.end());

    cout << "Minimal distans of cities - " << temps[0] << endl;

    int counter = 0;

    for (int i = 1; i < temps.size(); i++)
        counter++;

    cout << "Maximum distans of cities - " << temps[counter] << endl;
    cout << endl;
}
