#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    //использовать умножение, не используя *

    int start = 0;
    int ymnoj = 0;
    int end = 0;

    cout << "Введите число - ";
    cin >> start;
    cout << endl;
    cout << "Умножаем на - ";
    cin >> ymnoj;
    cout << endl;

    int z = start;

    for (int i = 1; i < ymnoj; i++) {
 
        end = start + z;
        start = end;

    }
    cout << "ответ - " << end;
}
