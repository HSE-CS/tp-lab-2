#include <iostream>
#include "../include/task2.h"

int gen(){
    static int a = 10;
    return a++;
}

int main() {
    auto a = createArr<int, 10>(gen);
    for (size_t i = 0; i < 10; ++i) {
        std::cout << a[i] << ' ';
    }
    std::cout << '\n';
    return 0;
}

