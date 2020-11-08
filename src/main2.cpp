#include "task2.h"
#include <iostream>

using namespace std;


template<class T>
T gen()
{
    static int t = 50;
    return --t;
}

int main() {
    const size_t n = 5;
    int* a = createArr<int, n>(gen);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0;
}