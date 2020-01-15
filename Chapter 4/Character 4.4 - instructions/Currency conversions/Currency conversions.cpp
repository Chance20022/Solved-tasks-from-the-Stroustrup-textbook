#include <iostream>

using namespace std;

void operation(int choice) {

    int choice1;
    int money;

    switch (choice) {
 
    case 1:

        cout << "How much? - ", cin >> money;
        cout << endl;
    here:
        cout << "What currency do you want to transfer money to? 1 - UAH, 2 - USD - ", cin >> choice1;
        cout << endl;

        if (choice1 == 1)
        { // гривня

            cout << "At today's rate (0.12) your amount in hryvnias - " << money * 0.12;;
            cout << endl;

        }
        else if (choice1 == 2)
        { // доллар
            cout << "At today's rate (0.02), your amount in dollars - " << money * 0.02;
            cout << endl;
        }
        else {
            cout << "Unknown command" << endl;
            goto here;
        }
        break;

    case 2:

        cout << "How much? - ", cin >> money;
        cout << endl;
    here1:
        cout << "What currency do you want to transfer money to? 1 - RUB, 2 - USD - ", cin >> choice1;
        cout << endl;

        if (choice1 == 1)
        { // рубли
            cout << "At today's rate (0.38), your amount in rubles - " << money * 0.38;
            cout << endl;

        }
        else if (choice1 == 2)
        { // доллар
            cout << "At today's exchange rate (0.23), your amount in dollars - " << money * 0.23;
            cout << endl;
        }
        else {
            cout << "Unknown command" << endl;
            goto here1;
        }
        break;

    case 3:

        cout << "How much? - ", cin >> money;
        cout << endl;
    here2:
        cout << "What currency do you want to transfer money to? 1 - RUB, 2 - UAH - ", cin >> choice1;
        cout << endl;

        if (choice1 == 1)
        { // рубли
            cout << "At today's rate (0.02) your amount in rubles - " << money * 62.02;
            cout << endl;

        }
        else if (choice1 == 2)
        { // гривни
            cout << "At today's exchange rate (0.04), your amount in dollars - " << money * 23.67;
            cout << endl;
        }
        else {
            cout << "Unknown command" << endl;
            goto here2;
        }
        break;
    }


}

int main()
{
    int choice;
    double money = 0;

    while (1) {
        cout << "Choose currency: 1 - RUB, 2 - UAH, 3 - USD;" << endl;
        cout << "To exit, write - 228" << endl;

        cin >> choice;

        operation(choice);
    }
}
