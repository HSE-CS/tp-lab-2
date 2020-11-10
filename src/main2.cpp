#include "task2.h"

template<class T>
T gen() {
    static int t = 48;
    return t++;
}

int main() {
    const int SIZE = 5;
    int *arr3 = createArr<int, SIZE>(gen);
    for (int i = 0; i < SIZE; i++)
        std::cout << arr3[i] << ",";
    return 0;
}

