#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(0, "");

    int step;
    string chain = "0";
    cout << "[+] Сколько шагов вам нужно сделать:";
    cin >> step;
    for (int i = 0;i < step;i++) {
        string plus = chain;
        for (int j = 0;j < chain.size();j++) {
            if (chain[j] == '0') {
                plus[j] = '1';
            }
            if (chain[j] == '1') {
                plus[j] = '0';
            }
        }
        chain.append(plus);
        cout << chain << endl;
    }

    return 0;
}
