// ad2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip> // setw()
using namespace std;

int main()
{
    setlocale(0, "");
    int var1, var2;
    int massInt[10] = { 4, 8, 42,987,27,41, 7,29,65,97 };
    short massShort[10] = { 876, 44,86,224,87,15,89,55,865,13 };
    long massLong[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
    float massFloat[10] = { 8.4,8.1,9.9,2.9,5.1,9.4,3.7,7.4,3.9,1.9 };
    double massDouble[10] = { 8.578,9.356,9.543,5.987,7.765,2.785,4.346,2.976,3.755,5.765 };
    char massChar[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
    bool massBool[10] = { false, true, false, true, false, true, false, true, false,true };
    const int SIZE = 9;
    int table[SIZE][SIZE];
    const int VVERH = 3;
    const int VBOK = 3;
    int matrix[VVERH][VBOK];
    cout << "Задания с массивами" << endl;
    cout << "[1]Работа с одномерным массивом"<<endl;
    cout << "[2]Работа с многомерными массивами"<<endl;
    cout << "[3]Выход" << endl;
    cout << "Выбирите номер задания: ";
    cin >> var1;
    system("cls");
    switch (var1)
    {
    case 1:
        cout << "[ + ] Массив INT:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "[ + ] massInt[" << i << "] = " << massInt[i] << endl;
        }

        cout << endl;

        cout << "[ + ] Массив SHORT:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "[ + ] massShort[" << i << "] = " << massShort[i] << endl;
        }

        cout << endl;

        cout << "[ + ] Массив LONG:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "[ + ] massLong[" << i << "] = " << massLong[i] << endl;
        }

        cout << endl;

        cout << "[ + ] Массив FLOAT:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "[ + ] massFloat[" << i << "] = " << massFloat[i] << endl;
        }

        cout << endl;

        cout << "[ + ] Массив DOUBLE:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "[ + ] massDouble[" << i << "] = " << massDouble[i] << endl;
        }

        cout << endl;

        cout << "[ + ] Массив CHAR:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "[ + ] massChar[" << i << "] = " << massChar[i] << endl;
        }

        cout << endl;

        cout << "[ + ] Массив BOOL:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "[ + ] massBool[" << i << "] = " << massBool[i] << endl;
        }
        break;
        break;
    case 2:
        cout << "[1]Таблица умножения"<<endl;
        cout << "[2]Обьявить двухмерный массив"<<endl;
        cout << "Выбирете нужное";
        cin >> var2;
        switch (var2)
        {
        case 1:
            for (int i = 0; i < SIZE; ++i) {
                for (int j = 0; j < SIZE; ++j) {
                    table[i][j] = (i + 1) * (j + 1);
                }
            }

            // вывод таблицы умножения
            for (int i = 0; i < SIZE; ++i) {
                for (int j = 0; j < SIZE; ++j) {
                    cout << setw(4) << table[i][j];
                }
                cout << endl;
            }
            break;
        case 2:
            for (int i = 0; i < VVERH; ++i) {
                for (int j = 0; j < VBOK; ++j) {
                    cout << "Введите значение для элемента (" << i + 1 << ", " << j + 1 << "): ";
                    cin >> matrix[i][j];
                }
            }

            // вывод заполненной матрицы
            for (int i = 0; i < VVERH; ++i) {
                for (int j = 0; j < VBOK; ++j) {
                    cout << setw(3) << matrix[i][j] << " ";
                }
                cout << endl;
            }

            for (int j = 0; j < VBOK; ++j) {
                int sum = 0;
                for (int i = 0; i < VVERH; ++i) {
                    sum += matrix[i][j];
                }
                cout << "Сумма элементов столбца " << j + 1 << ": " << sum << endl;
            }

            for (int i = 0; i < VVERH; ++i) {
                int sum = 0;
                for (int j = 0; j < VBOK; ++j) {
                    sum += matrix[i][j];
                }
                cout << "Сумма элементов строки " << i + 1 << ": " << sum << endl;
            }
            break;
        default:
            break;
        }
        break;
    case 3:
        exit;
        break;
    default:
        cout << "Вы ввели некоректные данные";
        break;
    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
