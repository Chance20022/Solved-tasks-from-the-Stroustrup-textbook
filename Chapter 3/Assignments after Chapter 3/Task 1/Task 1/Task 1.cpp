#include <iostream>

using namespace std;

int main()
{
    string first_name;

    cout << "Please, enter your name - ", cin >> first_name;
    cout << endl;
    cout << "Hi " << first_name << endl;
    cout << endl;
    cout << "Please, enter the name of the recipient - ", cin >> first_name;
    cout << endl;
    cout << "Dear " << first_name << "," << endl;
}
