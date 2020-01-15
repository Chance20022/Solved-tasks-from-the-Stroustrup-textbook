#include <iostream>

using namespace std;

int umn(int x, int z) { // Принимает значени, которые я указал в main, в переменной ends

    int end = 0; // Для суммы предыдущих вычислений
    int y = x; // Переменная, на которую будем прибавлять

    for (int i = 1; i < z; i++) { // Цикл, где начало радиуса будет i, а конец z

        end = x + y; 
        x = end;

    }
    return end; // Возвращаем функции то, что нам нужно
}

int main()
{
    //использовать умножение, не используя *

    int start = 0; // Число, которое должны должны прибавить заданное колличесвто раз
    int ymnoj = 0; // То самое колличесво раз

    cout << "Insert the number - ";
    cin >> start;
    cout << endl;
    cout << "Multiply by - ";
    cin >> ymnoj;
    cout << endl;

    int ends = umn(start, ymnoj); // Присваиваем переменной ends результат функции, отправляя в функцию нужные значения

    cout << "Answer - " << ends;
}