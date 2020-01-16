#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> numbWords = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    string numforoper1;
    string numforoper2;
    char operation = ' ';

    cout << "Input your the first number - ", cin >> numforoper1;
    cout << endl;

    cout << "Input your the second number - ", cin >> numforoper2;
    cout << endl;
    cout << "Input your operation - ", cin >> operation;
    cout << endl;




    /*
    vector<int> numbers = { 0,1,2,3,4,5,6,7,8,9 };
    int numb = 0;
    string numbW;
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
    }*/
}
