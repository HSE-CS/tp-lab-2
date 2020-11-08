#include "task1.h"

int main()
{
    const int N = 8;
    int arr[N]={ 3, 16, 1 , 0, 2 , 52, 9, 11 };
    msort(arr, N);
    for (int i = 0; i < N; i++)
        std::cout << arr[i] << "\t";

    return 0;
}