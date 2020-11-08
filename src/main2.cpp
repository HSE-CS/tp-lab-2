#include "task2.h"
#include <iostream>

int gen() {
    int num = 0;
    std::cin >> num;
    return num;
}

int main() {
    int size = 10;
    int* A = createArr<int, size>(&gen);
    for (int i = 0; i < size; ++i) {
        std::cout << A[i] << " ";
    }
}
