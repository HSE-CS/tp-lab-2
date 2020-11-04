#include "task2.h"

int main() {
    const size_t n = 5;
    int* arr;
    arr = createArr<int, n>(gen);
    int* expected = new int[n] {48, 49, 50, 51, 52};
    for (int i = 0; i < n; i++)
        cout << expected[i] << "-" << arr[i] << endl;
    return 0;
}