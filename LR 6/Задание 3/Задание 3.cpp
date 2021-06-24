#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
//Функция сортировки массива вставками
void insert_sort(int* arr, int N) {
    int temp, k;
    for (int i = 0; i < N - 1; i++) {
        k = i + 1;
        temp = arr[k];
        for (int j = i + 1; j > 0; j--) {
            if (temp < arr[j - 1]) {
                arr[j] = arr[j - 1];
                k = j - 1;
            }
        }
        arr[k] = temp;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    cout << "Введите количество элементов массива: ";
    cin >> N;
    int* arr;
    arr = new int[N];
    for (int i = 0; i < N; i++) {
        cout << "Введите элементы массива arr[" << i << "]=";
        cin >> arr[i];
    }
    cout << endl;
    cout << "Сортировка массива вставками" << endl;
    insert_sort(arr, N);
    for (int i = 0; i < N; i++) {
        cout << "arr[" << i << "]=" << arr[i] << endl;
    }
    delete[]arr;
    return 0;
}
