#include <iostream>
#include <vector>

using namespace std;

vector<int> Monday = { 0 };
vector<int> Tuesday = { 0 };
vector<int> Wednesday = { 0 };
vector<int> Thursday = { 0 };
vector<int> Friday = { 0 };
vector<int> Saturday = { 0 };
vector<int> Sunday = { 0 };
int uncorrect = 0;
int summ = 0;


int sum(int x) {
    summ = summ + x;
    return summ;
}

void check(string s, int x) {

    if (s != "aaaaagggggg") {
        if (s == "Monday" || s == "Mon" || s == "monday") {
            Monday.push_back(x);
        }
        if (s == "Tuesday" || s == "Tue" || s == "tuesday") {
            Tuesday.push_back(x);
        }
        if (s == "Wednesday" || s == "Wed" || s == "wednesday") {
            Wednesday.push_back(x);
        }
        if (s == "Thursday" || s == "Thu" || s == "thursday") {
            Thursday.push_back(x);
        }
        if (s == "Friday" || s == "Fri" || s == "friday") {
            Friday.push_back(x);
        }
        if (s == "Saturday" || s == "Sat" || s == "saturday") {
            Saturday.push_back(x);
        }
        if (s == "Sunday" || s == "Sun" || s == "sunday") {
            Sunday.push_back(x);
        }
    }
    else {
        cout << "Uncorrect days!" << endl;
        uncorrect++;
    }
    

}

int main()
{
    
    int numb = 0;
    int sumOfNum = 0;
    string days;

    while (cin) {
        cout << "if you want out enter - stop 0" << endl;
        cout << "Enter days of the week and numbers - ";
        cin >> days >> numb;

        if ((days == "stop" || days == "Stop") && numb == false) {
            cout << "You are out" << endl;
            break;
        }

        check(days, numb);
        sumOfNum = sum(numb);
    }
    cout << "Sum of numbers - " << sumOfNum;
    cout << "Invalid numbers - " << uncorrect;
    return 0;
}