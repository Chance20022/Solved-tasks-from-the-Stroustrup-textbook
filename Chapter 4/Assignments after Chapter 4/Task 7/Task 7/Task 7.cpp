#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> numbWords = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" };
    vector<string> numbers = { "0","1","2","3","4","5","6","7","8","9","10" };
    string numforoper1; // Для воода первого числа
    string numforoper2; // для ввода второго числа
    char operation = ' '; // Для воода оператора
    int answerInWords1 = 0; // Для переводда из слов в число из переменной numforoper1
    int answerInWords2 = 0; // Для переводда из слов в число из переменной numforoper2
    int answer = 0;

    cout << "Input your the first number - ", cin >> numforoper1;
    cout << endl;
    cout << "Input your the second number - ", cin >> numforoper2;
    cout << endl;
    cout << "Input your operation - ", cin >> operation;
    cout << endl;

    for (int i = 0; i < numbWords.size(); i++) { // Преобразуем слова в числа
        if (numforoper1 == numbWords[i])
            answerInWords1 = i;
        if (numforoper2 == numbWords[i])
            answerInWords2 = i;
        if (numforoper1 == numbers[i])
            answerInWords1 = i;
        if (numforoper2 == numbers[i])
            answerInWords2 = i;
    }

    if (operation == '+')
        cout << numforoper1 << operation << numforoper2 << "=" << answerInWords1 + answerInWords2;
    if (operation == '-')
        cout << numforoper1 << operation << numforoper2 << "=" << answerInWords1 - answerInWords2;
    if (operation == '/')
        cout << numforoper1 << operation << numforoper2 << "=" << answerInWords1 / answerInWords2;
    if (operation == '*')
        cout << numforoper1 << operation << numforoper2 << "=" << answerInWords1 * answerInWords2;
}
