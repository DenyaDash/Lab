#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string s;
    string st;
    cout << "Введите символ: ";
    do
    {
        getline(cin, s);
        if (s.length() > 1) cout << "Введите еще раз" << endl;
    } while (s.length() > 1);
    cout << "Символ введен" << endl;
    cout << endl;
    cout << "Введите строку: ";
    do
    {
        getline(cin, st);
        if (st.length() <= 1) cout << "Введите еще раз" << endl;
    } while (st.length() <= 1);
    cout << "Строка введена" << endl;
    cout << endl;
    int pos = st.find(s, 0);
    if (pos != string::npos)
        cout << "Номер символа в строке: " << pos + 1 << endl;
    else cout << "Символ в строке отсутствует" << endl;
    return 0;
}
