#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

double avg_harm(double x, double y)
{
    double avg;
    x = 1 / x;
    y = 1 / y;
    avg = 2 / (x + y);
    return avg;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y;
    cout << "Введите 2 числа" << endl;
    cout << "Число 1: ";
    cin >> x;
    cout << "Число 2: ";
    cin >> y;
    cout << "Среднее гармоническое равно: " << avg_harm(x, y) << endl;
    return 0;
}
