#include <iostream>
#include "task3.h"

using namespace std;

template<class T>
T change(T val)
{
    return val + 1;
}

int main()
{
    const size_t n = 5;
    int arr[n]{1, 2, 3, 4, 5};
    map<int, n>(arr, change);
    for (int i : arr) {
        cout << i << endl;
    }
    return 0;
} 