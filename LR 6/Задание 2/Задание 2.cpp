#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int nine(int enter)
{
    int up = 5, down = 0, flag_1 = 1, flag_2 = 1;
    string str;
    while (flag_1)
    {
        cout << "Выберитье один из следующих вариантов:\n1) копировать файлы" << setw(30) << "2) переместить файлы\n";
        cout << "3) удалить файлы" << setw(34) << "4) выйти из программы\n";
        cin >> str;
        for (int i = 0; i < str.length(); i++)
        {
            if (!isdigit(str[i]))
            {
                enter = 4;
                flag_2 = 0;
            }
        }
        if (!flag_2)
        {
            cout << "Введенное значение не является целым числом, таким образом, автоматически\n";
            break;
        }
        enter = stoi(str);
        if (enter < up && enter > down)
            flag_1 = 0;
    }
    return enter;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0;
    a = nine(a);
    cout << "Введенное значение = " << a << endl;
    return 0;
}
