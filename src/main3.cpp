#include <iostream>
#include "task3.h"

int square(int a)
{
    return a * a;
}

int main()
{
    const size_t n = 5;
    int arr[]{1, 2, 3, 4, 5};
    map<int, n>(arr, square);

    for (auto num: arr)
        std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}

