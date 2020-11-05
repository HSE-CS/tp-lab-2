#include <iostream>
#include "../include/task3.h"

int change(int v) {
    return v + 1;
}

int main() {
    const size_t n = 5;
    int arr[n]{1, 2, 3, 4, 5};
    map<int, n>(arr, change);
    for (size_t i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
    return 0;
}

