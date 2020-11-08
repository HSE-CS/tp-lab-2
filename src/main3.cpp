#include "task3.h"
#include <iostream>

template<typename T>
T change(T a) {
    return a;
}

template<>
int change(int a) {
    return a * 10;
}

int main() {
    const size_t n = 10;
    int a[n]{12, 34, 1, -999, 100, 6, 0, 1, 2, 3};
    map<int, n>(a, change);
    for (auto & i : a) {
        std::cout << i << " ";
    }
}