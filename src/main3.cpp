#include "task3.h"

template<class T>
T change(T val)
{
    return val + 1;
}

int main()
{
    const unsigned int N = 5;
    int arr[N]{1,2,3,4,5};
    map<int, N>(arr, change);
    for (int i=0; i<N;i++)
        std::cout << arr[i] << ",";
    return 0;
}