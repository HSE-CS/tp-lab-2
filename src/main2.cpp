#include "task2.h"
#include <iostream>
#define N 10

using namespace std;

int main() {
    int* a = createArr<int, N>(gen);
    for (int i = 0; i < N; ++i) cout << a[i] << ' ';
    cout << '\n';
    return 0;
}