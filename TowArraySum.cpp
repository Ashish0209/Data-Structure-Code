#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
}

void reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;

    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    print(v);
}

void sum(int *arr1, int *arr2, int a, int b)
{
    int i = a - 1;
    int j = b - 1;

    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];

        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while (i >= 0)
    {
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        int sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    reverse(ans);
}

int main()
{
    int a, b;
    cin >> a >> b;

    int arr1[a];
    int arr2[b];

    for (int i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> arr2[i];
    }

    sum(arr1, arr2, a, b);

    return 0;
}