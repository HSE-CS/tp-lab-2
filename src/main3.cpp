#include "task3.h"

template<class T>
T change(T val) {
    return val + 1;
}

int main() {
    const unsigned int SIZE = 5;
    int arr[SIZE]{6, 1, 2, 3, 4};
    map<int, SIZE>(arr, change);
    for (int i = 0; i < SIZE; i++)
        std::cout << arr[i] << ",";
    return 0;
}
