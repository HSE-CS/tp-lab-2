//RogozyanAnastasiya
#include <iostream>
#include <cstring>
#include "../include/task1.h"

int main() {
    const int size = 5;
    double arr[size] = {18.3, 98.3, -15.2, 0, 8800.555};
    msort(arr, size);
    for(size_t i = 0; i < size; i++)
        std::cout<<arr[i]<<" ";
    return 0;
} 
