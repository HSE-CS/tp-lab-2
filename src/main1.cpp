#include <iostream>
#include "task1.h"
int main()
{
    const size_t n = 7;
    int arr[n]{7, 6, -3, 1, -2, 8, 5};
    msort(arr, n);
    for ( auto num: arr)
        std::cout << num << " ";
    std::cout << std::endl;
    return 0;
}

