#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

double avg(int* mas, int N) {
    int sum = 0;
    double avg;
    for (int i = 0; i < N; i++)
        sum += mas[i];
    avg = (float)sum / N;
    return avg;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int* arr, N;
    cout << "Введите количество элементов массива: ";
    cin >> N;
    arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Введите элемент массива arr[" << i << "]=";
        cin >> arr[i];
    }
    cout << "\nМассив" << endl;
    for (int i = 0; i < N; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << "\nСреднее арифметрическое массива равно " << avg(arr, N) << endl;
    return 0;
}
