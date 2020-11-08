#include "task2.h"
#include <iostream>

using namespace std;

int main() {
    const size_t n = { 5 };
    int* a = createArr<int, n>(gen);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0;
}