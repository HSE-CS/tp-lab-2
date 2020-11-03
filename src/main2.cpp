#include "task2.h"

int main() {
    const size_t n = 5;
    int* arr;
    arr = createArr<int, n>(gen); //expected = new int[n]{48, 49, 50, 51, 52};
    for (auto i = 0; i < n; ++i) {
        std::cout << arr[i] << '\t';
    }
    return 0;
}