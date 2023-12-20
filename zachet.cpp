//расшифровать рукопись погибшей цивилизации с помощью шифра Цезеря (каждая буква заменяется на следующую n раз)
//найти n и расшифровать рукопись за пару

#include <iostream>
#include "windows.h"
#include <cstring>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    char str[] = {"аьа шаь стёцвюьпнщ атшяа аьеыь эьщбеца эьщьфцатщйыбл ьдтышб"};
    int n, k;
    for(int i = 1; i < 34; i++)
    {
        cout << "\nn = " << i << ' ';
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[j] == ' ')
            {
                cout << str[j];
                continue;
            }
            else if (str[j] == 'п')
                str[j] = 'р';
            else if (str[j] == 'е')
                str[j] = 'ё';
            else if (str[j] == 'ё')
                str[j] = 'ж';
            else if (str[j] == 'я')
                str[j] = 'а';
            else
                str[j]++;
            cout << str[j];
        }
    }
    cout << "\n\n" << "при кол-ве сдвигов n = 19 получается текст\n";
    return 0;
}
