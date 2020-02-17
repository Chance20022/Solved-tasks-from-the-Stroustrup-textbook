#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> x;
    int sum = 0;
    int sumOfnum = 0;

    cout << "Type the number of summated values" << endl;
    cin >> sumOfnum;
    cout << "Enter several integers (For end type -1)" << endl;

    for (double i = 0; cin >> i;) {

        if (i - static_cast<int>(i) != 0) {
            cout << "You need to enter int numbers" << endl;
            return 0;
        }
        if (i == -1) {
            goto point;
        }
        x.push_back(i);
            
    }
    point:
    for (int i = 0; i < sumOfnum; i++) {
        sum = sum + x[i];
    }

    cout << "Sum the first " << sumOfnum << " number = " << sum;
}
