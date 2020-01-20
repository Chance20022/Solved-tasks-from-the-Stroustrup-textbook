#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int cornMem = 1;
    int counter = 0;
    
    for (int i = 1; i < 1000; i++) {
        cornMem = cornMem * 2;
        if (cornMem > 1000) {
            counter = i;
            cout << "You need " << counter << " cell for 1000" << endl;
            counter = i;
            break;
        }
    }
    for (int i = 1; i < 1000000; i++) {
        cornMem = cornMem * 2;
        if (cornMem > 1000000) {
            counter = counter + i;
            cout << "You need " << counter << " cell for 1000000" << endl;
            break;
        }
    }
    for (int i = 1; i < 1000000000; i++) {
        cornMem = cornMem * 2;
        if (cornMem > 1000000000) {
            counter = counter + i;
            cout << "You need " << counter << " cell for 1000000000" << endl;
            break;
        }
    }
}
