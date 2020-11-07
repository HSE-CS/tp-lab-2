/*
 * @author Stanislav Stoianov
 */

#include <iostream>
#include <cstring>
#include "../include/task2.h"

template<typename T>
T gen();

int main() {
    const size_t n = 5;
    int *arr = createArr<int, n>(gen);
    for (size_t i = 0; i < n; i++) std::cout << arr[i] << ' ';
    return 0;
}

template<typename T>
T gen() {
    static int t = 43;
    return t *= 5;
}