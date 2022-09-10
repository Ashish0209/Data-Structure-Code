#include <iostream>
using namespace std;

void rotate(int *arr, int size, int k)
{
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[(i + k) % size] = arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int a;
    cin >> a;
    int arr[a];
    int k;
    cin >> k;

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    rotate(arr, a, k);
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}