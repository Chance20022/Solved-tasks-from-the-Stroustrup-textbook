﻿#include <iostream>
#include <vector>

using namespace std;

int main()
{
    try {
        vector<int> x;
        int sum = 0;
        int sumOfnum = 0;

        cout << "Type the number of summated values" << endl;
        cin >> sumOfnum;
        cout << "Enter several integers (For end type -1)" << endl;

        for (int i = 0; cin >> i;) {

            x.push_back(i);

            if (i == -1)
                goto point;

        }
    point:
        for (int i = 0; i < sumOfnum; i++) {
            sum = sum + x[i];
        }

        cout << "Sum the first " << sumOfnum << " number = " << sum;
    }
    catch (out_of_range) {
        cout << "Diapazon";
    }
}