// add.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int var1, var2, sise, sise2;
    char symvol;
    cout << "[+] Программа: фигуры " << endl;
    cout << "[1] Линия" << endl;
    cout << "[2] Квадрат" << endl;
    cout << "[3] Прямоугольник" << endl;
    cout << "[4] Треугольник" << endl;
    cout << "[5] Выход" << endl;
    cout << "[+]Выберите фигуру: ";
    cin >> var1;
    system("cls");
    switch (var1)
    {
    case 1://линия
        cout << "Линия" << endl;
        cout << "[1] Горизонтально" << endl;
        cout << "[2] Вертикально" << endl;
        cout << "Выберите положение фигуры: ";
        cin >> var2;
        system("cls");
        switch (var2)
        {
        case 1:
            cout << "Выберете символ, из которых будет фигура: ";
            cin >> symvol;
            do {
                cout << "Выберите размер фигуры: ";
                cin >> sise;
                if (sise < 0) {
                    cout << "ошибка" << endl;
                }
            } while (sise < 0);
            system("cls");
            for (int i = 0;i < sise;i++) {
                cout << symvol;
            }
            break;
        case 2:
            do {
                cout << "Выберите размер фигуры: ";
                cin >> sise;
                if (sise < 0) {
                    cout << "ошибка" << endl;
                }
            } while (sise < 0);
            cout << "Выберите символ, из которых будет фигура: ";
            cin >> symvol;
            system("cls");
            for (int i = 0;i < sise;i++) {
                cout << symvol << endl;
            }
            break;
        default:
            break;
        }
        break;
    case 2://квадрат
        cout << "Квадрат" << endl;
        cout << "[1] Полый" << endl;
        cout << "[2] Заполненный" << endl;
        cout << "Выберите тип квадрата: ";
        cin >> var2;
        system("cls");
        switch (var2)
        {
        case 1:
            do {
                cout << "Выберите размер фигуры: ";
                cin >> sise;
                if (sise < 0) {
                    cout << "ошибка" << endl;
                }
            } while (sise < 0);
            cout << "Выберите символ, из которых будет фигура: ";
            cin >> symvol;
            system("cls");
            for (int i = 1; i <= sise; i++)
            {
                for (int j = 1;j <= sise;j++)
                    if (i == 1 || i == sise || j == 1 || j == sise) {
                        cout << symvol << " ";
                    }
                    else {
                        cout << "  ";
                    }
                cout << endl;
            }
            break;
        case 2:
            do {
                cout << "Выберите размер фигуры: ";
                cin >> sise;
                if (sise < 0) {
                    cout << "ошибка" << endl;
                }
            } while (sise < 0);
            cout << "Выберите символ, из которых будет фигура: ";
            cin >> symvol;
            system("cls");
            for (int i = 0; i < sise; ++i)
            {
                for (int j = 0; j < sise; ++j)
                    cout << symvol << " ";

                cout << endl;
            }
            break;
        default:
            break;
        }
        break;
    case 3://прямоугольник
        cout << "Прямоугольник" << endl;
        cout << "[1] Полый" << endl;
        cout << "[2] Заполненный" << endl;
        cout << "Выберите тип прямоугольника: ";
        cin >> var2;
        system("cls");
        switch (var2)
        {
        case 1:
            do {
                cout << "Выберите одну сторону прямоугольника: ";
                cin >> sise;
                if (sise < 0) {
                    cout << "ошибка" << endl;
                }
            } while (sise < 0);
            do {
                cout << "Выберите вторую сторону прямоугольника: ";
                cin >> sise2;
                if (sise2 < 0) {
                    cout << "ошибка" << endl;
                }
            } while (sise2 < 0);
            cout << "Выберите символ, из которых будет фигура: ";
            cin >> symvol;
            system("cls");
            for (int i = 0;i < sise;i++) {
                for (int j = 0;j < sise2;j++) {
                    if ((j == 0) || (j == sise2 - 1) || (i == 0) || (i == sise - 1))
                        cout << symvol << " ";
                    else {
                        cout << " " << " ";
                    }
                }
                cout << endl;
            }

            break;
        case 2:
            do {
                cout << "Выберите одну сторону прямоугольника: ";
                cin >> sise;
                if (sise < 0) {
                    cout << "ошибка" << endl;
                }
            } while (sise < 0);
            do {
                cout << "Выберите вторую сторону прямоугольника: ";
                cin >> sise2;
                if (sise2 < 0) {
                    cout << "ошибка" << endl;
                }
            } while (sise2 < 0);
            cout << "Выберите символ, из которых будет фигура: ";
            cin >> symvol;
            system("cls");
            for (int i = 0; i < sise; ++i)
            {
                for (int j = 0; j < sise2; ++j)
                    cout << symvol << " ";

                cout << endl;
            }
            break;
        default:
            break;
        }
        break;
    case 4://треугольник
        cout << "Треугольник" << endl;
        cout << "[1] Полый" << endl;
        cout << "[2] Заполненный" << endl;
        cout << "Выберите тип треугольника: ";
        cin >> var2;
        system("cls");
        switch (var2)
        {
        case 1:
            do {
                cout << "Выберите размер фигуры: ";
                cin >> sise;
                if (sise < 0) {
                    cout << "ошибка" << endl;
                }
            } while (sise < 0);
            cout << "Выберите символ, из которых будет фигура: ";
            cin >> symvol;
            system("cls");
            for (int i = 1;i <= sise;i++) {
                for (int j = 1;j <= sise * 2;j++) {
                    if (j == ((sise + 1) - (i - 1)) || j == ((sise + 1) + (i - 1)))
                        cout << symvol;
                    else
                        if (i == sise && j > 1)
                            cout << symvol;
                        else
                            cout << " ";
                }
                cout << endl;
            }
            break;
        case 2:
            do {
                cout << "Выберите размер фигуры: ";
                cin >> sise;
                if (sise < 0) {
                    cout << "ошибка" << endl;
                }
            } while (sise < 0);
            cout << "Выберите символ, из которых будет фигура: ";
            cin >> symvol;
            system("cls");
            for (int i = 0; i < sise; i++)
            {
                for (int j = 1; j < sise - i; j++)
                {
                    cout << ' ';
                }

                for (int j = sise - 2 * i; j <= sise; j++)
                {
                    cout << symvol;
                }
                cout << endl;
            }
            break;
        default:
            break;
        }
        break;
    case 5://выход
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
