#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <iostream>
#include <cstdlib>
#include <cstring>


int main()
{
    const size_t size = 5;
    int array[size];
    for (size_t i = 0; i < size; i++) {
        array[i] = rand() % 10;
    }
    for (size_t i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    map<int, size>(array, square);
    std::cout << "\n";
    for (size_t i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    return 0;
}