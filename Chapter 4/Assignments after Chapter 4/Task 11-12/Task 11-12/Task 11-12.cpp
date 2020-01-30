#include <iostream>
#include <vector>

using namespace std;

int check(int x) {
    if (x == 0 || x == 1)
        return false;
    
    for (int i = 2; i < x; i++) {
        if (!(x % i))
            return false;
    }

    return true;
}

int main()
{
    vector<int> basicNum;
    int choice = 0;

    cout << "Input your range - ", cin >> choice;
    cout << endl;

    for (int i = 0; i < choice; i++) {
        if (check(i)) {
            basicNum.push_back(i);
        }
    }

    for (int x : basicNum) {
        cout << x << ", ";
    }
}