#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> numbWords = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    vector<int> numbers = { 0,1,2,3,4,5,6,7,8,9 };
    int numb = 0; /*Auxiliary variable for determining the index in the vector (the index corresponds to the numbers in the vector)*/
    string numbW; /*Helper variable for comparing elements in a vector*/
    int choice = 0;
    cout << "What you want? From uppercase to numeric (1) or from numeric to uppercase (0)? - ", cin >> choice;
    cout << endl;
    
    if (choice == 1) {
        cout << "Input your number 0 to 9 - ", cin >> numb;
        cout << endl;
        cout << "Youre number in uppercase - " << numbWords[numb];
    }
    else if (choice == 0) {
        cout << "Input your number zero to nine - ", cin >> numbW;
        cout << endl;
        for (int i = 0; i < numbWords.size(); i++) {
            if (numbW == numbWords[i]) {
                cout << "Youre number in numeric - " << i;
                break;
            }
        }
    }
    return 0;
}