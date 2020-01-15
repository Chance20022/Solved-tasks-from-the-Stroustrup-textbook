#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    //exercise 2 on page 169

    vector<float> temps; // Вектор, который будет держать в себе значения темпиратуры
    float result = 0; //Чтобы избежать не целочисленных чисел при вычислении медианы
    for (float temp; cin >> temp;)
        temps.push_back(temp);

    cout << endl;

    if (temps.size() / 2 % 2)// Чтобы избавиться от остатка при делении на нечётные числа
        result = temps[temps.size() / 2] + 1; // все чётные числа, делящиеся на 2, не имеют остатка. И если при делении на 2 есть остаток
                                              //То прибавляем 1, чтобы избежать остаток (по заданию допускается)
    else result = temps[temps.size() / 2];

    cout << "Temperature median - " << result << endl;

    //exercise 3 on page 169
    
    
    float sum = 0;
    for (float s : temps) sum += s;
    cout << "Sum of all distances - " << sum << endl;

    float min = 0;
    float max = 0;

    sort(temps.begin(), temps.end());

    cout << "Minimal distans of cities - " << temps[0] << endl;

    int counter = 0;

    for (int i = 1; i < temps.size(); i++)
        counter++;

    cout << "Maximum distans of cities - " << temps[counter] << endl;
    cout << endl;

    // Я ебал эту сортировку пузырьком, она тупо не работает для векторов. Я потратил целый день зря

    // exercise 4 on page 169


}
