#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

//Функция для составления подстроки с помощью генератора псевдослучайных чисел
string rand_str()
{
    int* a, N;
    string s;
    srand(time(0));
    N = rand() % 10+2;
    a = new int[N];
    for (int i = 0; i < N; i++) 
        a[i] = rand() % 26 + 97;
    for (int i = 0; i < N; i++)
        s += (char)a[i];
    return s;
}

//Замена подстроки
string change_str(string str, string sub, string new_sub)
{
    string new_str;
    int l1, l2, start, point = 0;
    l1 = str.length();
    l2 = sub.length();
    for (int i = 0; i < l1; i++)
    {
        start = i;
        for (int j = 0; j < l2; j++)
        {
            if (str[i] == sub[j])
            {
                if (j == l2 - 1)
                {
                    for (int k = point; k < start; k++)
                        new_str += str[k];
                    new_str += new_sub;
                    point = start + l2;
                }
            }
            else
                break;
            i++;
        }
    }
    for (int k = point; k < l1; k++)
        new_str += str[k];
    return new_str;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    string str, sub, n_str, n_sub;
    cout << "Введите строку: ";
    getline(cin, str);
    cout << "Введите подстроку:";
    getline(cin, sub);
    n_sub = rand_str();
    n_str = change_str(str, sub, n_sub);
    cout << "Новая строка: " << endl;
    cout << n_str << endl;
    return 0;
}
