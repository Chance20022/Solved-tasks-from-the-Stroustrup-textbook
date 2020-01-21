#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = { 12,89,51,2,514,24,79,76,24,5,62,20,40,90,6,77, 100 };
    string answer;
    int choice = 0; // Один из компонентов при вычислении логики
    int i = 0; // Счётчик
    int logic = 0; // Логика, на которой основывается выбор программы

    while (i != -1) {
    here:
        cout << "Input your choice (rock, paper, scissors) - ";
        cin >> answer;
        cout << endl;

        // idk but "switch (answer)" don't work

        if (answer == "rock") {
            choice = 0;
        }
        else if (answer == "paper") {
            choice = 50;
        }
        else if (answer == "scissors") {
            choice = 100;
        }
        else {
            cout << "Defaut";
            goto here;
        }

        logic = numbers[i] - choice; // От результата будет зависеть, что выведет программа. 
        // дальше я просто вычел среднеарифметическое число в вескторе и на основе этого числа прикинул границы выборов

        if (logic <= 5) { //rock
            cout << "Program selects rock" << endl;
            if (answer == "rock")
                cout << "Draw" << endl;
            if (answer == "paper")
                cout << "You are lose" << endl;
            if (answer == "scissors")
                cout << "You are win" << endl;
        }
        if (logic > 5 && logic <= 43) { //paper
            cout << "Program selects paper" << endl;
            if (answer == "rock")
                cout << "You are lose" << endl;
            if (answer == "paper")
                cout << "Draw" << endl;
            if (answer == "scissors")
                cout << "You are win" << endl;
        }
        if (logic > 43) { //scissors
            cout << "Program selects scissors" << endl;
            if (answer == "rock")
                cout << "You are win" << endl;
            if (answer == "paper")
                cout << "You are lose" << endl;
            if (answer == "scissors")
                cout << "Draw" << endl;
        }
        i++; // Чтобы перейти в следующий элемент массива
    }
}
