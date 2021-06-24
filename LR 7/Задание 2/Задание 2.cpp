#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void sort(double&x, double&y, double&z)
{
    double d1, d2, d3;
    if (x <= y && y <= z) { d1 = x; d2 = y; d3 = z; }
    else if (x <= z && z <= y) { d1 = x; d2 = z; d3 = y; }
    else if (y <= x && x <= z) { d1 = y; d2 = x; d3 = z; }
    else if (y <= z && z <= y) { d1 = y; d2 = z; d3 = y; }
    else if (z <= x && x <= y) { d1 = z; d2 = x; d3 = y; }
    else if (z <= y && y <= x) { d1 = z; d2 = y; d3 = x; }
    x = d1; y = d2; z = d3;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    cout << "Введите переменные a, b, c: ";
    cin >> a >> b >> c;
    cout << endl;
    sort(a, b, c);
    cout << "Наименьшее значение: " << a << endl;
    cout << "Среднее значение: " << b << endl;
    cout << "Наибольшее значение: " << c << endl;
    return 0;
}
