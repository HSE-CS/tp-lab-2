#include <iostream>
#include "task1.h"

int main() {
    const size_t n = 7;
    //double arr[n]{4.0, 3.0, 2.4, 2.5, 2.1, -1, -1.5};
    //char **arr = new char *[n]{"abcd", "ab", "abc", "abcdef", "a", "abcde", "ab"};
    int *arr = new int[n]{4, 2, 3, 5, 1, 6, 2};
    msort(arr, n);
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    return 0;
}
