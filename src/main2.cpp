#include<iostream>
#include "task2.h"

int main() {
    const size_t n = { 5 };
    int* arr = createArr<int, n>(gen);
    for (int i = { 0 }; i < n; ++i)
        std::cout << arr[i] << " ";
    return 0;
}
