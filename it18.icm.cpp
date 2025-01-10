#include <iostream>
#include <string>
#include <Windows.h>
#include "it.h" // подключаем заголовочный файл

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string input;
    int n;

    cout << "Введите n (больше 40): ";

    while (true) { // бесконечный цикл для обработки пользовательского ввода
        getline(cin, input); // считываем всю строку

        if (!f(input)) { // проверяем корректность ввода
            cout << "Ввод некорректен , введите число больше 40: ";
            continue;
        }

        n = stoi(input); // преобразуем строку в целое число

        if (n <= 40) { // проверяем, что n больше 40
            cout << " Ввод некорректен , введите число больше 40: ";
            continue;
        }

        break; // корректный ввод, выходим из цикла
    }

    string r = step(n);
    cout << "Результат 2^" << n << " - 1 = " << r << endl;

    return 0;
}
