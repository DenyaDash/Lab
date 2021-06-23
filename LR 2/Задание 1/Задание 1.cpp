#include <iostream>
#include <conio.h>
#include <string>
#include <cstring>

using namespace std;
//Функция сжатия входящей строки произвольного масштаба
string comp_str(string str)
{
    string s;
    int count; // количество повторяющихся символов
    for (int i = 0; i < str.length(); i++) {
            if (str[i] == str[i + 1]) {
                count=2;
                i++;
                for (int j = i; j < str.length(); j++) {
                    if (str[i] == str[i + 1]) {
                        count++;
                        i++;
                    }
                }
                s += "(" + to_string(int(str[i])) + "-" + to_string(count) + ")"; //код символа и количество повторяющихся символов
            }
            else s += str[i];
    }
    return s;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    string str;
    cout << "Введите строку:" << endl;
    getline(cin, str);
    cout << "Сжатие строки" << endl;
    cout << comp_str(str) << endl;
    return 0;
}
