#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[3][3];
    cout << "Ввод значений матрицы 3х3" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Введите значение матрицы arr[" << i << "][" << j << "]=";
            cin >> arr[i][j];
        }
    }
    cout << "Значения матрицы введены" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    double det = 0;
    cout << "Определитель матрицы: ";
    det = (arr[0][0] * arr[1][1] * arr[2][2]) + (arr[0][1] * arr[1][2] * arr[2][0])
        + (arr[0][2] * arr[1][0] * arr[2][1]) - (arr[0][2] * arr[1][1] * arr[2][0])
        - (arr[0][0] * arr[1][2] * arr[2][1]) - (arr[0][1] * arr[1][0] * arr[2][2]);
    cout << det << endl;
    return 0;
}
