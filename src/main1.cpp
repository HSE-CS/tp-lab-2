#include "task1.h"
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    int *buff = new int[n];

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    msort(arr, n);

    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
    cout << '\n';

    return 0;
}
