#include <iostream>
using namespace std;

bool SortedRotated(int *arr, int size)
{
    int cnt = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            cnt++;
        }
    }
    if (arr[size - 1] > arr[0])
    {
        cnt++;
    }
    return cnt <= 1;
}

int main()
{
    int arr[5] = {3, 5, 7, 1, 6};
    int size = 5;
    bool ans = SortedRotated(arr, 5);
    if (ans)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}