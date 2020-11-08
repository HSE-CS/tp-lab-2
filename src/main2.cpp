#include <iostream>
#include "task2.h"

template<typename T>
T gen() {
    return 0;
}

template<>
int gen() {
    return (int) (rand() * 200.0 / RAND_MAX - 100.0);
}

int main() {
    const size_t n = 10;
    int *a = createArr<int, n>(gen);
    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << " ";
    }
}