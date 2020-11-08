#include "task2.h"

template<class T>
T gen()
{
    static int t = 48;
    return t++;
}

int main()
{
    const int N = 5;
    int*arr=createArr<int, N>(gen);
    for (int i = 0; i < N; i++)
        std::cout << arr[i] << ",";
    return 0;
}