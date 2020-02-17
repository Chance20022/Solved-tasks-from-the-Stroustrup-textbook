#include <iostream>
#include <vector>
#include <random>

using namespace std;

int random() {
    int randd = 0;

    for (int i = 0; i < 20; i++) {
        randd = rand();
    }
}
// Fuck, i forgot
int main()
{
    vector<int> numbers;
    numbers.push_back(random());

    for (int x : numbers)
        cout << x << " ";
}
