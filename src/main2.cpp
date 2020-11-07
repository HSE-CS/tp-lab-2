#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <iostream>
#include <cstdlib>
#include <cstring>


int main()
{
    const size_t size = 5;
    double* array;
    array = createArr<double, size>(gen1);
    for (size_t i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    return 0;
}