#include "task2.h"
#include <iostream>

int gen() {
    int num = 0;
    std::cin >> num;
    return num;
}

int main() {
    int* A = createArr<int,10>(&gen);
    for (int i = 0; i < 10; ++i) {
        std::cout << A[i] << " ";
    }
}
