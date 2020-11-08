#include "task2.h"

template<class T>
T gen() {
    return 0;
}

int main() {
    const size_t n = 5;
    int* arr;
    arr = createArr<int, n>(&gen);
    for (size_t i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}