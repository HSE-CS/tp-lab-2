#include "task2.h"
#include <iostream>
using namespace std;

template<typename T>
T gen() 
{
    static int t = 1;
    return t++;
}

int main()
{
    const int n = 5;
    int* arr = createArr<int, n>(gen);
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    return 0;
}
