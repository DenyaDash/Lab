#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std; 

void division(int a)
{
    int div = 10000, temp;
    for (int i = 0; i < 5; i++)
    {
        temp = a / div;
        cout << temp << endl;
        a %= div;
        div /= 10;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int x = 0;
    cout << "Введите пятизначное число: ";
    while (x < 10000 || x > 99999) 
    {
        cin >> x;
        if (x < 10000 || x > 99999)
            cout << "Это не пятизначное число. Введите еще раз" << endl;
    }
    division(x);
    return 0;
}
