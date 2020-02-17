#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>fibanachi = {0,1};
    int sum = 0;

    for (int i = 1; i < 10; i++) {
        sum = fibanachi[i] + fibanachi[i - 1];
        fibanachi.push_back(sum);
    }

    for (int x : fibanachi) {
        cout << x << " ";
    }
}
