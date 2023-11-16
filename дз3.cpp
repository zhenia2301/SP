// дз3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>;
using namespace std;

int main()
{
    setlocale(0, "");
    int var1;
    int var2;
    cout << "Переводчик" << endl;
    cout << "[1]Русские слова" << endl;
    cout << "[2]Английские слова" << endl;
    cout << "[3]Выйти" << endl;
    cout << "Выберите нужное:";
    cin >> var1;
    system("cls");
    switch (var1)
    {
    case 1:
        cout << "Русские слова" << endl;
        cout << "[1]Привет" << endl;
        cout << "[2]Мир" << endl;
        cout << "[3]Слово" << endl;
        cout << "[4]Дорога" << endl;
        cout << "[5]Мяч" << endl;
        cout << "[6]Стол" << endl;
        cout << "[7]Огонь" << endl;
        cout << "[8]Солнце" << endl;
        cout << "[9]Вода" << endl;
        cout << "[10]Земля" << endl;
        cout << "[11]Воздух" << endl;
        cout << "[12]Машина" << endl;
        cout << "[13]Кот" << endl;
        cout << "[14]Собака" << endl;
        cout << "[15]Октябрь" << endl;
        cout << "Выберите номер слова:";
        cin >> var2;
        system("cls");
        switch (var2)
        {
        case 1:
            cout << "Перевод: Привет - Hello";
            break;
        case 2:
            cout << "Перевод: Мир - World";
            break;
        case 3:
            cout << "Перевод: Слово - Word";
            break;
        case 4:
            cout << "Перевод: Дорога - Road";
            break;
        case 5:
            cout << "Перевод: Мяч - Ball";
            break;
        case 6:
            cout << "Перевод: Стол - Table";
            break;
        case 7:
            cout << "Перевод: Огонь - Fier";
            break;
        case 8:
            cout << "Перевод: Солнце - Sun";
            break;
        case 9:
            cout << "Перевод: Вода - Watre";
            break;
        case 10:
            cout << "Перевод: Земля - Earth";
            break;
        case 11:
            cout << "Перевод: Воздух - Air";
            break;
        case 12:
            cout << "Перевод: Машина - Car";
            break;
        case 13:
            cout << "Перевод: Кот - Cat";
            break;
        case 14:
            cout << "Перевод: Собака - Dog";
            break;
        case 15:
            cout << "Перевод: Октябрь - Octobre";
            break;
        default:
            break;
        }
    case 2:
        cout << "Английские слова" << endl;
        cout << "[1]Hello" << endl;
        cout << "[2]World" << endl;
        cout << "[3]Word" << endl;
        cout << "[4]Road" << endl;
        cout << "[5]Ball" << endl;
        cout << "[6]Table" << endl;
        cout << "[7]Fier" << endl;
        cout << "[8]Sun" << endl;
        cout << "[9]Watre" << endl;
        cout << "[10]Earth" << endl;
        cout << "[11]Air" << endl;
        cout << "[12]Car" << endl;
        cout << "[13]Cat" << endl;
        cout << "[14]Dog" << endl;
        cout << "[15]Octobre" << endl;
        cout << "Выберите номер слова:";
        cin >> var2;
        system("cls");
        switch (var2)
        {
        case 1:
            cout << "Перевод: Hello - Привет";
            break;
        case 2:
            cout << "Перевод: World - Мир";
            break;
        case 3:
            cout << "Перевод: Word - Слово";
            break;
        case 4:
            cout << "Перевод: Road - Дорога";
            break;
        case 5:
            cout << "Перевод: Ball - Мяч";
            break;
        case 6:
            cout << "Перевод: Table - Стол";
            break;
        case 7:
            cout << "Перевод: Fier - Огонь";
            break;
        case 8:
            cout << "Перевод: Sun - Солнце";
            break;
        case 9:
            cout << "Перевод: Watre - Вода";
            break;
        case 10:
            cout << "Перевод: Earth - Земля";
            break;
        case 11:
            cout << "Перевод: Air - Воздух";
            break;
        case 12:
            cout << "Перевод: Car - Машина";
            break;
        case 13:
            cout << "Перевод: Cat - Кот";
            break;
        case 14:
            cout << "Перевод: Dog - Собака";
            break;
        case 15:
            cout << "Перевод: Octobre - Октябрь";
            break;
        default:
            break;
        }
    case 3:
        exit;
        break;
    default:
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
