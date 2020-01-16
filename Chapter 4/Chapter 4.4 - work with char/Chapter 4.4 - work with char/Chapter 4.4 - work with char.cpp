#include <iostream>

using namespace std;

int main()
{
    int chars = 96;
    char letter = chars;

    for (int i = 0; i <= 25; i++) 
    {
        chars++;
        letter = chars;
        cout << "Right now, you have " << letter << " letter and it have mumber - " << chars << endl;
    }
}
