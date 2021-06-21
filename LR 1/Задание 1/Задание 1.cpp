#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int N = 10;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cout << "Введите элемент массива arr[" << i << "]=";
        cin >> arr[i];
    }
    cout << "Элементы массива введены!" << endl;
    cout << "Замена четных чисел массива на 0" << endl;
    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) arr[i] = 0;
        cout << "arr[" << i << "]=" << arr[i] << endl;
    }
    return 0;
}
