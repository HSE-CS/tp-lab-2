#include <iostream>
#include "task1.h"

int main()
{
    const size_t n = 6;

    int arr[n]{7, 6, -3, 1, -2, 5};
    msort(arr, n);
    for ( auto num: arr)
        std::cout << num << " ";
    std::cout << std::endl;

    char* val[n]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
    msort(val, n);
    for (auto str: val)
        std::cout << str << " | ";
    std::cout << std::endl;

    return 0;
}

