#include <iostream>
#include "task3.h"
#define size 10
using namespace std;

template<typename T>
T change(T a)
{
    return a*a;
}



int main()
{
    int arr[size]{ 123, 11, 3, -6, 12 ,78, 1, 9, 2, 23 };
    map(arr, change);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}