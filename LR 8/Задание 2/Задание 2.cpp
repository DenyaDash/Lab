#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

char transform(char ch)
{
    int num;
    num = (int)ch - 32;
    ch = (char)num;
    cout << "Буква - ";
    return ch;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    char s;
    while (1)
    {
        cout << "Введите символ или 0 для выхода: ";
        cin >> s;
        if (s == '0') break;
        cout << transform(s) << endl;
    }
    return 0;
}
