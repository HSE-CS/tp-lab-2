#include <iostream>
#include "task3.h"

using namespace std;

int main()
{
    const size_t n = 10;
    int *a = new int[n]{5, 3, 7, 1, 9, 2, 8, 6, 4, 0};
    for (int i = 0; i < n; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    map<int, n>(a,func);
    for (int i = 0; i < n; ++i)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
