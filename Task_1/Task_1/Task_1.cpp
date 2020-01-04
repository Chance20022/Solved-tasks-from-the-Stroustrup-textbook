#include <iostream>

using namespace std;

int main()
{
    ///Rassian УВЕРЕН?))))
    setlocale(LC_ALL, "Rassian");

    int choice1;
    int choice;
    double money = 0;

    while (1) {
        ///Зачем дважды??? Зачем это тут вообще 
        setlocale(LC_ALL, "Rassian");

        
        cout << "Выберете валюту: 1 - RUB, 2 - UAH, 3 - USD;" << endl;
        cout << "Чтобы выйти, напишите - 228" << endl;

        cin >> choice;

        if (choice == 228) {
            break;
        }

        if (choice == 1) { //рубли

            ///Comma operator ЗАЧЕМ???
            cout << "Какая сумма? - ", cin >> money;
            cout << endl;
            cout << "Во что хотите перевести? 1 - UAH, 2 - USD - ", cin >> choice1;
            cout << endl;

            if (choice1 == 1)
            { // гривня

                // ///Comma operator ЗАЧЕМ???   может точка (.) таки
                money = money * 0,38;
                cout << "По сегодняшнему курсу (0,38) ваша сумма в грифвнях - " << money;
                cout << endl;

            }
            else if (choice1 == 2)
            { // доллар
                money = money * 0,02;
                cout << "По сегодняшнему курсу (0,02) ваша сумма в долларах - " << money;
                cout << endl;
            }
            else {
                cout << "Неизвестная команда" << endl;
            }

        }
        if (choice == 2) { // гривня
            cout << "Какая сумма? - ", cin >> money;
            cout << endl;
            cout << "Во что хотите перевести? 1 - RUB, 2 - USD - ", cin >> choice1;
            cout << endl;

            if (choice1 == 1)
            { // рубли
                money = money * 0, 38;
                cout << "По сегодняшнему курсу (0,38) ваша сумма в рублях - " << money;
                cout << endl;

            }
            else if (choice1 == 2)
            { // доллар
                money = money * 0, 23;
                cout << "По сегодняшнему курсу (23,67) ваша сумма в долларах - " << money;
                cout << endl;
            }
            else {
                cout << "Неизвестная команда" << endl;
            }
        }
        if (choice == 3) { // доллар 
            cout << "Какая сумма? - ", cin >> money;
            cout << endl;
            cout << "Во что хотите перевести? 1 - RUB, 2 - UAH - ", cin >> choice1;
            cout << endl;

            if (choice1 == 1)
            { // рубли
                money = money * 62,02;
                cout << "По сегодняшнему курсу (0,02) ваша сумма в рублях - " << money;
                cout << endl;

            }
            else if (choice1 == 2)
            { // гривни
                money = money * 23,67;
                cout << "По сегодняшнему курсу (0,04) ваша сумма в долларах - " << money;
                cout << endl;
            }
            else {
                cout << "Неизвестная команда" << endl;
            }
        }
        
    }
}
// Это если по мелочи
