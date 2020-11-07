/*
 * @author Stanislav Stoianov
 */

#include <iostream>
#include "../include/task3.h"

int doubling(int a);

int main() {
    int arr[]{1, 2, 3, 4, 5};
    map<int, 5>(arr, doubling);
    for (auto num: arr) std::cout << num << " ";
    return 0;
}

int doubling(int a) { return 2 * a; }