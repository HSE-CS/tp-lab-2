#include <iostream>
#include "../include/task2.h"

int main() {
    auto a = createArr<char, 10>(gen);
    for (size_t i = 0; i < 10; ++i) {
        std::cout << a[i] << ' ';
    }
    std::cout << '\n';
    return 0;
}

