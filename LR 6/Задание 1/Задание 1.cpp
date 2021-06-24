#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
//Функция, возвращающая наибольший из 3-ех целочисленных аргументов
int max_int(int a, int b, int c)
{
    int max = 0;
    if ((a > b) && (a > c))
        max = a;
    if ((b > a) && (b > c)) 
        max = b;
    if ((c > a) && (c > b))
        max = c;
    return max;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите 3 числа:";
    cin >> a >> b >> c;
    cout << endl;
    cout << "Наибольшее число: " << max_int(a, b, c) << endl;
    return 0;
}
